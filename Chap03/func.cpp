
#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

void func() { // side effect, no value returned, Unit in scala
    cout << "this is func()\n";
}

void func2(int i, const char* s) { // side effect, no value returned, Unit in scala
    cout << format("{}, this is func {}\n", i, s);
}

int func3(const char* x, int y) {
    cout << format("wow, cool {}!", x);
    return y*2;
}

int main()
{
    cout << "this is main()\n";
    func();
    func2(311, "tt");
    auto tt = func3("tres", 3111);
    cout << format("fuck {}", tt);

}
