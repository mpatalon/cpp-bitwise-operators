#include <string>
#include "cpp-bitwise-operators/module/module.h"

namespace module {

bool module_function(common::Common common, std::string name)
{
  return common.name == name;
}

}  // namespace module
