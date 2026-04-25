#include <iostream>
#include <string>

// Static Keyword
/*  
    Use ./1 as
    ### Static Variables
    Variables declared as static in a function are created 
    & initialised once for the lifetime of the program.
    // in Function
    
    Static variables in a class are created * initialised once. 
    They are shared by all the objects of the class.
    // in Class

    Use ./2 as
    ### Static Objects
*/



// in Function .....................

// void fun() {
//     // int x = 0; // for initializing everytime
    
//     static int x = 0;
//     std::cout << "\nx : " << x;
//     x++;
// }

// int main()
// {
//     fun();
//     fun();
//     fun();

//     return 0;
// }





// in Class ...........................

// class A {
//     public:
//         int x;

//         // A(int a = 0) : x(a) {}

//         void inX() {
//             x++;
//         }
// };

// int main()
// {
//     A obj1;
//     A obj2;

//     obj1.x = 100;
//     obj2.x = 200;

//     std::cout << "\nx: " << obj2.x;
   

//     return 0;

// }





// >>>>>>>>>>>>>>>>>>>>>>>>>

class ABC {
    public:
        ABC() {
            std::cout << "\nConstructor";
        }

        ~ABC() {
            std::cout << "\nDestructor";
        }
};

int main()
{
    //ABC obj;
    
    // if(true) {
    //     ABC obj;
    // }

    if(true) {
        static ABC obj;
    }

    std::cout << "\nEnd of main function";

    return 0;
}