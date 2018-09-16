#include <iostream>

#include "student.hpp"
#include "classroom.hpp"

int main(int argc, char* argv[])
{
    std::cout << "Hello, world!\n";

    // Let's invite someone to the party!
    Student john("John");

    Classroom mathClass("Maths I", &john);

    Student anna("Anna");
    
    mathClass.add(&anna);
}
