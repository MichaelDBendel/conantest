#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CC_EXPORT __declspec(dllexport)
#else
  #define CC_EXPORT
#endif

CC_EXPORT void cc();
CC_EXPORT void cc_print_vector(const std::vector<std::string> &strings);
