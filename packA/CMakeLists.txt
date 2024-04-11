cmake_minimum_required(VERSION 3.15)
project(aa CXX)

find_package(xx CONFIG REQUIRED)


add_library(aa SHARED src/aa.cpp)
target_include_directories(aa PUBLIC include)

target_link_libraries(aa PUBLIC xx::xx)


set_target_properties(aa PROPERTIES PUBLIC_HEADER "include/aa.h")
install(TARGETS aa)
