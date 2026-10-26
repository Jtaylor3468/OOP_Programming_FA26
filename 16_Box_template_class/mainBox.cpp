#include "Box.hpp"
#include <iostream>
#include <string>

int main(void) {
    // Create Box object
    Box<int> box(100);
    Box<std::string> box_name("Jeremiah");

    box.setValue(1);
    std::cout << box.getValue() << std::endl;
    std::cout << box_name.getValue() << std::endl;

    return 0;
}
