#include <iostream>
#include <random>

int main(void) {

    // Generate the seed
    std::random_device rd;

    std::mt19937 eng(time(0));

    std::cout << eng() << std::endl;

    return 0;




}