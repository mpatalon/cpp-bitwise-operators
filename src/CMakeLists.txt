add_library(cpp-project-template
  module/module.cpp
)

target_include_directories(cpp-project-template PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
