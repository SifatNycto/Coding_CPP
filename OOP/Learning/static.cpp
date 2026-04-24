#include <iostream>
#include <string>

// Static Keyword

void fun() {
    // int x = 0; // for initializing everytime
    
    static int x = 0;
    std::cout << x;
    x++;
}

int main()
{
    fun();

    return 0;
}
// ............