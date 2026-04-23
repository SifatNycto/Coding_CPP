#include <iostream>
#include <string>

/* Abstraction: Hiding all unnecessary details & 
showing only the important parts
*/

// Abstract Class
/*
1. Abstract classes are used to provide a base class from other
classes can be derived.

2. They can't be instantiated and are meant to be inherited.

3. Abstract classes are typically used to 
define an interface for derived classed.
*/
// by pure functions the associate class become auto abstract class


// Abstract Class
class Shape {
    virtual void draw() = 0;    // Pure Virtual Function
};

class Circle : public Shape {
    public:
        void draw() {
            std::cout << "\nDrawing a Circle.";
        }
};

int main()
{
    Circle c;
    c.draw();

    return 0;
} 