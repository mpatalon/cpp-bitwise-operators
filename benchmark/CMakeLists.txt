include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/third-party/benchmark/include)

add_executable(benchmark-cpp-project-template
  main.cpp
)

target_link_libraries(benchmark-cpp-project-template
  PRIVATE
    cpp-project-template
    benchmark::benchmark
)