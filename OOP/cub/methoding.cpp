#include <iostream>
#include <string>

class Car {
    private:
        float height;
        float width;
        float depth;
        float price;
        std::string admin_name;

    public:
        std::string car_name;
        std::string brand_name;

        void setp(float price) {
            this -> price = price;
        }
        float getp() {
            return price;
        }
        
        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        void setn(std::string admin_name) {
            this -> admin_name = admin_name;
        }
        std::string getn() {
            return admin_name;
        }

        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        float volume(float height, float width, float depth) {
            return height * width * depth;
        }
        
};

int main()
{
    Car car_1;

    car_1.setp(25000.75);
    car_1.setn("Someone");
    std::cout << "Original price: " << car_1.getp() << std::endl;
    std::cout << "Admin name: " << car_1.getn() << std::endl;

    return 0;
}






