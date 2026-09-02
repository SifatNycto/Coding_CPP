#include <iostream>

int main()
{
    int n;
    std::cout << "How many time you wanna hear that: ";
    std::cin >> n;
    std::string name = "Afsana";

    for (int i = 0; i < n; i++)
    {
        std::cout << i+1 << " I miss you " << name << " so much";
        std::cout << std::endl;
    }

    return 0;
}