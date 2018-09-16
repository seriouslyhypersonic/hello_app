#include <iostream>

#include "student.hpp"
#include "classroom.hpp"

int main(int argc, char* const argv[])
{
    std::cout << "Hello, world!\n";

    // Let's invite someone to the party!
    Student john("John");

    Classroom mathClass("Maths I", &john);

    Student anna("Anna");
    Student ethan("Ethan");
    
    mathClass.add(&anna);
    mathClass.add(&ethan);

    std::cout << mathClass << '\n';

    mathClass.remove(&anna);

    std::cout << mathClass << '\n';
}
