#include <emscripten.h>
#include <iostream>

extern "C" {
EMSCRIPTEN_KEEPALIVE int double_number(int x);
}
