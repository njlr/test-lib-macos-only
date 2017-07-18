#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#ifndef __APPLE__
static_assert(false, "Only macOS is supported. ");
#endif

#include <string>

std::string message() {
  return "Hello from macOS. ";
}

#endif
