add_executable(ccTest test.cpp)
target_link_libraries(ccTest PUBLIC cc)
install(TARGETS ccTest)
