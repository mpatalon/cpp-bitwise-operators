cmake_minimum_required(VERSION 3.13)
project(cpp-project-template)

set(CMAKE_CXX_STANDARD 20)

if (MSVC)
  add_compile_options(/W4 /WX)
else()
  add_compile_options(
    -Wall
    -Wextra
    -Wpedantic
    -Werror
  )
endif()
  
add_subdirectory(src)
add_subdirectory(benchmark)
add_subdirectory(test)

set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
set(BENCHMARK_ENABLE_GTEST_TESTS OFF CACHE BOOL "Build and run the tests" FORCE)
add_subdirectory(third-party/benchmark EXCLUDE_FROM_ALL)

add_subdirectory(third-party/googletest EXCLUDE_FROM_ALL)
