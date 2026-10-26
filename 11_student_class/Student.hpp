#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student {
public:
    Student(const std::string& n, double st_gpa);
    bool canGraduate();
    void printStudentInfo();

    static double getRequiredGPA();
    static int    getTotalStudents();
    static double getAvgGPA();
    
private:
    std::string name;
    double gpa;
    std::string id;
    
    static double required_gpa;  // Graduation requirement
    static int total_students;  // The total num
    static int    next_id;
    static int    total_gpa;
};

#endif