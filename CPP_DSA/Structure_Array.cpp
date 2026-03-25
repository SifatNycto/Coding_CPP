#include <iostream>
#include <string>

namespace num {
    int n;
}
struct student_info
{
    std::string name;
    int S_ID;
    std::string course;
    float marks;
};

void storing_info(student_info info[]);
void printing_info(student_info info[]);

int main()
{
    std::cout << std::endl << "Enter Number of students: ";
    std::cin >> num::n;
    student_info info[num::n];

    storing_info(info);
    printing_info(info);

    return 0;
}

void storing_info(student_info info[])
{
    std::cout << std::endl << "Submit students informations:---> ";
    for (int i = 0; i < num::n; i++)
    {
        std::cout << std::endl <<"Student #" << i+1 << " info -->";
        std::cout << std::endl << "Enter Student name: ";
        std::cin.ignore();
        std::getline(std::cin, info[i].name);

        std::cout << "Enter Student ID: ";
        std::cin >> info[i].S_ID;

        std::cout << "Enter Course title: ";
        std::cin.ignore();
        std::getline(std::cin, info[i].course);

        std::cout << "Enter marks: ";
        std::cin >> info[i].marks;
    }
}

void printing_info(student_info info[])
{
    std::cout << std::endl << "Students Informations:---> ";
    for (int i = 0; i < num::n; i++)
    {
        std::cout << std::endl << "Student #" << i+1 << " -->";
        std::cout << std::endl << "Name: " << info[i].name;
        std::cout << std::endl << "Student ID: " << info[i].S_ID;
        std::cout << std::endl << "Course title: " << info[i].course;
        std::cout << std::endl << "Marks: " << info[i].marks;
        std::cout << std::endl;
    }
}