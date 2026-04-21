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









// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>











// Operator Overloading With +

// class Sum {
//     public:
//         int x;

//         Sum(int xx = 0) : x(xx) {}

//         Sum operator+(Sum obj) {
//             Sum c;
//             c.x = x + obj.x;
//             return c;
//         }
// };

// int main()
// {
//     Sum a(2);
//     Sum b(3);

//     std::cout << "\nValue of 'x' for object 'a' -> a.x: " << a.x;
//     std::cout << "\nValue of 'x' for object 'b' -> b.x: " << b.x;

//     Sum c = a + b;

//     std::cout << "\nSummation of object 'a' and object 'b' is: " << c.x;

//     return 0;
// }
















// Operator Overloading With - 

// class Sub {
//     public:
//         int x;

//         Sub(int xx) : x(xx) {}

//         Sub operator-(Sub obj) {
//             Sub c(0);
//             c.x = x - obj.x;
//             return c;
//         }
// };

// int main()
// {
//     Sub a(3);
//     Sub b(2);

//     std::cout << "\nValue of 'x' for object 'a' -> a.x: " << a.x;
//     std::cout << "\nValue of 'x' for object 'b' -> b.x: " << b.x;

//     Sub c = a - b;

//     std::cout << "\nSubtraction of object 'a' and 'b' is: " << c.x;

//     return 0;
// }










// Operator Overloading With *

// class Multi {
//     public:
//         int x;

//         Multi(int x = 0) {
//             this->x = x;
//         }

//         Multi operator*(Multi obj) {
//             Multi c;
//             c.x = x * obj.x;
//             return c;
//         }
// };

// int main()
// {
//     Multi a(2);
//     Multi b(3);

//     std::cout << "\nValue of 'x' for object 'a' -> a.x: " << a.x;
//     std::cout << "\nValue of 'x' for object 'b' -> b.x: " << b.x;

//     Multi c = a * b;

//     std::cout << "\nMultiplication of object 'a' and 'b' is: " << c.x;

//     return 0;
// }

















// Operator Overloading With /

// class Div {
//     public:
//         int x;

//         Div(int x) {
//             this->x = x;
//         }

//         Div operator/(Div obj) {
//             Div c(0);
//             c.x = x / obj.x;
//             return c;
//         }
// };

// int main()
// {
//     Div a(3);
//     Div b(2);

//     std::cout << "\nValue of 'x' for object 'a' -> a.x: " << a.x;
//     std::cout << "\nValue of 'x' for object 'b' -> b.x: " << b.x;

//     Div c = a / b;

//     std::cout << "\nDivision of object 'a' and 'b' is: " << c.x;

//     return 0;
// }

















// Operator Overloading With -=

// class ShortHand {
//     public:
//         int x;

//         void getInfo() {
//             std::cin >> x;
//         }

//         void operator-=(ShortHand obj) {
//             x += obj.x;
//         }
// };

// int main()
// {
//     ShortHand a;
//     ShortHand b;

//     std::cout << "\nEnter value of 'x' for object 'a' -> a.x: ";
//     a.getInfo();
//     std::cout << "\nEnter value of 'x' for object 'b' -> b.x: ";
//     b.getInfo();

//     std::cout << "\nBefore -> a.x: " << a.x;
//     std::cout << "\nBefore -> b.x: " << b.x;

//     a -= b;

//     std::cout << std::endl;

//     std::cout << "\nAfter -> a.x: " << a.x;
//     std::cout << "\nAfter -> b.x: " << b.x;

//     return 0;
// }


















// Operator Overloading With =

// class Equal {
//     public:
//         int x;
//         int y;

//         void getInfoA() {
//             std::cin >> x;
//         }
//         void getInfoB() {
//             std::cin >> y;
//         }

//         void operator=(Equal obj) {
//             x = obj.y;
//         }
// };

// int main()
// {
//     Equal a;
//     Equal b;

//     std::cout << "\nEnter value of 'x' for object 'a' -> a.x: ";
//     a.getInfoA();
//     std::cout << "\nEnter value of 'y' for object 'b' -> b.y: ";
//     b.getInfoB();

//     std::cout << "\nBefore -> a.x: " << a.x;
//     std::cout << "\nBefore -> b.y: " << b.y;

//     a = b;

//     std::cout << std::endl;

//     std::cout << "\nAfter -> a.x: " << a.x;
//     std::cout << "\nAfter -> b.y: " << b.y;

//     return 0;
// }












// Operator Overloading With ==

// class Bool {
//     public:
//         int x;
//         int y;

//         void getInfoA() {
//             std::cin >> x;
//         }
//         void getInfoB() {
//             std::cin >> y;
//         }

//         bool operator==(Bool obj) {
//             if (x == obj.y)
//                 return true;
//             else
//                 return false;
//         }
// };

// int main()
// {
//     Bool a;
//     Bool b;

//     std::cout << "\nEnter value of 'x' for object 'a' -> a.x: ";
//     a.getInfoA();
//     std::cout << "\nEnter value of 'y' for object 'b' -> b.y: ";
//     b.getInfoB();

//     std::cout << "\n-> a.x: " << a.x;
//     std::cout << "\n-> b.y: " << b.y;

//     std::cout << std::endl;

//     if (a == b)
//         std::cout << "\nObject A and Object B are Equal.";
//     else
//         std::cout << "\nObject A and Object B are not Equal.";

//     return 0;
// }


















// Operator Overloading With --Prefix

// class Prefix {
//     public:
//         int x;

//         void getInfo() {
//             std::cin >> x;
//         }

//         Prefix& operator--() {
//             --x;
//             return *this;
//         }
// };

// int main()
// {
//     Prefix pre;

//     std::cout << "\nEnter value of 'x' for object 'pre' -> pre.x: ";
//     pre.getInfo();

//     std::cout << "\nEntered value of 'x' -> pre.x: " << pre.x;

//     --pre;

//     std::cout << "\nAfter --pre";
    
//     std::cout << "\n\n\"Decreased\" pre.x: " << pre.x;
    
//     std::cout << "\n\nThen \"Used\" pre.x: " << pre.x;

//     return 0;
// }

















// Operator Overloading With Postfix--

class Postfix {
    public:
        int x;

        void getInfo() {
            std::cin >> x;
        }

        Postfix operator--(int) {
            Postfix Temporary = *this;
            x--;
            return Temporary;
        }
};

int main()
{
    Postfix post;

    std::cout << "\nEnter value of 'x' for object 'post' -> post.x: ";
    post.getInfo();

    std::cout << "\nEntered value of 'x' -> post.x: " << post.x;

    std::cout << "\n\nBefore post--";

    std::cout << "\n\"Used\" post.x: " << post.x;

    post--;

    std::cout << "\n\nAfter post--";
    
    std::cout << "\nThen \"Decreased\" post.x: " << post.x;

    return 0;
}