#include <iostream>
#include <string>

// Poly -> Multiple || Morph -> Forms
/* Polymorphism is the ability of objects to take on different forms
or behave in different ways depending on the context in which 
they are used.
*/
// Two types:
// 1. Compile Time Polymorphism
// 2. Run Time Polymorphism



// 1. Compile Time Polymorphism...............................
// a) Constructor Overloading is an example of Compile Time Polymorphism

class Student {
    public:
        std::string name;

        Student() {
            std::cout << "Non-parameterized\n";
        }
        
        Student(std::string name) {
            this->name = name;
            std::cout << "Parameterized\n";
        }
};
int main()
{
    //Student s1;
    Student s1("Tony Stark");

    return 0;
}

// b) Function or Method Overloading 
// example or implementation of Compile Time Polymorphism

