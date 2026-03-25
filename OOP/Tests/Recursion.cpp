#include <iostream>


// Factorial of a number >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int factorial(int n);
// int main()
// {
//     int n;
//     std::cout << "Enter any number to find factorial: ";
//     std::cin >> n;

//     std::cout << std::endl << "The factorial of " << n << " is: " << factorial(n);

//     return 0;
// }
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     return n * factorial(n - 1);
// }




// Fibonacci series >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


int fibonacci(int n);
int main()
{
    int n;
    std::cout << "Enter number of terms for fibonacci series: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
        std::cout << fibonacci(i) << " ";

    return 0;
}
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    
return fibonacci(n - 1) + fibonacci(n - 2);
}