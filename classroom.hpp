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
    const std::string className_;
public:
    Classroom(const std::string &className, Student* p_student = nullptr) : className_ {className}
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
            std::cout << "Added " << p_student->name() << " to " << className_ << '\n';
        }
    }

    friend std::ostream& operator<<(std::ostream &out, const Classroom &classroom)
    {
        out << classroom.className_<< '\n';
        for (const auto &p_student : classroom.students_) {
            out << "\t- " << p_student->name() << '\n';
        }
        return out;
    }
};

#endif //CLASSROOM_HPP
