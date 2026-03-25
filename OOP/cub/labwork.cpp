#include <iostream>
#include <string>

class Employee {
    private:
        std::string Name;
        int ID;
        std::string Hobbies[5];

    public:
        // Setting up Informations for Employee's >>>>>
        void setEmployee(std::string n, int i, std::string h[]) {
            // Name = n;
            // ID = i;
            // for (int i = 0; i < 5; i++)
            // {
            //     Hobbies[i] = h[i];
            // }
            setName(n);
            setId(i);
            setHobbies(h);
        }

        // Method for printing name and id =====>
        void printInfo() {
            std::cout << "Name: " << getName() << std::endl;
            std::cout << "ID: " << getId() << std::endl;
        }

        // Method for printing hobbies =====>
        void printHobbies() {
            std::cout << "Hobbies: ";
            std::string *h = getHobbies();
            
            for (int i = 0; i < 5; i++)
                std::cout << h[i] << " ";
            
            std::cout << std::endl;
        }

        // Setter & Getter for Name >>>>>
        void setName(std::string n) {
            Name = n;
        }
        std::string getName() {
            return Name;
        }

        // Setter & Getter for ID >>>>>
        void setId(int i) {
            ID = i;
        }
        int getId() {
            return ID;
        }

        // Setter & Getter for Hobbies >>>>>
        void setHobbies(std::string h[]) {
            for (int i = 0; i < 5; i++)
                Hobbies[i] = h[i];
        }
        std::string* getHobbies() {
            return Hobbies;
        }
};

int main()
{
    Employee employee_1, employee_2;

    std::string hobby_1[5] = {"Gaming", "Music", "Coding", "Gardening", "Singing"};
    std::string hobby_2[5] = {"Coding", "Gaming", "Music", "Reading", "Singing"};

    employee_1.setEmployee("Khaled", 4040, hobby_1);
    employee_2.setEmployee("Sifat", 4009, hobby_2);

    std::cout << "Info of Employee #1: " << std::endl;
    employee_1.printInfo();
    employee_1.printHobbies();

    std::cout << std::endl;

    std::cout << "Info of Employee #2: " << std::endl;
    employee_2.printInfo();
    employee_2.printHobbies();

    return 0;
}