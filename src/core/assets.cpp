#include "assets.hpp"

namespace Core
{
  namespace Assets
  {
    cv::Mat readImage(const std::string &uri)
    {
      if (uri.find("http") == 0)
      {
        return downloadImage(uri);
      }
      else
      {
        return loadImage(uri);
      }
    }

    cv::Mat loadImage(const std::string &path)
    {
      cv::Mat image = cv::imread(path, cv::IMREAD_UNCHANGED);

      if (image.empty())
      {
        throw Exceptions::FailedImageLoad(path);
      }

      if (image.type() != CV_8UC4 || image.channels() != 4 || image.dims != 2)
      {
        throw Exceptions::InvalidImage();
      }

      return image;
    }

    cv::Mat loadBackground(Template::Base tmplate, Card::Edition const &edition)
    {
      std::string templatePath = tmplate.getBackgroundPath(edition);
      cv::Mat image = readImage(templatePath);

      return image;
    }

    cv::Mat loadFlag(Player::Country const &country)
    {
      std::string templatePath = "assets/nations/flags/" + countryToString(country) + ".png";
      cv::Mat image = loadImage(templatePath);

      return image;
    }

    Template::Font::Buffers loadFonts(Template::Base tmplate, Card::Edition const &edition)
    {
      Template::Font::Buffers buffer;
      Template::Font::Fonts fonts = Template::Font::init();
      Template::Font::Target target = fonts[tmplate.fonts];

      buffer.name = loadFont(target.name, edition);
      buffer.value = loadFont(target.value, edition);
      buffer.label = loadFont(target.label, edition);
      buffer.overall = loadFont(target.overall, edition);
      buffer.position = loadFont(target.position, edition);

      return buffer;
    }

    Template::Font::Buffer loadFont(Template::Font::Base font, Card::Edition const &edition)
    {
      std::string fontPath = Template::Font::getPath(font, edition);
      cv::Ptr<cv::freetype::FreeType2> ft2;

      try
      {
        ft2 = cv::freetype::createFreeType2();
        ft2->loadFontData(fontPath, 0);
      }
      catch (const cv::Exception &e)
      {
        throw Exceptions::FailedFontLoad(fontPath);
      }

      return {font.size, ft2};
    }

    cv::Mat downloadImage(const std::string &url)
    {
      CURL *curl;
      CURLcode res;
      std::vector<char> buffer;

      curl = curl_easy_init();
      if (curl)
      {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, _writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
      }

      if (res != CURLE_OK)
      {
        throw Exceptions::FailedImageDownload(url);
      }

      cv::Mat img = cv::imdecode(buffer, cv::IMREAD_UNCHANGED);
      if (img.empty())
      {
        throw Exceptions::FailedImageLoad(url);
      }

      return img;
    }

    size_t _writeCallback(void *contents, size_t size, size_t nmemb, void *userp)
    {
      ((std::vector<char> *)userp)->insert(((std::vector<char> *)userp)->end(), (char *)contents, (char *)contents + size * nmemb);
      return size * nmemb;
    }
  }
}