cmake_minimum_required(VERSION 3.15)
project(cc CXX)

find_package(xx CONFIG REQUIRED)
find_package(bb CONFIG REQUIRED)



add_library(cc SHARED src/cc.cpp)
target_include_directories(cc PUBLIC include)

target_link_libraries(cc PUBLIC xx::xx bb::bb)


set_target_properties(cc PROPERTIES PUBLIC_HEADER "include/cc.h")
install(TARGETS cc)

add_subdirectory(unittest)
