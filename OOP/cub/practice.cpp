#include <iostream>
#include <string>

void print(int n);

int main()
{
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    print(n);

    return 0;
}

void print(int n)
{
    if (n == 0) return;

    std::cout << "\nHello World";

    print(n - 1);
}