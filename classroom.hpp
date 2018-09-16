#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include <iostream>
#include <vector>

#include "student.hpp"


// Classroom is an aggregation of students
class Classroom
{
private:
    std::vector<Student*> students_;
public:
    Classroom(Student* p_student = nullptr)
    {
        if (p_student) {
            students_.push_back(p_student);
            std::cout << "Added " << p_student->name() << " to the classroom\n";
        }
    }

    void add(Student* p_student)
    {
        if (p_student) {
            students_.push_back(p_student);
            std::cout << "Added " << p_student->name() << " to the classroom\n";
        }
    }
};

#endif //CLASSROOM_HPP
