// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;


int main() {

    const char string[] {"string"};
    int array[] { 1, 2, 3, 4, 5 };

    for (int i {0}; i < 5; ++i) {
        cout << format("element {} is {}\n", i, array[i]);
    }

    for (int i {0}; string[i]; ++i) { // actually 7 chars
        cout << format("element {} is {}\n", i, string[i]);
    }

    // with pointer
    for (auto* p = string; *p; ++p) { // value is *p, address of array
        cout << format("char is {}\n", *p);
    }

    // C11, range based, more common
    int array2[] { 1, 2, 3, 4, 5 };
    const char string2[] {"tt's strings"};

    for (const auto& e : array2) { // element reference in array
        cout << format("element is {}\n", e);
    }

    for (const auto& e : string2) { // element reference in array
        cout << format("element is {}\n", e);
    }





}