#include <iostream>
#include <string>

class Shape {
    protected:
        std::string name;
    public:
        Shape(std::string n) : name(n) {}

        virtual void draw() = 0;

        void showName() {
            std::cout << "Shape: " << name << std::endl;
        }
};

class Circle : public Shape {
    public:
        Circle() : Shape("Circle") {}

        void draw() {
            std::cout << "Drawing Circle" << std::endl;
        }
};

int main()
{
    Circle c;
    Shape& s = c;

    s.showName();
    s.draw();

    return 0;
}