#include <iostream>
#include <string>

// Special method invoked automatically at the time of object creation.
// It has the same name as the class it resides in.
// Contructor used for initialisation for the object



// class Box {
//     public:
//         float height;
//         float width;
//         float depth;
    
//         Box() {     // Default constructor || Non-parameterized
//             std::cout << "This is the constructor" << std::endl;
//             height = 5.0;
//             width = 4.0;
//             depth = 3.0;

//             std::cout << "Height: " << height << std::endl;
//             std::cout << "Width: " << width << std::endl;
//             std::cout << "Depth: " << depth << std::endl;
//         }

//         float calculateVolume() {
//             return height * width * depth;
//         }
// };

// int main()
// {
//     Box myBox;

//     std::cout << "Volume: " << myBox.calculateVolume() << std::endl;

//     return 0;
// }



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// class Box {
//     public:
//         float height;
//         float width;
//         float depth;
    
//         Box(float h, float w, float d) {     // Parameterized constructor
//             std::cout << "This is the constructor" << std::endl;
//             height = h;
//             width = w;
//             depth = d;

//             std::cout << "Height: " << height << std::endl;
//             std::cout << "Width: " << width << std::endl;
//             std::cout << "Depth: " << depth << std::endl;
//             std::cout << "Volume: " << calculateVolume() << std::endl;
//         }

//         float calculateVolume() {
//             return height * width * depth;
//         }
// };

// int main()
// {
//     Box myBox(5.0, 4.0, 3.0);
    
//     return 0;
// }


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// class Box {
//     private:
//         int pass;
//     public:
//         void setpass(int p) {
//             pass = p;
//         }

//         int getpass() {
//             return pass;
//         }
// };

// int main()
// {
//     int num = 1234;
//     Box mybox;

//     mybox.setpass(num);

//     std::cout << "The password is: " << mybox.getpass() << std::endl;

//     return 0;
// }

// >>>>>>>>>>>>>>>>>>>>

// void temp(int x, int y); // pass by reference
// int main()
// {
//     int x = 5;
//     int y = 8;
    

//     temp(x, y); // pass by value
    
//     // std::cout << "X: " << x << std::endl;
//     // std::cout << "Y: " << y << std::endl;

//     return 0;
// }

// void temp(int x, int y) {
//     int temp = x;
//     x = y;
//     y = temp;

//     std::cout << "X: " << x << std::endl;
//     std::cout << "Y: " << y << std::endl;
// }



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Multiple constructor 

// class Box {
//     public:
//         float height;
//         float width;
//         float depth;
    
//         Box() {
//             std::cout << "Default constructor" << std::endl;
//         }
//         Box(float h, float w, float d) {     // Parameterized constructor
//             std::cout << "Parameterized constructor" << std::endl;
//             height = h;
//             width = w;
//             depth = d;

//             // std::cout << "Height: " << height << std::endl;
//             // std::cout << "Width: " << width << std::endl;
//             // std::cout << "Depth: " << depth << std::endl;
//             std::cout << "Volume: " << calculateVolume() << std::endl;
//         }

//         float calculateVolume() {
//             return height * width * depth;
//         }
// };

// int main()
// {
//     Box myBox(5.0, 4.0, 3.0);
    
//     return 0;
// }




// Parameterized Constructor >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// class Box {
//     public:
//         float height;
//         float width;
//         float depth;

//         Box(float h, float w, float d) {
//             std::cout << "This is construction with parameter" << std::endl;
//             height = h;
//             width = w;
//             depth = d;

//             std::cout << "Height: " << height << std::endl;
//             std::cout << "Width: " << width << std::endl;
//             std::cout << "Depth: " << depth << std::endl;
//         }

//         float calculateVolume() {
//             return height * width * depth;
//         }
// };

// int main()
// {
//     Box mybox(5.0, 4.0, 3.0);

//     std::cout << "Volume: " << mybox.calculateVolume() << std::endl;

//     return 0;
// }


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.

// Constructor Overloading >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>...
// class Box {
//     public:
//         float height;
//         float width;
//         float depth;

//         // Box() {
//         //     std::cout << "This is the default constructor" << std::endl;
//         // }

//         Box(float height, float width, float depth) {
//             this->height = height;
//             this->width = width;
//             this->depth = depth;
//         }

//         Box(Box &ori_obj) {
//             std::cout << "This is the parameterized constructor" << std::endl << std::endl;
//             this-> height = ori_obj.height;
//             this-> width = ori_obj.width;
//             this-> depth = ori_obj.depth;
            
//             std::cout << "Height: " << height << std::endl;
//             std::cout << "Width: " << width << std::endl;
//             std::cout << "Depth: " << depth << std::endl;
//         }

//         float calculateVolume() {
//             return height * width * depth;
//         }
// };

// int main()
// {
//     Box mybox(5.0, 4.0, 3.0);
//     Box mybox_2(mybox);

//     std::cout << "Volume: " << mybox_2.calculateVolume() << std::endl;

//     return 0;
// }









// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
class Box {
    
    public:
        float height;
        float width;
        float depth;

    

        Box(float height, float width, float depth) {
            std::cout << "Parameterized constructor" << std::endl;
            std::cout << "constructor called " << std::endl;

            this->height = height;
            this->width = width;
            this->depth = depth;

            std::cout << "Height: " << height << std::endl;
            std::cout << "Width: " << width << std::endl;
            std::cout << "Depth: " << depth << std::endl;
        }

        Box(Box &obj) {
            std::cout << "Customized copy constructor" << std::endl;

            this->height = obj.height;
            this->width = obj.width;
            this->depth = obj.depth;

            std::cout << "Height: " << height << std::endl;
            std::cout << "Width: " << width << std::endl;
            std::cout << "Depth: " << depth << std::endl;
        }
        
        
        float calculateVolume() {
            return height * width * depth;
        }

        ~Box() {
            std::cout << "Default destructor called" << std::endl;
        }
};

int main()
{
    
    Box mybox(5.0, 78.0, 3.0);
    //Box mybox3(mybox);
    
    std::cout << "Volume: " << mybox.calculateVolume() << std::endl;

    std::cout << "main function" << std::endl;
    return 0;
}


