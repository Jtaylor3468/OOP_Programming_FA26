#include <iostream>


void countdown(int n);
void countup(int n);

int power(int base, int exp);

void print_binary(int number);



int main(void) {

    countdown(10);
    countup(10);

    return 0;
}

void countdown(int n) {

    //Base case
    if (n <= 0) {
        return;
    }
    //recursive case
    std::cout << n << "\t";
    countdown(n-1);



}

void countup(int n) {

    //Base case
    if (n <= 0) {
        return;
    }
    //recursive case
    std::cout << n << "\t";
    countup(n-1);



}

int power(int base, int exp) {
    // base case
    if(exp == 0) {
        printf("I am power(%d, %d). I know the answer is 1!\n\n", base, exp);
        return 1;


    }
    printf("I am the poqwe(%d, %d).\n", base, exp);
    printf("I remember %d and ask power(%d, %d) for help!\n\n", base, base, exp - 1);
    int help = power(base, exp - 1);
    printf("I am the power(%d, %d).\n", base, exp);
    printf("Power(%d, %d) returned me %d.\n", base, exp - 1, help);
    printf("I will do %d * %d = %d and return the result\n\n", base, help, base * help);
    return base * help;


}

void print_binary(int number) {
    if (number < 2) {
        std::cout << number;
        return;
    }

    print_binary(number / 2);
    std::cout << number % 2;

}




#include <iostream>

int length = 8, width = 2;

int area = length + width;

std::cout << "Area: " << area;
