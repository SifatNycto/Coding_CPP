#include <iostream>
#include <string>

// 1. fucntion prototype || declaration
// 2. funciton body
// 3. function call




// no return, with argument

void sum(int x, int y);

int main()
{
    int a = 2, b = 4;

    sum(a, b);

    return 0;
}

void sum(int x, int y) {
    std::cout << "the sum is: " << x + y;
}




// // with return, with argument >>>>>>>>>>>

// int sum(int x, int y);

// int main()
// {
//     int a = 2, b = 4;

//     int s = sum(a, b);

//     std::cout << s;

//     // std::cout << sum(a, b);

//     return 0;
// }

// int sum(int x, int y) {
//     int c = x + y;

//     return c;
// }




// return, no argument

// int sum();

// int main()
// {
//     // int S = sum();
//     // std::cout << S;

//     std::cout << "the sum is: " << sum();

//     return 0;
// }

// int sum() {
//     int a = 2, b = 4;
//     int c = a + b;

//     return c;
// }



// no return, no argument

// void sum();

// int main()
// {
//     sum();

//     return 0;
// }

// void sum() {
//     // std::cout << "hello";
//     // std::cout << 5 + 6;

//     int a = 2, b = 3;
//     std::cout << a + b;
// }








// void hello();
// void hi();

// int main()
// {
//     hello();
//     std::cout << std::endl;

//     hi();
//     return 0;
// }



// void hello() {
//     std::cout << "hello world";
// }

// void hi() {
//     std::cout << "hi there";
// }





