//
// Created by Juha Päällysaho on 20.3.2024.
//
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

int main() {
    auto x = 32;
    auto y = 7;

    if (x != 7) {
        cout << "condition not true!\n";
    } else {
        cout << "condition false!";
    }
    cout << "Hello, World!\n";
    auto s = x > y ? "best" : "not best"; // more simplified version
    cout << format("teijo is {}!", s);

}