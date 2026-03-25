#include <iostream>
#include <string>


class Student {
    public:
        std::string name;
        //double cgpa;
        double* cgpaPtr;

        Student(std::string name, double cgpa) {
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        // destructor
        ~Student() {
            std::cout << "Hi, I delete everything";
            delete cgpaPtr;
        }
  
        void getInfo() {
            std::cout << "name: " << name << std::endl;
            std::cout << "cgpa: " << *cgpaPtr << std::endl;
        }
};

int main()
{
    Student s1("Rahul Kumar", 8.9);
    s1.getInfo();

    return 0;
}