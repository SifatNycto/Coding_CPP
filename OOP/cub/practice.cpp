#include <iostream>
#include <string>

// void print(int n);

// int main()
// {
//     int n;
//     std::cout << "Enter number: ";
//     std::cin >> n;

//     print(n);

//     return 0;
// }

// void print(int n)
// {
//     if (n == 0) return;

//     std::cout << "\nHello World";

//     print(n - 1);
// }






// >>>>>>>>>>>>>>>>>>>
// Method Overloading .............

// class Math {
//     public:
//         int add(int a, int b) {
//             return a + b;
//         }

//         int add(int a, int b, int c) {
//             return a + b + c;
//         }

//         float add(float a, float b) {
//             return a + b;
//         }
// };

// int main()
// {
//     Math math;

//     std::cout << math.add(5, 3) << std::endl;
//     std::cout << math.add(5, 3, 2) << std::endl;
//     std::cout << math.add(2.5f, 3.5f) << std::endl;

//     return 0;
// }











// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Operator Overloading
/*
    Some operators can't be overloaded 
    1. Scope resolution operator (::)
    2. Class member access operator (. , *)
    3. Size of operator (sizeof)
    4. Conditional operator (? :)
*/

// Complex number real & imaginary parts
// Arithmatic Operator
// class Complex {
//     public:
//         int real;
//         int imag;

//         // Complex(int r, int i) {
//         //     real = r;
//         //     imag = i;
//         // }

//         // Complex(int r = 0, int i = 0) : real(r), imag(i) {}

//         void getReal() {
//             std::cin >> real;
//         }

//         void getImag() {
//             std::cin >> imag;
//         }

//         Complex operator +(Complex obj) {
//             // Complex c3(0, 0);
//             Complex c3;

//             c3.real = real + obj.real;
//             c3.imag = imag + obj.imag;

//             return c3;
//         }
// };

// int main()
// {
//     Complex c1;
//     Complex c2;

//     std::cout << "\nEnter c1.Real: ";
//     c1.getReal();
//     std::cout << "\nEnter c1.Imag: ";
//     c1.getImag();

//     std::cout << "\nEnter c2.Real: ";
//     c2.getReal();
//     std::cout << "\nEnter c2.Imag: ";
//     c2.getImag();
    
    
//     Complex c3 = c1 + c2;

//     std::cout << "\nReal: " << c3.real;
//     std::cout << "\nImag: " << c3.imag;

//     return 0;
// }












// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Prefix Operator >>>>>>>>>>>
