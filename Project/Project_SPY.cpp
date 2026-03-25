#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main(void)
{
    std::string alpha = "";
    std::string morphed_arr = "";
    std::string key, distinct_key = "";

    for (char c = 65; c <= 90; c++)
        alpha.push_back(c);
    

    std::cout << std::endl << "Enter secret key: ";
    std::cin >> key;

    for (char c : key)
        if (distinct_key.find(c) == std::string::npos)
            distinct_key.push_back(c);

    for (char &c : distinct_key)
        c = toupper(c);

    for (char c : distinct_key)
        morphed_arr.push_back(c);
    
    for (char c : alpha)
    {
        if (morphed_arr.find(c) == std::string::npos)
        {
            morphed_arr.push_back(c);
        }
    }

    reverse(alpha.begin(), alpha.end());

    std::cout << std::endl;
    for (char c : alpha)
        std::cout << c << " ";
    
    std::cout << std::endl;
    for (char c : morphed_arr)
        std::cout << c << " ";

    std::string plain_text;
    std::cout << std::endl << "Enter plain text: ";
    std::cin >> plain_text;

    for (char &c : plain_text)
        c = toupper(c);

    std::string converted_text = "";
    int index;

    for (int i = 0; i < plain_text.size(); i++)
    {
        for (int j = 0; j < alpha.size(); j++)
        {
            if (plain_text[i] == alpha[j])
            {
                index = j;
                break;
            }
        }
        
        for (int k = 0; k < morphed_arr.size(); k++)
            if (k == index)
            {
                converted_text.push_back(morphed_arr[k]);
                break;
            }
    }

    std::cout << std::endl << "The encoded text is: " << converted_text;
}