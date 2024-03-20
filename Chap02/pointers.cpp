//
#include <iostream>
#define FMT_HEADER_ONLY
#include <fmt/format.h>

using std::cout;
using fmt::format;

int main() {
    int t; // assign memory for t
    t = 33; // copy 33 to x
    int x {7}; // memory for x
    x = t; // copy, separate memory location
    int* ip = &x; // pointer to x, is the address/reference of x, no copying
    int value_op = *ip;

    // once reference is defined, it cannot change, y is always x
    // de-reference operator *ip is the value of x, access the value

    int&y = x; // reference of x, reference is not variable, alias / namespace

    cout << format("The value of x is {}\n", x); // 7
    cout << format("The value of y is {}\n", y); // 42
    cout << format("The value of *ip is {}\n", *ip); // 7
    x = 73;

    const int z {73};
    // side effect, difficult to debug, using const is more safe
    ip = &z; // re-seeded

    cout << format("The value of x is {}\n", x); // 7
    cout << format("The value of y is {}\n", y); // 42
    cout << format("The value of *ip is {}\n", *ip); // 7

}
