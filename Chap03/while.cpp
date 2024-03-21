
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    int i {0};

    while (i < 5) { // do while is also an option
        if (i == 3 ) break;
        cout << format("element {} is {}\n", i, array[i]);
        ++i; // increment
    }
}
