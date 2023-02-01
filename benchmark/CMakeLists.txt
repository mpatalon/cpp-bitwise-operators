include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/third-party/benchmark/include)

add_executable(benchmark-cpp-bitwise-operators
  main.cpp
)

target_link_libraries(benchmark-cpp-bitwise-operators
  PRIVATE
    cpp-bitwise-operators
    benchmark::benchmark
)