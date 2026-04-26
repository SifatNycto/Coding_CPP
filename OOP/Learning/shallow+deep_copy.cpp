#include <iostream>
#include <string>

/*
    ### Copy
        --=> Shallow Copy
        --=> Deep Copy
    
    # Shallow Copy ==>
        A shallow copy of an object copies all of the member values 
        from one object to another.
            (it is used most of the time, copy or custom copy constructor make this.)
    
    # Deep Copy ==>
        A deep copy not only copies the member values, but also makes copies 
        of any dynamically allocated memory that the members point to.

*/ 

// Copy Constructor >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// class Student {
//     public:
//         std::string name;
//         double cgpa;

//         Student(std::string name, double cgpa) {
//             this->name = name;
//             this->cgpa = cgpa;
//         }

//         Student(Student &obj) {
//             this->name = obj.name;
//             this->cgpa = obj.cgpa;
//         }

//         void getInfo() {
//             std::cout << "\nName: " << name;
//             std::cout << "\nCGPA: " << cgpa;
//         }
// };

// int main()
// {
//     Student s1("Tony Stark", 3.6);
    
//     Student s2(s1);
//     s2.getInfo();

//     return 0;
// }




// .......................
/*
    Shallow copy works with custom copy constructor or even default copy 
    constructor with the dynamic memory by pointer

    Deep copy needs custom constructor.
*/

class Student {
    public:
        std::string name;
        double* cgpaPtr;

        Student(std::string name, double cgpa) {
            std::cout << "\ncustom constructor";
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        // Student(Student &obj) {
        //     std::cout << "\ncustom copy constructor";
        //     this->name = obj.name;
        //     this->cgpaPtr = obj.cgpaPtr;
        // }

        void getInfo() {
            std::cout << "\nName: " << name;
            std::cout << "\nCGPA: " << *cgpaPtr;
        }
};

int main()
{
    Student s1("Tony Stark", 3.6);
    Student s2(s1);
    
    s1.getInfo();

    *(s2.cgpaPtr) = 3.8;
    s1.getInfo();

    return 0;
}