#include <iostream>
#include <cstdlib>
#include <ctime>


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Random number generator       || #include <ctime> header
//pseudo-number = not truly random (but close)
// int main()
// {
//     srand(time(NULL));

//     int num1 = (rand() % 6) + 1;
//     int num2 = (rand() % 6) + 1;
//     int num3 = (rand() % 6) + 1;

//     std::cout << num1 << '\n' << num2 << '\n' << num3;
//     std::cout << std::endl;
//     return 0;
// }


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// int main()
// {
//     srand(time(NULL));

//     int num = (rand() % 4) + 1;
//     std::cout << std::endl;
//     std::cout << "Your Choise will be: ";

//     if (num == 1) std::cout << "Father";
//     if (num == 2) std::cout << "Mother";
//     if (num == 3) std::cout << "Sister";
//     if (num == 4) std::cout << "Brother";

//     std::cout << std::endl;
//     return 0;
// }



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// int main()
// {
//     time_t now;
//     time(&now);

//     std::cout << std::endl << "Current time (seconds since 1970): " << now << std::endl << std::endl;
//     std::cout << "Human readable time: " << ctime(&now);
//     return 0;
// }



//>>>>>>>>>>>>>>>>>>
// int main()
// {
//     time_t start = time(0);

//     // some code here...
//     for (int i = 0; i < 1000000; ++i);

//     time_t end = time(0);

//     std::cout << "Code took " << end - start << " seconds." << std::endl;


    
//     return 0;
// }




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//RANDOM EVENT GENERATOR >>>>>>>>>>>>>>>>>>>>>>>

int main()
{
    srand(time(NULL));

    int randNum = (rand() % 4) + 1;
    std::cout << std::endl;
    std::cout << ">>> LUCKY DRAW <<<";
    
    std::cout << std::endl << std::endl;

    switch (randNum)
    {
        case 1: std::cout << "You Win $1000";
                break;

        case 2: std::cout << "You Win iPhone 16 Pro Max";
                break;

        case 3: std::cout << "You Win A Cup Of Coffee";
                break;

        case 4: std::cout << "You Win A Bottle Of Whiskey";
                break;
    }

    return 0;
}