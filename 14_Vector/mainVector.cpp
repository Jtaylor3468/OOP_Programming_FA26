#include "Vector.hpp"
#include <iostream>

void foo(Vector vec) {
    std::cout << "Foo function" << std::endl;
}

int main(void) {
    Vector v(10);
    
    for (int i = 0; i < 150; i++) {
        v.push_back(i);
    }

    v.print();

    //foo(v);
    Vector v2 = v;

    std::cout << v2.at(1) << std::endl;

    return 0;
}

