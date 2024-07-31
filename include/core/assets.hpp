#ifndef ASSETS_HPP
#define ASSETS_HPP

#include <curl/curl.h>
#include <opencv2/opencv.hpp>
#include <opencv2/freetype.hpp>

#include "card.hpp"
#include "font/font_target.hpp"
#include "font/font_buffers.hpp"
#include "exceptions/invalidImage.hpp"
#include "exceptions/failedFontLoad.hpp"
#include "exceptions/failedImageLoad.hpp"
#include "exceptions/failedImageDownload.hpp"

namespace Core
{
  namespace Assets
  {
    cv::Mat loadImage(std::string path);
    cv::Mat downloadImage(const std::string &url);
    cv::Mat loadFlag(Player::Country const &country);
    cv::Mat loadBackground(Template::Base tmplate, Card::Edition const &edition);
    size_t _writeCallback(void *contents, size_t size, size_t nmemb, void *userp);
    Template::Font::Buffers loadFonts(Template::Base tmplate, Card::Edition const &edition);
    Template::Font::Buffer loadFont(Template::Font::Base font, Card::Edition const &edition);
  }
}

#endif