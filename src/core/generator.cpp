#include "generator.hpp"

namespace Core
{
  namespace Generator
  {
    cv::Mat generate(Card::Base card)
    {
      Template::Base tmplate = card.getTemplate();
      Template::Dimentions::Base dimentions = Template::Dimentions::Base::fromTemplate(tmplate);

      cv::Mat image = Templator::loadBackground(tmplate, card.getEdition());
      Template::Font::Buffers fonts = Templator::loadFonts(tmplate, card.getEdition());

      Ink::write(card.getPlayer().getName(), tmplate.colors.first, fonts.name, {100, 100}, image);

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
        std::cerr << "Error: Could not save the image to " << path << std::endl;
      }
    }
  }
}