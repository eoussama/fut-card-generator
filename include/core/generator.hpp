#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <tuple>
#include <string>
#include <iostream>

#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "card.hpp"
#include "assets.hpp"
#include "draw/draw.hpp"
#include "i18n/language.hpp"
#include "i18n/translator.hpp"
#include "template/template.hpp"
#include "exceptions/failedImageSave.hpp"

namespace Core
{
  namespace Generator
  {
    void show(cv::Mat image);
    void save(cv::Mat image, std::string path);
    cv::Mat generate(Card::Base card, cv::Mat clubLogo, I18N::Language language);
  }
}

#endif