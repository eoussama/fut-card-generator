#include "generator.hpp"

namespace Core
{
  namespace Generator
  {
    cv::Mat generate(Card::Base card, cv::Mat clubLogo, I18N::Language language)
    {
      Template::Base tmplate = card.getTemplate();
      Template::Dimentions::Base dimentions = Template::Dimentions::Base::fromTemplate(tmplate);

      cv::Mat image = Assets::loadBackground(tmplate, card.getEdition());
      Template::Font::Buffers fonts = Assets::loadFonts(tmplate, card.getEdition());

      I18N::Translator translator(language);
      Draw::Base draw(card, tmplate, fonts, dimentions, clubLogo, translator, image);

      draw.images();
      draw.lines();
      draw.text();

      return image;
    }

    void show(cv::Mat image)
    {
      cv::imshow("Preview", image);
      cv::waitKey(0);
    }

    void save(cv::Mat image, std::string path)
    {
      std::vector<int> compression_params;

      compression_params.push_back(cv::IMWRITE_PNG_COMPRESSION);
      compression_params.push_back(9);

      bool result = cv::imwrite(path, image, compression_params);

      if (!result)
      {
        throw Exceptions::FailedImageSave(path);
      }

      std::cout << "[SUCCESS]: Saved Fut card to " + path << std::endl;
    }
  }
}