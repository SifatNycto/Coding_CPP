#include <iostream>
#include <string>

/* Inheritance:: When properties & member functions 
of base class are passed on to the derived class........*/
// Inheritance for "code reusability".............
// there is also modes in inheritance......
// properties goes to child or derived class from parent class......
// parent class constructor is called first, then child class constructor
/* in Destructor, first child classes memory is deallocated,
and then the parent classes memory is deallocated.......*/
// Private properties and private methods can't be inherit


// Single inheritance.......................
// class Person {
//     public:
//         std::string name;
//         int age;

//         Person(std::string name, int age) {
//             this->name = name;
//             this->age = age;
//         }

//         // Person() {
//         //     std::cout << "I'm the Parent Constructor" << std::endl;
//         // }

//         // ~Person() {
//         //     std::cout << "I'm the Parent Destructor" << std::endl;
//         // }
// };

// class Student : public Person {
//     // name, age, roll
//     public:
//         int roll;

//         Student(std::string name, int age, int roll) : Person(name, age) {
//             std::cout << "I'm the Child Constructor" << std::endl;
//             this->roll = roll;
//         }
//         void getInfo() {
//             std::cout << "Name: " << name << std::endl;
//             std::cout << "Age: " << age << std::endl;
//             std::cout << "Roll: " << roll << std::endl;
//         }
        
//         ~Student() {
//             std::cout << "I'm the Child Destructor" << std::endl;
//         }
// };

// int main()
// {
//     Student s1("Rahul Kumar", 21, 1234);

//     // s1.name = "Rahul Kumar";
//     // s1.age = 21;
//     // s1.roll = 1234;

//     s1.getInfo();

//     return 0;
// }








// Multi-level inheritance.................
// class Person {
//     public:
//         std::string name;
//         int age;

//         Person() {
//             std::cout << "I'm Person Class" << std::endl;
//         }
// };
// class Student : public Person {
//     public:
//         int roll;
//         Student() {
//             std::cout << "I'm Student Class" << std::endl;
//         }
// };
// class GradStudent : public Student {
//     public:
//         std::string researchArea;

//         GradStudent() {
//             std::cout << "I'm GradStudent Class" << std::endl;
//         }
// };

// int main()
// {
//     GradStudent s1;
//     s1.name = "Tony Stark";
//     s1.researchArea = "Quantum Physics";

//     std::cout << s1.name << std::endl;
//     std::cout << s1.researchArea << std::endl;

//     return 0;
// }






// Multiple inheritance .......................
// from 2 parent to 1 child is inherited
// class Student {
//     public:
//         std::string name;
//         int roll;
//         Student() {
//             std::cout << "I'm Student Class" << std::endl;
//         }
// };
// class Teacher {
//     public:
//         std::string subject;
//         double salary;
//         Teacher() {
//             std::cout << "I'm Teacher Class" << std::endl;
//         }
// };
// class TA : public Student, public Teacher {
//     public:
//         TA() {
//             std::cout << "I'm TA Class" << std::endl;
//         }
// };

// int main()
// {
//     TA t1;
//     t1.name = "Tony Stark";
//     t1.subject = "Engineering";

//     std::cout << t1.name << std::endl;
//     std::cout << t1.subject << std::endl;

//     return 0;
// }








// Hirarchial inheritance.......................
// from 1 parent to 2 childs
// from one parent class to multiple child class is inherited
class Student {
    public:
        std::string name;
        int roll;
        Student() {
            std::cout << "I'm Student Class" << std::endl;
        }
};
class Teacher {
    public:
        std::string subject;
        double salary;
        Teacher() {
            std::cout << "I'm Teacher Class" << std::endl;
        }
};
class TA : public Student, public Teacher {
    public:
        TA() {
            std::cout << "I'm TA Class" << std::endl;
        }
};

int main()
{
    TA t1;
    t1.name = "Tony Stark";
    t1.subject = "Engineering";

    std::cout << t1.name << std::endl;
    std::cout << t1.subject << std::endl;

    return 0;
}