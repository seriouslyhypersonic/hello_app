#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include <iostream>
#include <vector>
#include "cstdlib"

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

            // Detect if student was already added
            if (in_classroom(p_student)) {
                std::cerr << "error: " << p_student->name() << " already in the classrom\n";
                return;
            }

            students_.push_back(p_student);
            std::cout << "Added " << p_student->name() << " to " << className_ << '\n';
        }
    }

    void remove(Student* p_student)
    {
        for (auto it = students_.begin(); it != students_.end(); ) {
            if (*it == p_student) {
                std::cout << "Removing " << (*it)->name() << '\n';
                students_.erase(it);
            } else {
                ++it;
            }
        }
    }

    bool in_classroom(Student *p_student)
    {
        for (const auto &p_aStudent : students_) {
            if (p_aStudent == p_student) {
                return true;
            }
        }
        return false;
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
