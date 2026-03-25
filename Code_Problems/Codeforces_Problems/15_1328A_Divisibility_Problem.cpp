#include <iostream>
int main()
{
    int t;
    std::cin >> t;

    int a, b;
    int div;
    int move_count = 0;
    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b;
        while (div != 0)
        {
            div = a % b;
            a++;
            move_count++;
        }
        std::cout << move_count;
    }
    
    return 0;
}