#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define XX_EXPORT __declspec(dllexport)
#else
  #define XX_EXPORT
#endif

XX_EXPORT void xx();
XX_EXPORT void xx_print_vector(const std::vector<std::string> &strings);
