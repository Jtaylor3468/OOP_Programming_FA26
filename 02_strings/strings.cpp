#include <iostream>
#include <string>

int main(void){
    std::string name;
    std::string animal;

    std::cout << "Enter your name: ";
    getline(std::cin, name);
    
    std::cout << "Enter your favourite animal: ";
    getline(std::cin, animal);

    std::string introduction = "Agent," + name;
    introduction += ", also known as The " + animal + ".";

    std::cout << '\n' << introduction << '\n';
    int intro_size = introduction.length();
    std::cout << "Your identity contains " << introduction.length() << " characters" << std::endl;



    if(intro_size > 50) {
        std::cout << "Your secret identity is too long\n";

    }
    else{
        std::cout << "Your secret identity is fine\n";
    }
    return 0;
}   


#include <iostream>
#include <random>

int main(void) {

    // Generate the seed
    std::random_device rd;

    std::mt19937 eng(time(0));

    std::cout << eng() << std::endl;

    return 0;




}