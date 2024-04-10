cmake_minimum_required(VERSION 3.15)
project(bb CXX)

find_package(aa CONFIG REQUIRED)



add_library(bb SHARED src/bb.cpp)
target_include_directories(bb PUBLIC include)

target_link_libraries(bb PUBLIC aa::aa)


set_target_properties(bb PROPERTIES PUBLIC_HEADER "include/bb.h")
install(TARGETS bb)
