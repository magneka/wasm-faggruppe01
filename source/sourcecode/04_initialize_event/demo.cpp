
#include <emscripten/bind.h>

using namespace emscripten;

double add(double a, double b) {
    return a + b;
}

std::string exclaim(std::string message) {
    return message + "!";
}

int main() {
  printf("WASM Ready\n");
  return 1;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("add", &add);
    function("exclaim", &exclaim);
}
