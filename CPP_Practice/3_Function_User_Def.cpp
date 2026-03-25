#include <iostream>
//Function is a block of reusable code

// void happyBirthday(std::string name, int age);

// int main()
// {
//     std::string name;
//     std::cout << "Enter you name: ";
//     std::getline(std::cin, name);
//     int age = 21;
//     happyBirthday(name, age);
    
    
//     return 0;
// }

// void happyBirthday(std::string name, int age)
// {
//     std::cout << "\nHappy Birthday to you";
//     std::cout << "\nHappy Birthday to you";
//     std::cout << "\nHappy Birthday dear " << name;
//     std::cout << "\nHappy Birthday to you";
//     std::cout << "\nYou are now " << age << " years old";
// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//RETURN KEYWORD >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// std::string concatinate(std::string s1, std::string s2);
// int main()
// {
//     std::string first_name;
//     std::string second_name;
//     std::cout << "Enter your first name: ";
//     std::getline(std::cin, first_name);
//     std::cout << "\nEnter your second name: ";
//     std::getline(std::cin, second_name);

//     std::string fullname = concatinate(first_name, second_name);
//     std::cout << "\nYour Fullname is: " << fullname;
//     return 0;
// }
// std::string concatinate(std::string s1, std::string s2)
// {
//     return s1 + " " + s2;
// }








//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//VARIABLE SCOPE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Local Variables = declared inside a function or block{}
//Global variables = declared outside of all functions

// void mynum(int num);

// int num = 1;

// int main()
// {
    
//     std::cout << '\n' << "The number is: " << num << '\n';

//     mynum(num);

//     return 0;
// }

// void mynum(int num)
// {
    
//     std::cout << '\n' << "My number is: " << num;
// }






//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//OVER LOADED FUNCTIONS
//Function Name + Parameters = Function Signature
//Functions can share same names but differents
//Signature needs to be Unique

void bakePizza();
void bakePizza(std::string topping_1);
void bakePizza(std::string topping_1, std::string topping_2);
int main()
{
    
    bakePizza("Pepperoni", "Mushrooms");

    return 0;
}

void bakePizza()
{
    std::cout << "Here is your chesed Pizza";
}

void bakePizza(std::string topping_1)
{
    std::cout << "Here is your " << topping_1 << " Pizza" << std::endl;
}

void bakePizza(std::string topping_1, std::string topping_2)
{
    std::cout << "Here is your " << topping_1 << " and " << topping_2 << " Pizza" << std::endl;
}