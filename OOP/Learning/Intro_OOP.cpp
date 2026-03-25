#include <iostream>
#include <string>

// class Teacher {
// private:
//     double salary;  // For making salary private for Admin access

// public:
//     // It's a Non-parameterized constructor
//     Teacher() { // Consturctor
//         //std::cout << "Hi, I'm Constructor" << std::endl;
//         dept = "Computer Science";  // Initialized by Constructor
//     }
//     // It's a Parameterized constructor
//     Teacher(std::string n, std::string d, std::string s,  sal) {
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }

//     // Properties || Attributes
//     std::string name;
//     std::string dept;
//     std::string subject;
//     //double salary;

//     // Methods || Member Functions
//     void change_dept(std::string new_dept) {
//         dept = new_dept;
//     }

//     // Setters and Getters are a kind of Public functions
//     // Setter Function || For setting Private values
//     void set_salary(double s) {
//         salary = s;
//     }
    
//     // Getter Function || For getting Private values
//     double get_salary() {
//         return salary;
//     }
// };


// int main()
// {
//     Teacher t1; // Object created || Here, Constructor call
//     //Teacher t2; // 2nd consturctor call
//     t1.name = "Rumaia Rahman Mridula";
//     t1.subject = "OOP";
//     //t1.dept = "CSE";
//     // t1.salary = 50000;
//     t1.set_salary(50000);   // Passing value to salary
    
//     std::cout << std::endl << "Name: " << t1.name;
//     std::cout << std::endl << "Subject: " << t1.subject;
//     std::cout << std::endl << "Department: " << t1.dept;    // Runs by constructor
//     // std::cout << std::endl << t1.salary;
//     std::cout << std::endl << "Salary: " << t1.get_salary();

//     return 0;
// }



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Constructor >>>>>>>>>>>>
/* Special method invoked automatically at time of object creation. Used for Initialisation.
Properties Constructor>>
1. Same name as class
2. Constructor doesn't have a return type
3. Only called once (automatically), at object creation
4. Memory allocation happens when constructor is called 
5. It always declared as public  */
/* Three types of Consturctors >>>
1. Non-parameterized
2. Parameterized
3. Copy
*/

// class Teacher {
// private:
//     double salary;  // For making salary private for Admin access

// public:
//     // Non-parameterized constructor
//     Teacher() {
//         dept = "Computer Science";
//     }

//     // Parameterized constructor
//     Teacher(std::string n, std::string d, std::string s, double sal) {
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }

//     // Properties
//     std::string name;
//     std::string dept;
//     std::string subject;
//     //double salary;

//     // Methods
//     void change_dept(std::string new_dept) {
//         dept = new_dept;
//     }

//     void get_info() {
//         std::cout << std::endl << "Name: " << name;
//         std::cout << std::endl << "Subject: " << subject;
//         std::cout << std::endl << "Department: " << dept;
//         std::cout << std::endl << "Salary: " << salary;
//         // std::cout << std::endl << "Salary: " << t1.get_salary();
//     }
// };


// int main()
// {
//     // Object created || Here, Constructor call
//     Teacher t1{"Rumaia Rahman Mridula", "CS", "OOP", 50000};
    
//     t1.get_info();

//     return 0;
// }

/* Different types of constructors by their different state of parameters
these phenomena's are called in Programming as 'Consturctor Overloading' */
// Constructor Overloading is an example of "Polymorphism".>>>>>>>


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// 'this' is a special pointer in C++ that points to the current object
// this->prop is same as *(this).prop for like obj.prop


// class Teacher {
// private:
//     double salary;  // For making salary private for Admin access

// public:
//     // Properties
//     std::string name;
//     std::string dept;
//     std::string subject;

//     // Non-parameterized constructor
//     Teacher() {
//         dept = "Computer Science";
//     }

//     // Parameterized constructor
//     Teacher(std::string name, std::string dept, std::string subject, double salary) {
//         // For accessing obj prop
//         // object property = constructor parameter
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
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
//     // Object created || Here, Constructor call
//     // this points the calling object t1
//     // for which the constructor is called
//     Teacher t1{"Rumaia Rahman Mridula", "CS", "OOP", 50000};
    
//     t1.get_info();

//     return 0;
// }




// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Copy Constructor >>>>>>>>>>>>>>
/*Special Constructor (default) used to
copy properties of one object into another.*/


class Teacher {
private:
    double salary;  // For making salary private for Admin access

public:
    // Properties
    std::string name;
    std::string dept;
    std::string subject;

    // Non-parameterized constructor
    Teacher() {
        dept = "Computer Science";
    }

    // Parameterized constructor
    Teacher(std::string name, std::string dept, std::string subject, double salary) {
        // For accessing obj prop
        // object property = constructor parameter
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Methods
    void change_dept(std::string new_dept) {
        dept = new_dept;
    }

    void get_info() {
        std::cout << std::endl << "Name: " << name;
        std::cout << std::endl << "Subject: " << subject;
        std::cout << std::endl << "Department: " << dept;
        std::cout << std::endl << "Salary: " << salary;
    }
};


int main()
{
    // Object created || Here, Constructor call
    // this points the calling object t1
    // for which the constructor is called
    Teacher t1("Rumaia Rahman Mridula", "CS", "OOP", 50000);
    
    t1.get_info();

    //Teacher t2(t1); // Default copy constructor -invoked
    //t2.get_info();

    return 0;
}