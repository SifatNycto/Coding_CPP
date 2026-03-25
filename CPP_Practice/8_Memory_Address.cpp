#include <iostream>

// memory address = a location in memory where data is stored 
// a memory address can accessed with & (address-of operator)


// int main()
// {
//     std::string name = "Bro";
//     int age = 21;
//     bool student = true;


//     std::cout << std::endl << &name;
//     std::cout << std::endl << &age;
//     std::cout << std::endl << &student;

//     return 0;
// }




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Pass by value vs Pass by reference >>>>>>>>>>>>>>
//a reference as an a memory address
// pass by reference is better unless the need of pass by value

// void swap(std::string &x, std::string &y);
// int main()
// {
//     std::string x = "Kool-Aid";
//     std::string y = "Water";


//     std::cout << std::endl << "Before swap >>>";
//     std::cout << std::endl << "X = " << x;
//     std::cout << std::endl << "Y = " << y;

//     swap(x, y);

//     std::cout << std::endl << "Before swap >>>";
//     std::cout << std::endl << "X = " << x;
//     std::cout << std::endl << "Y = " << y;


//     return 0;
// }

// void swap(std::string &x, std::string &y)
// {
//     std::string temp;
//     temp = x;
//     x = y;
//     y = temp;
// }





//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// const parameter = parameter that is effectively read-only 
//                  code in more secure & conveys intent
//                  useful for reference and pointers

void print_info(const std::string name, const int age);
int main()
{
    std::string name = "Nycto";
    int age = 21;

    print_info(name, age);

    return 0;
}

void print_info(const std::string name, const int age){
    std::cout << std::endl << "name: " << name;
    std::cout << std::endl << "age: " << age;
}



