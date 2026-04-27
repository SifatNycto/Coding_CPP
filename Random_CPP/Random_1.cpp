#include <iostream>
#include <string>

int main()
{
    std::string s;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    std::cout << "Your entered: " << s << std::endl;

    s.push_back('X');

    std::cout << "After push back: " << s << std::endl;


    while (s.size() != 0)
    {
        s.pop_back();

        std::cout << "After pop back: " << s << std::endl;
    }

    return 0;
}