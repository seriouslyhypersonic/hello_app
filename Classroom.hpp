#include <iostream>

#include "student.hpp"


// Classroom is an aggregation of students
class Classroom
{
private:
    std::vector<Student*> students_;

    Classroom(Student* p_student = nullptr)
    {
        if (p_student) {
            students_.push_back(p_student);
            std::cout << "Added " << students_->name() << " to the classroom";
        }
    }
}