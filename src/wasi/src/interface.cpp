#include "@cpp_pt_name@/@cpp_pt_module@/@cpp_pt_module_header@.hpp"

#include <memory>
#include <string>

WASI_EXPORT("version") char* version() {
  auto version = std::make_shared<std::string>(@cpp_pt_name@::@cpp_pt_module@::version());
  return version->data();
}