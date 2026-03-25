#include <iostream>
#include <string>
#include <iomanip>

class Math {
    public:
        int add(int a, int b) {
            return a + b;
        }

        int add(int a, int b, int c) {
            return a + b + c;
        }

        float add(float a, float b) {
            return a + b;
        }
};

int main()
{
    Math obj;

    std::cout << obj.add(5, 3) << std::endl;

    std::cout << obj.add(5, 3, 2) << std::endl;
    
    std::cout << obj.add(5.10f, 3.20f) << std::endl;

    return 0;
}
