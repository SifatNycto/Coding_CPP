#include <iostream>
#include <string>

// class Dog {
//     private:
//         std::string tailType;
//         std::string colorOfBody;
//         int runCapability;
//     public:
//         Dog() {
//             tailType = "straight";
//             colorOfBody = "black";
//         }

//         void Run() {
//             std::cout << "The Dog is running" << std::endl;
//         }

//         std::string getTailType() {
//             return tailType;
//         }

// };

// int main()
// {
//     Dog d;
    
//     d.Run();
    
//     return 0;
// }





class Employee {
    private:
        int salary;
    public:
        Employee() : salary(5000) {}

        int setSalary() {
            return salary;
        }

};

//...........

int main()
{
    Employee e;

    std::cout << e.setSalary();
    return 0;
}