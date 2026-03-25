#include <iostream>
#include <iomanip>
#include <string>




//ARRAYS >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Array = a data structure that can hold multiple values
//          values are accessed by an index number
//          "kind of like a variable that holds multiple values"
//           by declaring size of array, i can assign values later

// int main()
// {
//     std::string car[3];
//     car[0] = "Camaro";
//     car[1] = "Mustang";
//     car[2] = "Camry";
    
//     std::cout << car[0] << '\n';
//     std::cout << car[1] << '\n';
//     std::cout << car[2] << '\n';

//     return 0;
// }




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     std::cout << std::fixed << std::setprecision(2);
//     double prices[4] = {5.00, 7.50, 9.935785, 15.00};

//     std::cout << prices[0] << '\n';
//     std::cout << prices[1] << '\n';
//     std::cout << prices[2] << '\n';
//     std::cout << prices[3] << '\n';
//     return 0;
// }




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//sizeof() operator >>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//sizeof operator determines the size in bytes of a
//      variable, data type, class, objects etc.

// int main()
// {
//     std::string name = "M";
//     double gpa = 2.5;
//     int n = 5;
//     char grade = 'A';
//     bool student = true;
//     char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
//     std::string students[] = {"Spongebob", "Patrik", "Squidward"};


//     std::cout << std::endl << sizeof(name)  << " bytes in name";
//     std::cout << std::endl << sizeof(gpa) << " bytes in gpa";
//     std::cout << std::endl << sizeof(n) << " bytes in n";
//     std::cout << std::endl << sizeof(grade) << " bytes in grade";
//     std::cout << std::endl << sizeof(student) << " bytes in student";
//     std::cout << std::endl << sizeof(grades) << " bytes in grades";
    
//     std::cout << std::endl << sizeof(grades) / sizeof(grades[3]) << " elements in the  array.";
//     std::cout << std::endl << sizeof(students) / sizeof(students[2]) << " Elements is there";
    
//     return 0;
// }






// int main()
// {
//     int num[] = {90, 4, 3, 6, 2, 7, 5, 9};
//     int length = sizeof(num) / sizeof(int);
//     int min = num[0];
//     for (int i = 0; i < length; i++)
//     {
//         if (min < num[i])
//             min = num[i];
//     }

//     std::cout << std::endl << std::endl;

//     std::cout << "the minimum number from the array is: " << min;

//     return 0;
// }





//==============================================

// int main()
// {
//     int myNumbers[] = {3, -1, 7, 0, 9};
//     int num = myNumbers[0];
//     int length = sizeof(myNumbers) / sizeof(int);
//     for (int i = 0; i < length; i++)
//     {
//         if (num > myNumbers[i])
//             num = myNumbers[i];
//     }

//     std::cout << std::endl << "The highest value of the array is: " << num;
//     return 0;

// }



//==================================================================
// int main()
// {
//     std::string students[] = {"Spongbob", "Patrick", "Squidward"};

//         for (int j = 0; j < 3; j++)
//         std::cout << students[j] << " ";

//         std::cout << std::endl;

//     return 0;
// }




//====================================================================
//FOREACH LOOP >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//FOREACH LOOP = its a loop that erases the raversal over an iterable data set

// int main()
// {
//     std::string students[] = {"Spongbob", "Patrick", "Squidward"};
//     int num[] = {3, -1, 7, 0, 9};

//     for (int number : num)
//         std::cout << number << " ";
    
//     return 0;
// }



//====================================================================
//Passing Array to a Function >>>>>>>>>>>>>>>>>>>>>>>>>>>
// double getTotal(double prices[], int size);
// int main()
// {
//     double prices[] = {49.99, 15.05, 75, 9.99};
//     int size = sizeof(prices) / sizeof(prices[0]);
//     double total = getTotal(prices, size);

//     std::cout << "The total price is: $" << total;
//     return 0;
// }
// double getTotal(double prices[], int size)
// {
//     double total = 0;
//     for (int i = 0; i < size; i++)
//         total += prices[i];
//     return total;
// }









//=======================================================================
//SEARCHING ARRAY FOR AN ELEMENT >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//=======================================================================
// int search_number(int arr_num[], int arr_size, int input_num);

// int main()
// {
//     int arr_num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int arr_size = sizeof(arr_num) / sizeof(arr_num[0]);
//     int input_num;
    
//     std::cout << std::endl << "Enter a value to find index: ";
//     std::cin >> input_num;

//     int index = search_number(arr_num, arr_size, input_num);

//     std::cout << std::endl;

//     if (index != -1)
//         std::cout << input_num << " is at index " << index;
//     else
//         std::cout << input_num << " doesn't exist in the array";
// }

// int search_number(int arr_num[], int arr_size, int input_num)
// {
//     for (int i = 0; i < arr_size; i++)
//         if (arr_num[i] == input_num) return i;

//     return -1;
// }











//=======================================================
// int search_string(std::string foods[], int arr_size, std::string input_food);

// int main()
// {
//     std::string foods[] = {"pizza", "hamburger", "hotdog"};
//     int arr_size = sizeof(foods) / sizeof(std::string);

//     std::cout << "Enter food name to find its position: ";
//     std::string input_food;
//     std::cout << std::endl;
//     std::getline(std::cin, input_food);

//     int index = search_string(foods, arr_size, input_food);

//     std::cout << std::endl;

//     if (index != -1)
//         std::cout << input_food << " is at index " << index;
    
//     else
//         std::cout << input_food << " doesn't exists in the array";

//     return 0;
// }

// int search_string(std::string foods[], int arr_size, std::string input_food)
// {
//     for (int i = 0; i < arr_size; i++)
//         if (foods[i] == input_food) return i;
    
//     return -1;
// }










//==================================================================

// Normal for loop use to print all values >>>>>>>>>>>>>>>>>>>

// int main()
// {
//     int arr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
//     int size = sizeof(arr) / sizeof(int);

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }













// Using For each loop method to print all values >>>>>>>>>>>>>>>>>>>>

// int main()
// {
//     int arr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
//     int size = sizeof(arr) / sizeof(int);

//     for (int element : arr)
//     {
//         std::cout << element << " ";
//     }

//     return 0;
// }






//=====================================================================
//FILL FUNCTION
//fill(); = fills a range of elements with a specified value
//          fill(begin, end, value);

// int main()
// {
//     std::string foods[99];

//     fill(foods, foods + 99, "pizza");

//     for (std::string food : foods)
//         std::cout << food << " ";

//     return 0;
// }

//>>>>>>>>>>>>>>>>>>>>>>>>>>>

// int main()
// {
//     const int size = 99;
//     std::string foods[size];

//     fill(foods, foods + size/3, "pizza");
//     fill(foods + size/3, foods + (size/3)*2, "hamburger");
//     fill(foods + (size/3)*2, foods + size, "hotdog");

//     for (std::string food : foods)
//         std::cout << food << "\n";

//     return 0;
// }





//===================================================================
//Fill an Array with User Input >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     std::string foods[5];
//     int size = sizeof(foods) / sizeof(foods[0]);

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
//         std::getline(std::cin, foods[i]);
//         if (foods[i] == "q")
//             break;

//     }

//     std::cout << std::endl << "You like the following food: ";
//     std::cout << std::endl;

//     for (std::string food : foods)
//         std::cout << food << '\n';

//     return 0;
// }






//============= 2.O
//===================================================================
//Fill an Array with User Input >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     std::string foods[5];
//     int size = sizeof(foods) / sizeof(foods[0]);

//     std::string temp;

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
//         std::getline(std::cin, temp);
//         if (temp == "q")
//             break;
//         else
//             foods[i] = temp;

//     }

//     std::cout << std::endl << "You like the following food: ";
//     std::cout << std::endl;

//     for (std::string food : foods)
//         std::cout << food << '\n';

//     return 0;
// }





//============= 2.O
//===================================================================
//Fill an Array with User Input >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// int main()
// {
//     std::string foods[5];
//     int size = sizeof(foods) / sizeof(foods[0]);

//     std::string temp;

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
//         std::getline(std::cin, temp);
//         if (temp == "q")
//             break;
//         else
//             foods[i] = temp;

//     }

//     std::cout << std::endl << "You like the following food: ";
//     std::cout << std::endl;

//     for (int i = 0; !foods[i].empty(); i++)
//         std::cout << foods[i] << '\n';

//     return 0;
// }





//==============================

// int main()
// {
//     std::string foods[5];
//     int size = sizeof(foods) / sizeof(std::string);
//     std::string temp;


//     for (int i = 0; i < size; i++)
//     {
//         std::cout << "enter 5 food you like or 'q' to quit #" << i+1 << ": ";
//         std::getline(std::cin, temp);

//         if (temp == "q") break;
//         else foods[i] = temp;
//     }
//     std::cout << "You like the following food: " << std::endl;

//     for (int i = 0; !foods[i].empty(); i++)
//     {
//         std::cout << foods[i] << std::endl;
//     }


//     return 0;

// }







//===============================================================
//2 Dimensional Array >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// int main()
// {
//     std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
//                             {"Corvette", "Equinox", "Silverado"},
//                             {"Challenger", "Durango", "Ram-1500"}};

//     int rows = sizeof(cars) / sizeof(cars[0]);
//     int columns = sizeof(cars[0]) / sizeof(cars[0][0]);



//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             std::cout << cars[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }










//======================================================================
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//QUIZ GAME >>>>>>>>>>>>>>>>>>>>>>>>>>>>

int main()
{
    std::string questions[] = {"1. What year was C++ created?",
                                "2. Who invented C++?",
                                "3. What is the predessor of C++?",
                                "4. Is the Earth flat?"};
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. Jhon Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};
    
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << std::endl << "-----------------------------------";
        std::cout << std::endl << questions[i];
        std::cout << std::endl << "-----------------------------------";

        std::cout << std::endl << std::endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << std::endl;
        }

        std::cin >> guess;
        guess = toupper(guess);


        if (guess == answerKey[i])
        {
            std::cout << "CORRECT" << std::endl;
            score++;
        }
        else
            std::cout << "WRONG" << std::endl;
            std::cout << "Answer: " << answerKey[i] << std::endl;
    }

    std::cout << std::endl << "--------------------------";
    std::cout << std::endl << "          RESULT          ";
    std::cout << std::endl << "--------------------------";


    std::cout << std::endl << "CORRECT GUESSES: " << score;
    std::cout << std::endl << "No. of Questions: " << size;
    std::cout << std::endl << "SCORE: " << (score / (double) size) * 100 << "%";

    return 0;
}