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






// // intput A-B+B+A-A+A+B


// int main()
// {
//     std::string word;
//     std::cin >> word;

//     int plus = 0;
//     int minus = 0;

//     for (int i = 0; i < word.size(); i++)
//     {
//         if (word[i] == '+') plus++;
//         if (word[i] == '-') minus++;
//     }

//     std::cout << std::endl << "number of a: " << plus;

//     std::cout << std::endl << "number of b: " << minus;
//     return 0;
// }








// intput A-B+B+A-A+A+B

// int main()
// {
//     std::string word;
//     std::cin >> word;

//     int op = 0;

//     for (int i = 0; i < word.size(); i++)
//     {
//         if (word[i] == '+' || word[i] == '-') op++;
//     }

//     std::cout << std::endl << "number of op: " << op;
//     return 0;
// }











// ABABAAABBAAZBBZ 

// int main()
// {
//     std::string word;

//     std::cin >> word;

//     int s = word.size();

    
    

//     for (int i = 0; i < s; i++)
//     {
//         for (int j = 65; j < 91; j++)
//         {
//             int a = 0;
            
//             if (word[tolower(i)] == j) a++;

//             std::cout << a;

//             // else b++;
//         }


//     }

//     std::cout << "a: " << std::endl << "b: ";

//     return 0;
// }







// A+B+A-A+B-A

// int main()
// {
//     std::string word;
//     std::cin >> word;

//     int plus = 0;
//     int minus = 0;

//     for (int i = 0; i < word.size(); i++)
//     {
//         if (word[i] == '+') plus++;
//         if (word[i] == '-') minus++;

        
//     }

//     std::cout << "plus: " << plus << std::endl << "minus: " << minus;


    
//     return 0;

// }


// abcdfffhjszdvnmj
/*
    for (int i = 0; i < size; i++)
    {

    }

*/














/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <iostream>
// #include <string>
// void ans();
// int main()
// {   int i, j, k, l;
//     std::cout <<  "Hey User"  << std:: endl<< std:: endl;
    
//     std::cout <<  "  IF YOU WANT " << std:: endl ;
//     std::cout <<  "  Ans so input 1 or ask so input 2" << std:: endl;     
//     std::cout <<  std:: endl;
//     std::cout <<  "Selet one :"; 
//     std::cin  >>  i;
//     std::cout <<  std:: endl;
    
//     if( i == 1) {
//         std:: cout << "Your input is 1"<<std:: endl;
//        ans();
//     }
    
//     else if (i==2){
//         std:: cout << "Your input is 2"<<std:: endl;
//     }
    
//     else 
//         std:: cout << "Your input is invalid"<<std:: endl;
    

//     return 0;
// }


// void ans(){
//     int s;
//     std::string t;
//     std::string Q[5]={"how are you?", 
//     "what is your depertment?",
//     "What is your student id?",
//     "What is your name?",
//     "what class do you read in?"};
    
//     for(int p=0;p<=5;p++){
//        std::cout <<  Q[p]<<std:: endl;
//        std::cout<<std::endl;
       
//        std::cin.ignore ();
//        getline(std::cin, t );
       
//        std::cout<<std::endl;
//     }
    
// }
