#include "Student.hpp"
#include <iostream>

int main(void) {

    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    Student bob("Bob", 3.1);
    Student alice("Alice", 2.1);
    Student margaret("Margaret", 3.9);

    bob.printStudentInfo();
    alice.printStudentInfo();
    margaret.printStudentInfo();

    for (int i = 1; i < 100; i++) {
        Student("test", 1.1);
    }

    std::cout << "Required GPA: " << Student::getRequiredGPA() << std::endl; // access static methods

    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    std::cout << "Average GPA: " << Student::getAvgGPA() << std::endl;

    return 0;

}