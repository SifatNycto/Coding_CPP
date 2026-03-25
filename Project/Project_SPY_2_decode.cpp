#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

namespace encode{
    std::string alpha, morphed_arr, key, distinct_key;
}
namespace decode{
    std::string alpha, morphed_arr, key, distinct_key;
}

int main(void)
{
    // ENCODING >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 

    encode::alpha = "";
    encode::morphed_arr = "";
    encode::key;
    encode::distinct_key = "";

    for (char c = 65; c <= 90; c++)
        encode::alpha.push_back(c);
    

    std::cout << std::endl << "Enter secret key: ";
    std::cin >> encode::key;

    for (char c : encode::key)
        if (encode::distinct_key.find(c) == std::string::npos)
            encode::distinct_key.push_back(c);

    for (char &c : encode::distinct_key)
        c = toupper(c);

    for (char c : encode::distinct_key)
        encode::morphed_arr.push_back(c);
    
    for (char c : encode::alpha)
    {
        if (encode::morphed_arr.find(c) == std::string::npos)
        {
            encode::morphed_arr.push_back(c);
        }
    }

    reverse(encode::alpha.begin(), encode::alpha.end());

    std::cout << std::endl;
    for (char c : encode::alpha)
        std::cout << c << " ";

    std::cout << std::endl;
    for (char c : encode::morphed_arr)
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
        index = encode::alpha.find(plain_text[i]);
        converted_text.push_back(encode::morphed_arr[index]);
    }

    std::cout << std::endl << "The encoded text is: " << converted_text;

    // ENCODING >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    // =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=

    // DECODING >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

}
