#include <string>
#include <iostream>

class Student
{
private:
    const std::string name_;

public:
    Student(const std::string &name) : name_ {name}
    {
        std::cout << "Student: " << name_ << " created\n";
    }

    ~Student()
    {
        std::cout << "Student: " << name_ << " destroyed\n";
    }

    const char* name() const
    {
        return name_.c_str();
    }
}
