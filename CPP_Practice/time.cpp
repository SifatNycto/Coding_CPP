#include <iostream>

int main()
{
    int time_in_seconds, hours, minutes, seconds;

    std::cout << "Enter time is seconds: "; 
    std::cin >> time_in_seconds;

    hours = time_in_seconds / 3600;

    int remaining_seconds = time_in_seconds % 3600;

    minutes = remaining_seconds / 60;

    seconds = remaining_seconds % 60;

    std::cout << "Your " << time_in_seconds << " seconds is converted to: ";

    std::cout << std::endl;

    std::cout << hours << " hours, ";
    
    std::cout << minutes << " minutes, ";

    std::cout << seconds <<" seconds.";

    return 0;
}