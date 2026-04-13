#include <iostream>
#include <algorithm>
#include <string>
// using namespace std;

int main()
{
    int num;
    std::cin >> num;

    int revNum = 0;
    

    while (num != 0) {
        
        revNum = revNum * 10 + num % 10;
        num /= 10;

    }
    

    std::cout << revNum;
    return 0;
}