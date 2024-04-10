add_executable(ccTest test.cpp)
target_link_libraries(ccTest PUBLIC cc)

add_link_options("-Wl,--disable-new-dtags")
install(TARGETS ccTest)
