#include <iostream>
#include <string>

using namespace std;

void Dog();
void Cat();

int main()
{
    Dog();
    Cat();

    return 0;
}

void Dog() {
    cout << "I'm Dog function" << endl;
}

void Cat() {
    cout << "I'm Cat function" << endl;
}
