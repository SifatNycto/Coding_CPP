#include <iostream>
#include <string>

class print {
    public:

        void hello() {
            std::cout << "hello world";
        }

        void hi() {
            std::cout << "hi there";
        }
};

int main()
{
    print h;

    h.hello();
    std::cout << std::endl;
    h.hi();

    return 0;
}




// struct hello{
//     int a = 3;
//     std::string s = "sdfa";

// };

// int main()
// {
//     hello h;

//     std::cout << h.a;
// }
