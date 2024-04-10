cmake_minimum_required(VERSION 3.15)
project(aa CXX)




add_library(aa SHARED src/aa.cpp)
target_include_directories(aa PUBLIC include)



set_target_properties(aa PROPERTIES PUBLIC_HEADER "include/aa.h")
install(TARGETS aa)
