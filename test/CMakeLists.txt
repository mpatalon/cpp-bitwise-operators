include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/third-party/googletest/googletest/include)

add_executable(test-cpp-bitwise-operators
  main.cpp
  module/module-test.cpp
)

target_link_libraries(test-cpp-bitwise-operators
  PRIVATE
    cpp-bitwise-operators
    gtest
)