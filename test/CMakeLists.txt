include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/third-party/googletest/googletest/include)

add_executable(test-cpp-project-template
  main.cpp
  module/module-test.cpp
)

target_link_libraries(test-cpp-project-template
  PRIVATE
    cpp-project-template
    gtest
)