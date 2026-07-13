// #include <cctype>
// #include <cmath>
// #include <algorithm>






#include <iostream>
#include <string>

int main()
{
    int n;

    std::cout << std::endl << "Enter number of departments: ";
    std::cin >> n;

    // Allocating number of departments
    std::string cub_dept[n];

    // Enter name of departments
    for (int i = 0; i < n; i++)
    {
        std::cin >> cub_dept[i];
    }

    std::cout << std::endl;

    // Printing name of departments
    for (int i = 0; i < n; i++)
    {
        std::cout << cub_dept[i] << std::endl;
    }

    return 0;
}









// int main()
// {
//     int n;
//     std::cin >> n;

//     std::string word[n];


//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> word[i];

//     }
 
//     std::cout << std::endl;

//     for (int i = 0; i < n; i++)
//     {
//         std::cout << word[i];
//         std::cout << std::endl;
//     }

//     return 0;
// }

















// int main() {
//     char upper = 'A';
//     char lower = 'g';

//     std::cout << "before (upper): " << upper << std::endl << "before (lower): " << lower;

//     // Convert Upper to Lower
//     upper = std::tolower(upper); // 'a'

    
//     // Convert Lower to Upper
//     lower = std::toupper(lower); // 'G'

//     std::cout << std::endl;

//     std::cout << "after (upper): " << upper << std::endl << "after (lower): " << lower;

// }








