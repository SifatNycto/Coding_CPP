#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:

        virtual void dog() {
            cout << "I'm Dog function" << endl;
        }
};


class Dog : public Animal {
    public:

    void he() {
        cout << "dfd" << endl;
    }
};

int main()
{
    Dog d;
    d.dog();
    d.he();

    return 0;
}