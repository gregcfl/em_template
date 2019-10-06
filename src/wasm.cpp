#include <vector>
#include <iterator>
#include <string>
#include <emscripten/bind.h>

using namespace emscripten;

std::string hello_world() {
    return "Hello from WASM!";
}

EMSCRIPTEN_BINDINGS(my_module) {
  emscripten::function("helloWorld", &hello_world);
}
