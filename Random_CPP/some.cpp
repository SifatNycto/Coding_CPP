#include <iostream>
#include <algorithm>
#include <string>
// using namespace std;

int main()
{
    std::string str;
    std::cin >> str;

    std::string org = str;

    std::reverse(str.begin(), str.end());
    std::string revString;
    revString.reserve(str.size());
    revString = str;
    
    (org == revString)
        ? std::cout << "palindrome"
            : std::cout << "not palindrome";

    
    return 0;
}