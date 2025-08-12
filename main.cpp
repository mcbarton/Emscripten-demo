#include <emscripten.h>
#include <iostream>

extern "C" {
EMSCRIPTEN_KEEPALIVE
int double_number(int x) {
  std::cout <<  "Double your number is " << 2*x << std::endl;
  return 2 * x;
}
}
