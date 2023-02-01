#ifndef COMMON_COMMON_H_
#define COMMON_COMMON_H_

#include <string>

namespace common {

struct Common
{
  Common(std::string name) : name(name) {}

  std::string name;
};

}  // namespace common

#endif  // COMMON_COMMON_H_
