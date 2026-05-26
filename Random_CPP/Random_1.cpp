// #include <iostream>
// #include <string>

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






#include <iostream>
using namespace std;

int main()
{

    // Upper part
    for (int i = 1; i <= 4; i++)
    {
        // spaces
        for (int j = 1; j <= 4 - i; j++)
        {
            cout << "  ";
        }

        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*   ";
        }

        cout << endl;
    }

    // Lower part
    for (int i = 4 - 1; i >= 1; i--)
    {
        // spaces
        for (int j = 1; j <= 4 - i; j++)
        {
            cout << "  ";
        }

        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}