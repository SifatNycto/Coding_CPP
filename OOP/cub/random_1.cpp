#include <iostream>
#include <string>

// class Box {
//     private:
//         float height;
//         float width;
//         float depth;

//     public:
//         void setValue(float h, float w, float d) {
//             height = h;
//             width = w;
//             depth = d;
//         }
//         float calculateVolume() {
//             return height * width * depth;
//         }

//         void display() {
//             std::cout << "Height: " << height << std::endl;
//             std::cout << "Width: " << width << std::endl;
//             std::cout << "Depth: " << depth << std::endl;
//             std::cout << "Volume: " << calculateVolume() << std::endl;
//         }
// };

// int main()
// {
//     Box myBox;

//     myBox.setValue(5.0, 4.0, 3.0);

//     myBox.display();

//     return 0;
// }



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

class Box {
    private:
        float height;
        float width;
        float depth;

    public:
        void setvalues(float h, float w, float d) {
            height = h;
            width = w;
            depth = d;
        }

        void display() {
            std::cout << height << std::endl;
            std::cout << width << std::endl;
            std::cout << depth << std::endl;
        }

        float calculateVolume() {
            return height * width * depth;
        }
};

int main()
{
    Box mybox;
    mybox.setvalues(5.0, 4.0, 3.0);

    mybox.display();

    std::cout << mybox.calculateVolume() << std::endl;

    return 0;
}