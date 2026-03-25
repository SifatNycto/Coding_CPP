#include <iostream>
#include <iomanip>
#include <cmath>

//#include <vector>

// using namespace std;

// int main()
// {
//     cout << "\nHello World!\n" << endl;
//     return 0;
// }



// int main()
// {
//     std::cout << "Hi There." << '\n';       //also here as std::endl;
//     std::cout << "This is Sifat" << '\n';   //also here as std::endl;
//     return 0;
// }


// int main()
// {
//     int x = 5;
//     int y = 6;
//     int sum = x + y;

//     std::cout << x << '\n';
//     std::cout << y << '\n';
//     std::cout << "the sum is: " << sum;
//     return 0;
// }



// int main()
// {
//     // integer
//     std::cout << "integers" << '\n';
//     int age = 21;
//     int year = 2025;
//     int days = 7.5;
//     std::cout << "age, year, days: " << age << '\t' << year << '\t' << days << '\n';

//     std::cout << '\n';

//     // double
//     std::cout << "doubles" << '\n';
//     double price = 10.99;
//     double gpa = 3.97;
//     double temperature = 25.1;
//     std::cout << "price, gpa, temperature: " << price << '\t' << gpa << '\t' << temperature << '\n';

//     std::cout << std::endl;

//     // char
//     std::cout << "char single character" << std::endl;      // '\n';
//     char grade = 'A';
//     char initial = 'B';
//     char currency = '$';
//     std::cout << initial << '\n' << currency << '\n';

//     std::cout << '\n';

//     // boolean (true or false)
//     std::cout << "this is for boolean" << '\n';
//     bool student = false;
//     bool power = true;
//     bool forSale = true;
//     std::cout << power << student << '\n';

//     std::cout << std::endl;

//     // string (objects that represents a sequence of text)
//     std::cout << "this is Strings" << '\n';
//     std::string name = "sifat";
//     std::string day = "Saturday";
//     std::string food = "Pizza";
//     std::string address = "667 Tilpapara, / Khilgaon, Dhaka";

//     std::cout << "Hi There" << " " << name << '\n';
//     std::cout << "I am " << age << " years old" << std::endl;
//     std::cout << address << std::endl;

//     std::cout << name << '\n';



    
//     return 0;
// }






//const -->> constant

// int main()
// {
//     const double pi = 3.14159;
//     double radius = 10;
    


//     double circumference = 2 * pi * radius;
//     std::cout << circumference << " cm" << '\n';

//     return 0;
// }



//Namespace =================>>>>>>>>>>

// namespace first{
//     int x = 1;
// }
// namespace second{
//     int x = 2;
// }

// int main()
// {
//     using namespace second;
//     int x = 5;
    

//     std::cout << first::x;

//     return 0;
// }

//===============

// int main()
// {
//     //using namespace std;
//     using std::cout;
//     using std::string;

//     string name = "sifat";

//     cout << "hi there" << '\n';
//     cout << name;


//     return 0;
// }

//>>>>>>>>>>>>>>>>>>>>>>>>>

//typedef and type alias ==============>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//typedef is used for a nickname for data type
//this needs a header file named #include <vector>
//typedef is replaced with 'using' keyword

//typedef std::vector<std::pair<std::string, int>> pairlist_t;        //_t >>> means type
// typedef std::string text_t;
// typedef int number_t;

// using text_t = std::string;
// using number_t = int;
// int main()
// {
//     //pairlist_t pairlist;        // using typedef std::vector<std::pair<std::string, int>> replaced with paitlist_t
    
//     text_t firstname = "sifat";     //shortcut for using text_t instead of std::string
//     std::cout << firstname << std::endl;
//     number_t age = 21;
//     std::cout << age << '\n';



//     return 0;
// }




// int main()
// {
//     typedef std::string str_t;
//     typedef int i_t;
//     using namespace std;
//     using std::cout;
//     // using str = std::string;
//     // using i = int;
//     str_t name = "Sifat";
//     i_t age = 21;
    

//     cout << "Hey, I'm " << name << '\n';
//     cout << "Nice to meet you" << endl;
//     cout << "I'm " << age << " years old." << '\n';

//     return 0;
// }



//===============================>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// using namespace std; || for 
// int main()
// {
//     std::string name;
//     int age;
    
//     std::cout << "What's your name? ";
//     std::getline(std::cin >> std::ws, name);
//     std::cout << "What's your age? ";
//     std::cin >> age;

//     std::cout << std::endl;

//     std::cout << "Hello " << name << std::endl;
//     std::cout << "You are " << age << " years old." << std::endl;

//     return 0;
// }







// FUN >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> FUN

// int main()
// {
//     std::string name;

//     std::cout << "Who are you looking for? " << std::endl;
//     std::cout << "Your answer: ";

//     std::getline(std::cin >> std::ws, name);

//     std::cout << "\nOh ho,,, You are looking for " << name << '\n';
//     std::cout << name << ", is a very Good Person" << std::endl;
//     std::cout << "And, also very Fashionable." << std::endl;

//     return 0;
// }







//=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>=>
//#include <cmath>
// int main()
// {
//     double a, b, c;
//     std::cout << "Enter side a: ";
//     std::cin >> a;
//     std::cout << "\nEnter side b: ";
//     std::cin >> b;
//     a = pow(a, 2);
//     b = pow(b, 2);
//     // c = sqrt(pow(a,2) + pow(b,2));
//     std::cout << "\nSide c is: " << c << std::endl;
//     return 0;
// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//IF Statment >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     int n;
//     std::cout << "Enter any number to find even or odd: ";
//     std::cin >> n;
//     std::cout << std::endl;
//     if (n == 0)
//     {
//         std::cout << "Opps... \n";
//         std::cout << "You entered Zero";
//     }
//     else if (n % 2 == 0)
//     {
//         std::cout << "The number " << n << " is Even";
//     }
//     else
//     {
//         std::cout << "The number " << n << " is Odd";
//     }

//     return 0;
// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//SWITCH >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     int month;
//     std::cout << "Enter the month (1-12): ";
//     std::cin >> month;

//     switch(month)
//     {
//         case 1:
//             std::cout << "It is January";
//             break;
//         case 2:
//             std::cout << "It is February";
//             break;
//         case 3:
//             std::cout << "It is March";
//             break;
//         case 4:
//             std::cout << "Is is April";
//             break;
//         case 5:
//             std::cout << "It is May";
//             break;
//         case 6:
//             std::cout << "It is June";
//             break;
//         case 7:
//             std::cout << "It is July";
//             break;
//         case 8:
//             std::cout << "It is August";
//             break;
//         case 9:
//             std::cout << "It is September";
//             break;
//         case 10:
//             std::cout << "It is October";
//             break;
//         case 11:
//             std::cout << "It is November";
//             break;
//         case 12:
//             std::cout << "It is December";
//             break;
//         default:
//             std::cout << "Invalid Input";
//     }

//     return 0;
// }


//==================or like
// int main()
// {
//     char grade;
//     std::cout << "Enter letter (A-F): ";
//     std::cin >> grade;
//     switch (grade)
//     {
//     case 'A':
//         std::cout << "You did Great";
//         break;
//     case 'B':
//         std::cout << "You did Good";
//         break;
//     case 'C':
//         std::cout << "You did Okay";
//         break;
//     case 'D':
//         std::cout << "You did not Good";
//         break;
//     case 'F':
//         std::cout << "You Failed";
//         break;
    
//     default:
//         std::cout << "Invalid Input!!!" << std::endl;
//         std::cout << "Please enter only letter grade (A-F): " << '\n';
//         break;
//     }
    
//     return 0;
// }





//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//calculator >>>>>>>>>>>>>>>>>


// int main()
// {
//     char op;
//     double num1, num2, result;
//     std::cout << ">>>>>>>>>> CALCULATOR <<<<<<<<<<" << std::endl;
    
//     std::cout << "\nEnter options (+ - * /): ";
//     std::cin >> op;
    
//     std::cout << "\nEnter 1st number: ";
//     std::cin >> num1;
    
//     std::cout << "Enter 2nd number: ";
//     std::cin >> num2;

//     switch(op)
//     {
//         case '+':
//             result = num1 + num2;
//             std::cout << num1 << " + " << num2 << " = " << result << '\n';
//             break;
//         case '-':
//             result = num1 - num2;
//             std::cout << num1 << " - " << num2 << " = " << result << '\n';
//             break;
//         case '*':
//             result = num1 * num2;
//             std::cout << num1 << " * " << num2 << " = " << result << '\n';
//             break;
//         case '/':
//             result = num1 / num2;
//             std::cout << num1 << " / " << num2 << " = " << result << '\n';
//             break;

//         default:
//             std::cout << "Invalid Option Choise" << std::endl;
//             std::cout << "Please Enter among these operations (+ - * /)" << std::endl;
//     }
    
//     std::cout << std::endl;

//     std::cout << ">>>>>>>>>> ========== <<<<<<<<<<";
//     return 0;
// }








//===========================>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     int n;
//     std::cout << "Enter any number: ";
//     std::cin >> n;

    
    // n % 2 == 0
    //     ? std::cout << "Even"
    //         : std::cout << "Odd";

    // std::cout << (n % 2 ? "The number is Odd" : "The number is Even");



    
    // bool hungry = true;
    // hungry ? std::cout << "you are hungry" : std::cout << "you are full";
    
    // std::cout << (hungry ? "you are hungry" : "you are full");



//     return 0;
// }




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Logical operators
// int main()
// {
//     int temp;
//     bool sunny = false;

//     std::cout << "Enter the temperature: ";
//     std::cin >> temp;
    
//     if (temp <= 0 || temp >= 30)
//     {
//         std::cout << "The temperature is bad\n";
//     }
//     else
//     {
//         std::cout << "The temperature is good\n";
//     }

//     if (!sunny)
//     {
//         std::cout << "It is cloudy outside";
//     }
//     else
//     {
//         std::cout << "It is sunny outside";
//     }
    
//     return 0;
// }







//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// int main()
// {
//     double temp;
//     char unit;
//     std::cout << ">>><<< Temperature Conversion >>><<<" << '\n';
//     std::cout << "F = Farenheit" << '\n';
//     std::cout << "C = Celsius" << '\n';
//     std::cout << "What unit would you like to convert to: " << '\n';
//     std::cin >> unit;

//     if (unit == 'F' || unit == 'f')
//     {
//         std::cout << "Enter the temperature in Celsius: " << '\n';
//         std::cin >> temp;
//         temp = (1.8 * temp) + 32.0;
//         std::cout << std::fixed << std::setprecision(2) << "Temperature is: " << temp << " F" << '\n';
//     }
//     else if (unit == 'C' || unit == 'c')
//     {
//         std::cout << "Enter the temperature in Farenheit: " << '\n';
//         std::cin >> temp;
//         temp = (temp - 32) / 1.8;
//         std::cout << std::fixed << std::setprecision(2) << "Temperature is: " << temp << " Degree C" << '\n';
//     }
//     else
//     {
//         std::cout << "Please enter only C or F" << '\n';
//     }
    
//     return 0;
// }







//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//STRING METHODS........................................................
//length() for string length
//empty() for checking if the input string is empty
//clear() for clearing the string input
//append() for appending something with the string from inside the function
// int main()
// {
//     std::string name;
//     std::cout << "Enter your name: ";
//     std::getline(std::cin, name);
//     if (name.length() > 12)
//     {
//         std::cout << "Your name can't be over 12 characters";
//     }
//     else
//     {
//         std::cout << "Welcome to usersname";
//     }
    
//     if (name.empty())
//     {
//         std::cout << "you didn't entered your name";
//     }
//     else
//     {
//         std::cout << "Hello " << name;
//     }

//     name.clear();
//     std::cout << "Hello " << name;

//     name.append("@gmail.com");
//     std::cout << "Your username is now " << name;


//     std::cout << name.at(0);        //for showing the index positions character

//     name.insert(1, "@");        //inserting somthing with(before) the index of string
//     std::cout << name;

//     std::cout << name.find("a");        //finding index of something
    
//     name.erase(0, 3);       //removing characters from string from - to
//     std::cout << name;




//     return 0;
// }









//==========================>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//WHILE LOOPS >>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Without entering name you can't escape from the loop
// int main()
// {
//     std::string name;

//     while (name.empty())
//     {
//         std::cout << "Enter your name: ";
//         std::getline(std::cin, name);
//     }
    
//     std::cout << "Hello " << name;

//     return 0;
// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//DO WHILE >>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     int number;

//     do {
//         std::cout << "Enter positive number: ";
//         std::cin >> number;
//     }while (number < 0);

//     std::cout << "The number is: " << number;

//     return 0;
// }






//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//FOR LOOPS
// int main()
// {
//     for (int i = 10; i >= 0; i-=2)
//     {
//         std::cout << i << '\n';
//     }
//     std::cout << "Happy New Year" << '\n';
    
//     return 0;
// }




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//BREAK & CONTINUE
//break = break out of a loop
//continue = skip current iteration
// int main()
// {
//     for (int i = 1; i <= 20; i++)
//     {
//         if(i == 13) break;
//         std::cout << i << '\n';
//     }
    
//     // for (int i = 1; i <= 20; i++)
//     // {
//     //     if (i == 13) continue;
//     //     std::cout << i << '\n';
//     // }

//     return 0;
// }





//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//NESTED LOOPS
// int main()
// {
//     int rows, columns;
//     char symbol;

//     std::cout << "How many rows?: ";
//     std::cin >> rows;
//     std::cout << "\nHow manu columns?: ";
//     std::cin >> columns;
//     std::cout << "\nEnter any symbol to use: ";
//     std::cin >> symbol;
    
//     for(int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             std::cout << symbol << ' ';
//         }
//         std::cout << '\n';
//     }

//     return 0;
// }





//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

