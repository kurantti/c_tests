#include <iostream>
#define FMT_HEADER_ONLY
#include <fmt/format.h>

using fmt::format;
using std::cout;

int main() {
    int i {37}; // you can also use = but {} is more modern way, better type check
    cout << format("i is {}\n", i);
    const int teijo = 34; // const is a keyword that makes the variable immutable
    const auto hello = 34; // compiler will infer the type, can be safer
    cout << format("i is {}\n", teijo);
    return 0;
}
