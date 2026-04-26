#include <iostream>
#include <string>

/*
    ### Copy
        --=> Shallow Copy
        --=> Deep Copy
    
    # Shallow Copy ==>
        A shallow copy of an object copies all of the member values 
        from one object to another.
    
    # Deep Copy ==>
        A deep copy not only copies the member values, but also makes copies 
        of any dynamically allocated memory that the members point to.

*/ 

// Copy Constructor >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



class Teacher {
    private:
        double salary;

    public:
        std::string name;
        std::string dept;
        std::string subject;

        Teacher(std::string name, std::string dept, std::string subject, double salary) {
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        // Copy constructor with pass by reference, original obejects address
        Teacher(Teacher &originalObject) {
            std::cout << "\nI'm custom copy constructor";
            this->name = originalObject.name;
            this->dept = originalObject.dept;
            this->subject = originalObject.subject;
            this->salary = originalObject.salary;
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