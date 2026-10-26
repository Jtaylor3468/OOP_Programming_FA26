#include <iostream>
#include <string>

class Hello {
public:
    Hello() {
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // Constructor with arg
    Hello(int size) {
        this->size = size;

        // TODO
        // create an array of strings with 'size' elements
        // Store an array in messages pointer
        // Initialize elements of the array with random strings
        messages = new std::string[size];
        for (int i = 0; i < SIZE; i++) {
            messages[i] = (i % 2 == 0) ? "Welcome!" : "Goodbye";
        }
    }


    ~Hello() {
        std::cout << "The destructor for " << this << std::endl;
        if (messages != nullptr) {
            delete [] messages; // Deacllocate the memory
        }
    }


    void bye() const {
        std::cout << "Bye!!!\n\n";
    
    }

    void printMessages() const {
        for (int i = 0; i < SIZE; i++) {
            std::cout << messages[i] << std::endl;
        }
    }

private:
    int size;
    std::string* messages;




};


int main(void) {
    // create an object dynamically
    Hello* hi = new Hello;

    Hello* hello = new Hello(5);


    // Call bye method
    hi->bye(); // (*hi).bye();

    hello->printMessages();

    // Delete the object (deallocate the memory)
    delete hi;
    delete hello;
    
    for (int i = 0; i < 999999; i++) {
        Hello(999999);
    }

    return 0;
}