#include <gtest/gtest.h>
#include <cpp-project-template/module/module.h>


TEST(module_test, TestModuleFunction) {
  ASSERT_TRUE(module::module_function(common::Common{"true"}, "true"));
  ASSERT_FALSE(module::module_function(common::Common{"true"}, "false"));
}
