#include <iostream>
#include <string>

// Poly -> Multiple || Morph -> Forms
/* Polymorphism is the ability of objects to take on different forms
or behave in different ways depending on the context in which 
they are used.
*/
// Two types:
// 1. Compile Time Polymorphism
//      1.1) Constructor Overloading
//      1.2) Function Overloading
//      1.3) Operator Overloading

// 2. Run Time Polymorphism || Dynamic Polymorphism
//      2.1) Function Overriding
//      2.2) Virtual Functions



// 1. Compile Time Polymorphism...............................
// 1.1) Constructor Overloading is an example of Compile Time Polymorphism

// class Student {
//     public:
//         std::string name;

//         Student() {
//             std::cout << "Non-parameterized\n";
//         }
        
//         Student(std::string name) {
//             this->name = name;
//             std::cout << "Parameterized\n";
//         }
// };
// int main()
// {
//     //Student s1;
//     Student s1("Tony Stark");

//     return 0;
// }

//>>>>>>>>>>>>>>>>>>>>>>>

// 1.2) Function or Method Overloading 
// example or implementation of Compile Time Polymorphism

// class Print {
//     public:
//         void show(int x) {
//             std::cout << "int: " << x << std::endl;
//         }

//         void show(char ch) {
//             std::cout << "char: " << ch << std::endl;
//         }
// };

// int main()
// {
//     Print p1;
//     p1.show(354);
//     p1.show('&');

//     return 0;
// }

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 1.3) Operator Overloading.........
//?????????????????????????





// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 2. Run Time Polymorphism || Dynamic Polymorphism .........

// 2.1) Function Overriding ..............

/* Parent & Child both contain the same fucntion with different implementation.

    The parent class function is said to be Overridden & 
    child class function havs more priority

    Overriding is dependent upon Inheritance
*/

class Parent {
    public:
        void Info() {
            std::cout << "Child Classes\n";
        }

        void getInfo() {
            std::cout << "Parent Class\n";
        }
};

class Child : public Parent {
    public:
        void Info() {
            std::cout << "Child Classes\n";
        }
        void getInfo() {
            std::cout << "Child Class\n";
        }
};

int main()
{
    Child c1;
    c1.getInfo();
    //c1.Info();

    Parent p1;
    p1.Info();


    return 0;
}



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 2.2) Virtual Functions.......................... Similar to Overriding
/* A Virtual function is a member function that you expect to be redefined in derived classes. */
/*
    Virtual Functions are Dynamic in nature.

    Defined by the keyword "virtual" inside a base class and are always declared 
    with a base class and overridden in a child class.

    A virtual function is called during Runtime.............
*/

// class Parent {
//     public:
//         void getInfo() {
//             std::cout << "Parent Class\n";
//         }

//         // Defined as 'virtual' inside Base (Parent) Class
//         virtual void hello() {
//             std::cout << "Hello from Parent\n";
//         }
// };

// class Child : public Parent {
//     public:
//         void Info() {
//             std::cout << "Child Class\n";
//         }

//         // Re-implement.......... (Overridden in Child Class)
//         void hello() {
//             std::cout << "Hello from Child\n";
//         }
// };

// int main()
// {
//     Child c1;
//     c1.hello();

//     Parent p1;
//     p1.hello();

//     return 0;
// }
