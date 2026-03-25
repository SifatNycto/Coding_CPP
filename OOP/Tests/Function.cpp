#include <iostream>
#include <string>

struct Teacher {
    std::string name;
    std::string dept;
    std::string subject;
};

int main()
{
    int n;
    std::cout << "Number of teachers: ";
    std::cin >> n;
    struct Teacher t[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << std::endl << "Teacher #" << i+1 << ": ";

        std::cout << "Name: ";
        std::getline(std::cin >> std::ws, t[i].name);

        std::cout << "Department: ";
        std::getline(std::cin >> std::ws, t[i].dept);

        std::cout << "Subject: ";
        std::getline(std::cin >> std::ws, t[i].subject);
    }

    std::cout << std::endl << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << std::endl << "Teacher #" << i+1 << ": ";
        std::cout << "Name: " << t[i].name;

        std::cout << std::endl << "Department: " << t[i].dept;

        std::cout << std::endl << "Subject: " << t[i].subject;
    }

    return 0;
}
























// With papameter, With return type
// int sum(int a, int b) {
//     return a + b;
// }

// int main() {
//     int a = 2;
//     int b = 5;

//     std::cout << "Sum is: " << sum(a, b);

//     return 0;
// }


// With parameter, Without return type
// void sum(int a, int b) {
//     std::cout << "Sum is: " << a + b;
// }

// int main()
// {
//     int a = 3;
//     int b = 2;

//     sum(a, b);

//     return 0;
// }




// Wo



