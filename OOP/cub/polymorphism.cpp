#include <iostream>
#include <string>

// class Demo {
//     public:
//         int x;

//         void getInfo()
//         {
//             std::cout << "Enter value for x: ";
//             std::cin >> x;
//         }

//         Demo operator-(Demo obj)
//         {
//             Demo y;
//             y.x = x - obj.x;

//             return y;
//         }
// };

// int main()
// {
//     Demo a;
//     Demo b;
    
//     a.getInfo();
//     b.getInfo();

//     std::cout << "\na.x: " << a.x;
//     std::cout << "\nb.x: " << b.x;

//     Demo c = a - b;

//     std::cout << "\nc.x: " << c.x;

//     return 0;
// }




// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// class Complex {
//     public:
//         int real;
//         int imag;

//         //Complex(int r, int i) : real(r), imag(i) {}

//         Complex(int r, int i) {
//             real = r;
//             imag = i;
//         }

//         Complex operator-(Complex b) {
//             Complex c(0,0);
//             c.real = real - b.real;
//             c.imag = imag - b.imag;

//             return c;
//         }
// };

// int main()
// {
//     Complex a(6,3);
//     Complex b(4,5);

//     Complex c = a - b;

//     std::cout << std::endl << "     " << a.real << "+" << a.imag << "i";

//     std::cout << std::endl << " (-) " << b.real << "+" << b.imag << "i";

//     std::cout << std::endl << "------------";

//     if(c.imag < 0 && c.real < 0) std::cout << std::endl << " => " << c.real << "" << c.imag << "i";

//     else if(c.imag < 0 && c.real >= 0) std::cout << std::endl << " =>  " << c.real << "" << c.imag << "i";

//     else if(c.imag >= 0 && c.real < 0) std::cout << std::endl << " => " << c.real << "+" << c.imag << "i";

//     else std::cout << std::endl << " =>  " << c.real << "+" << c.imag << "i";

//     return 0;
// }

/*
 imag -, real -
     2+3i
 (-) 4+5i
------------
 => -2-2i

 imag -, real +
     2+3i
 (-) 4+5i
------------
 =>  2-2i

 imag +, real -
     2+3i
 (-) 4+5i
------------
 => -2+2i

imag +, real +
     2+3i
 (-) 4+5i
------------
 =>  2-2i
*/




// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>      =

// class Demo {
//     public:
//         int x;

//         Demo() {
//             std::cout << "Enter value for x: ";
//             std::cin >> x;
//         }
        
//         // void getInfo() {
//         //     std::cout << "Enter value for x: ";
//         //     std::cin >> x;
//         // }

//         void operator=(Demo b) {
//             x = b.x;
//         }
// };

// int main()
// {
//     std::cout << "for a obj";

//     Demo a;

//     std::cout << "for b obj";
//     Demo b;

//     //b.getInfo();

//     std::cout << "before a.x: " << a.x;
//     a = b;

//     std::cout << "after a.x: " << a.x;

//     return 0;
// }










// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  ==
// class Demo {
//     public:
//         int x;

//         // Demo(int x) {
//         //     this->x = x;
//         //     //std::cin >> x;
//         // }

//         void getInfo() {
//             std::cin >> x;
//         }
//         bool operator==(Demo b) {
//             if (x == b.x)
//                 return true;
//             else
//                 return false;
//         }
        
// };

// int main()
// {
//     Demo a, b;

//     std::cout << "\nEnter value of x for object a: ";
//     a.getInfo();
//     std::cout << "\nEnter value of x for object b: ";
//     b.getInfo();

//     if (a == b)
//         std::cout << "\nValues are identical.";
//     else
//         std::cout << "\nValues are different.";
    
//     return 0;
// }








// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> +=
// class Demo {
//     public:
//         int x;

//         void getInfo() {
//             std::cin >> x;
//         }

//         void operator+=(Demo obj) {
//             x += obj.x;
//         }
// };

// int main()
// {
//     Demo a;
//     Demo b;

//     std::cout << "\nEnter value of x for object a: ";
//     a.getInfo();
//     std::cout << "\nEnter value of x for object b: ";
//     b.getInfo();

//     std::cout << "\nBefore a.x: " << a.x;
//     std::cout << "\nBefore b.x: " << b.x;

//     a += b;

//     std::cout << "\nAfter a.x: " << a.x;
//     std::cout << "\nAfter b.x: " << b.x;

//     return 0;
    
// }



//  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ++prefix

// class Demo {
//     public:
//         int x;

//         void getInfo() {
//             std::cin >> x;
//         }
//         Demo operator++(int) {
//             Demo temp = *this;
//             x++;
//             return temp;
//         }
// };

// int main()
// {
//     Demo a;
//     std::cout << "\nEnter value of x: ";
//     a.getInfo();

//     std::cout << "\nBefore ++a a.x: " << a.x;
    
//     a++;

//     std::cout << "\nAfter ++a a.x: " << a.x;

//     std::cout << "\nAfter 2nd time a.x: " << a.x;

//     return 0;

// }





// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>....................
// prefix chatgpt

// class Demo {
// public:
//     int x;

//     Demo(int val = 0) {
//         x = val;
//     }

//     // Prefix ++
//     Demo& operator++() {
//         ++x;          // increment first
//         return *this; // return updated object
//     }
// };

// int main() {
//     Demo a(5);

//     ++a;

//     std::cout << a.x << std::endl; // 6

//     return 0;
// }



// postfix chatgpt

// class Demo {
// public:
//     int x;

//     Demo(int val = 0) {
//         x = val;
//     }

//     // Postfix ++
//     Demo operator++(int) {
//         Demo temp = *this; // save old value
//         x++;               // increment
//         return temp;       // return old value
//     }
// };

// int main() {
//     Demo a(5);

//     a++;

//     std::cout << a.x << std::endl; // 6

//     return 0;
// }



// last prefix ...........................................


// using namespace std;

// class Number {
// public:
//     int a;

//     Number(int x) { a = x; }

//     Number& operator++() {
//         cout << "\n[Prefix] Before increment: " << a;
//         ++a;
//         cout << "\n[Prefix] After increment: " << a;
//         return *this;
//     }
// };

// int main() {
//     Number n(5);

//     cout << "\nInitial value: " << n.a;

//     cout << "\nValue used in expression (++n): " << (++n).a;

//     cout << "\nFinal value of n: " << n.a;

//     return 0;
// }



// last postfix ..................................................


// using namespace std;

// class Number {
// public:
//     int a;

//     Number(int x) { a = x; }

//     Number operator++(int) {
//         cout << "\n[Postfix] Before increment: " << a;
//         Number temp = *this;
//         a++;
//         cout << "\n[Postfix] After increment: " << a;
//         return temp;
//     }
// };

// int main() {
//     Number n(5);

//     cout << "\nInitial value: " << n.a;

//     cout << "\nValue used in expression (n++): " << (n++).a;

//     cout << "\nFinal value of n: " << n.a;

//     return 0;
// }