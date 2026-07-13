#include <iostream>
#include <string>
#include <cctype>


// int main()
// {
//     std::string word;
//     std::cin >> word;
//     int size = word.length();

//     if(isupper(word[0]))
//     {
//         for (int i = 0; i < size; i++)
//         {
//             word[i] = tolower(word[i]);
//         }
//     }

//     else
//     {
//         for (int i = 0; i < size; i++)
//         {
//             word[i] = toupper(word[i]);
//         }
//     }

//     std::cout << std::endl << word;

//     return 0;
// }


// int main()
// {
//     std::string word;
//     word = "hello";
//     int size = word.length();

//     for (int i = 0; i < size; i++)
//     {
//         word[i] = toupper(word[i]);
//     }

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << word[i] << std::endl;
//     }


//     return 0;
// }




























// int main()
// {
//     std::string s;
    
//     std::cout << "Enter a string: ";
//     std::getline(std::cin, s);

//     std::cout << "Your entered: " << s << std::endl;

//     s.push_back('X');

//     std::cout << "After push back: " << s << std::endl;


//     while (s.size() != 0)
//     {
//         s.pop_back();

//         std::cout << "After pop back: " << s << std::endl;
//     }

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main()
// {

//     // Upper part
//     for (int i = 1; i <= 4; i++)
//     {
//         // spaces
//         for (int j = 1; j <= 4 - i; j++)
//         {
//             cout << "  ";
//         }

//         // stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*   ";
//         }

//         cout << endl;
//     }

//     // Lower part
//     for (int i = 4 - 1; i >= 1; i--)
//     {
//         // spaces
//         for (int j = 1; j <= 4 - i; j++)
//         {
//             cout << "  ";
//         }

//         // stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*   ";
//         }

//         cout << endl;
//     }

//     return 0;
// }







// int main()
// {

//     // Upper part
//     for (int i = 1; i <= 4; i++)
//     {
//         // spaces
//         for (int j = 1; j <= 4 - i; j++)
//         {
//             cout << "  ";
//         }

//         // stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*   ";
//         }

//         cout << endl;
//     }

//     // Lower part
//     for (int i = 4 - 1; i >= 1; i--)
//     {
//         // spaces
//         for (int j = 1; j <= 4 - i; j++)
//         {
//             cout << "  ";
//         }

//         // stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*   ";
//         }

//         cout << endl;
//     }

//     return 0;
// }