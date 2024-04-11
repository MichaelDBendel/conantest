#pragma once

#include <vector>
#include <string>
#include "xx.h"


#ifdef _WIN32
  #define AA_EXPORT __declspec(dllexport)
#else
  #define AA_EXPORT
#endif

AA_EXPORT void aa();
AA_EXPORT void aa_print_vector(const std::vector<std::string> &strings);

class TestClass{
  public:
  TestClass(){};
  ~TestClass(){};
};
