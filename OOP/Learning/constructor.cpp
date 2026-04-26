#include <iostream>
#include <string>

// Class = data + methods ==>> called Encapsulation

// class Account {
//     private:                 //
//         std::string password;//
//         double balance;      // Data Hiding

//     public:
//         std::string account_ID;
//         std::string username;
// }


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Constructor >>>>>>>>>>>>
/* Special method invoked automatically at time of object creation. Used for Initialisation.
Properties Constructor>>
1. Same name as class
2. Constructor doesn't have a return type
3. Only called once (automatically), at object creation
4. Memory allocation happens when constructor is called */



// Copy Constructor >>>>>>>>>>>>>>
/*Special Constructor (default) used to
copy properties of one object into another.*/




// class Teacher {
// private:
//     double salary;  // For making salary private for Admin access

// public:
//     // Properties
//     std::string name;
//     std::string dept;
//     std::string subject;


//     // Parameterized constructor
//     Teacher(std::string name, std::string dept, std::string subject, double salary) {
//         // For accessing obj prop
//         // object property = constructor parameter
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     // Copy constructor
//     Teacher(Teacher &orgObj) { //pass by reference
//         std::cout << "I'm custom copy constructor";
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;
//         this->salary = orgObj.salary;
//     }

//     // Methods
//     void change_dept(std::string new_dept) {
//         dept = new_dept;
//     }

//     void get_info() {
//         std::cout << std::endl << "Name: " << name;
//         std::cout << std::endl << "Subject: " << subject;
//         std::cout << std::endl << "Department: " << dept;
//         std::cout << std::endl << "Salary: " << salary;
//     }
// };


// int main()
// {
    
//     Teacher t1("Rumaia Rahman Mridula", "CS", "OOP", 50000);
    
//     //t1.get_info();

//     Teacher t2(t1); // Default copy constructor -invoked || custom
//     t2.get_info();

//     return 0;
// }


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Shallow Copy vs Deep Copy >>>>>>>>>>>>>>>>>>>>>>>>>>

// class Student {
//     public:
//         std::string name;
//         //double cgpa;
//         double* cgpaPtr;

//         Student(std::string name, double cgpa) {
//             this->name = name;
//             cgpaPtr = new double;
//             *cgpaPtr = cgpa;
//         }

//         // for deep copy || custom
//         Student(Student &orgObj) {
//             this->name = orgObj.name;
//             cgpaPtr = new double;
//             *cgpaPtr = *orgObj.cgpaPtr;
//         }
  
//         void getInfo() {
//             std::cout << "name: " << name << std::endl;
//             std::cout << "cgpa: " << *cgpaPtr << std::endl;
//         }
// };

// int main()
// {
//     Student s1("Rahul Kumar", 8.9);
    
//     Student s2(s1);
    
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();

//     s2.name = "Neha Kumar";
//     s2.getInfo();

//     return 0;
// }











// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// prac constructor

class Teacher {
    private:
        double salary;

    public:
        std::string name;
        std::string dept;
        std::string subject;

        Teacher() {
            dept = "Computer Science";
        }

        Teacher(std::string name, std::string dept, std::string subject, double salary) {
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        void changeDept(std::string newDept) {
            dept = newDept;
        }

        void getInfo() {
            std::cout << "\nName: " << name;
            std::cout << "\nSubject: " << subject;
            std::cout << "\nDepartment: " << dept;
        }

};

int main()
{
    Teacher t1("Shradha", "Computer Science & Engineering", "C++", 25000);

    Teacher t2(t1);

    t2.getInfo();

    return 0;
}