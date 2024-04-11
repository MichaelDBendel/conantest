cmake_minimum_required(VERSION 3.15)
project(xx CXX)




add_library(xx SHARED src/xx.cpp)
target_include_directories(xx PUBLIC include)



set_target_properties(xx PROPERTIES PUBLIC_HEADER "include/xx.h")
install(TARGETS xx)
