#include <iostream>
#include <string>

// Base class (Abstraction + Encapsulation)
class Shape {
    protected:
        // Encapsulation (data hidden inside class)    
        std::string name;

    public:
        // Constructor
        Shape(std::string n) : name(n) {}

        // Pure virtual function (Abstraction)
        virtual void draw() = 0;

        // Normal function || method
        void showName() {
            std::cout << "Shape: " << name << std::endl;
        }
};

// Derived class (Inheritance)
class Circle : public Shape {
    public:
        Circle() : Shape("Circle") {}

        // Overriding (Polymorphism)
        void draw() {
            std::cout << "Drawing Circle" << std::endl;
        }
};

int main()
{
    Circle c;

    // Reference (used for polymorphism)
    Shape& s = c;

    // Encapsulation access
    s.showName();

    // Runtime polymorphism
    s.draw();

    return 0;
}