#pragma once

#include <vector>
#include <string>
#include "aa.h"
#include "xx.h"


#ifdef _WIN32
  #define BB_EXPORT __declspec(dllexport)
#else
  #define BB_EXPORT
#endif

BB_EXPORT void bb();
BB_EXPORT void bb_print_vector(const std::vector<std::string> &strings);
TestClass testFunc();
