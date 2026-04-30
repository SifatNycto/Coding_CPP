#include <iostream>
#include <string>
#include <vector>

// int main()
// {
//     int t;
//     std::cin >> t;

//     int n[t];
//     std::string s;
//     // std::vector<std::string> s;

//     for (int i = 0; i < t; i++)
//     {
//         std::cin >> n[i];
//         std::cin >> s[i];
//     }

//     // ( left
//     // ) right

    

//     for (int i = 0; i < t; i++)
//     {
//         // char left = '(';
//         // char right = ')';

//         std::string left = "(";
//         std::string right = ")";

//         int size = s.size();
//         //int sType = size % 2;
//         int Type = n[i] % 2;

//         for(int j = 0; j < size; j++)
//         {
//             if(Type == 0)
//             {
//                 if(s[j] == left[0])
//                 {
//                     if(s[j+1] == right[0])
//                     {
//                         std::cout << "YES" << std::endl;
//                     }
//                     std::cout << "NO" << std::endl;
//                 }

//                 else if(s[j] == right[0])
//                 {
//                     if(s[j+1] == left[0])
//                     {
//                         std::cout << "YES" << std::endl;
//                     }
//                     std::cout << "NO" << std::endl;
//                 }
//             }
//         }

//     }

//     return 0;
// }



int main()
{
    int t;
    std::cin >> t;

    int n[t];

    //std::string s;
    std::vector<std::string> s(t);


    for(int i = 0; i < t; i++)
    {
        std::cin >> n[i];
        std::cin >> s[i];

    }

    for(int i = 0; i < t; i++)
    {
        int open = 0;
        int close = 0;
        for(int j = 0; j < s.size(); j++)
        {
            for(int k = 0; k < s[j].size(); k++)
            {
                if(s[i][j] == '(') open++;
                else close++;
                
            }
            
            if(open == close) std::cout << "YES" << std::endl;
            else std::cout << "NO" << std::endl;
        }
    }
}