#include <iostream>
#include <string>

class Employee {
    private:
        std::string Name;
        int ID;
        std::string Hobbies[5];

    public:
        void setEmployee(std::string n, int i, std::string h[])
        {
            setName(n);
            setId(i);
            setHobbies(h);
        }

        void printInfo()
        {
            std::cout << "Name: " << getName() << std::endl;
            std::cout << "ID: " << getId() << std::endl;
        }

        void printHobbies()
        {
            std::cout << "Hobbies: ";
            std::string *h = getHobbies();
            
            for (int i = 0; i < 5; i++)
                std::cout << h[i] << " ";
            
            std::cout << std::endl;
        }

        void setName(std::string n) {          
            Name = n;                          
        }                                      
        std::string getName() {                
            return Name;                       
        }                                      

        void setId(int i) {                    
            ID = i;                            
        }                                      
        int getId() {                          
            return ID;                         
        }                                      

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

    std::cout << std::endl;
    
    std::cout << "Employee #1 " << std::endl;
    employee_1.printInfo();
    employee_1.printHobbies();

    std::cout << std::endl;

    std::cout << "Employee #2 " << std::endl;
    employee_2.printInfo();
    employee_2.printHobbies();

    return 0;
}












// >>>>>>>>>>>>>>>>>>>>>>>>>..===========>>>>>>>>>>


// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {

//     private:
//         string Name;
//         int ID;
//         string Hobbies[5];

//     public:
//         void setEmployee(string n, int i, string h[]) {
//             Name = n;
//             ID = i;
            
//             for (int i = 0; i < 5; i++) {
//                 Hobbies[i] = h[i];
//             }
//         }

//         void printInfo() {
//             cout << "Name: " << getName() << endl;
//             cout << "ID: " << getId() << endl;
//         }

//         void printHobbies()  {
//             cout << "Hobbies: ";
//             for (int i = 0; i < 5; i++) {
//                 cout << getHobbies(i) << " ";
//             }
                
//             cout << endl;
//         }

//         void setName(string n) {          
//             Name = n;                          
//         }                                      
//         string getName() {                
//             return Name;                       
//         }                                      

//         void setId(int i) {                    
//             ID = i;                            
//         }                                      
//         int getId() {                          
//             return ID;                         
//         }                                      

//         void setHobbies(string h[]) {     
//             for (int i = 0; i < 5; i++)        
//                 Hobbies[i] = h[i];             
//         }                                      
//         string getHobbies(int i) {            
//             return Hobbies[i];                    
//         }                                      
// };

// int main() {
//     Employee employee1, employee2;

//     string H1[5] = {"Reels", "Music", "Gardening", "Web Series", "Crafting"};
//     string H2[5] = {"Web Series", "Traveling", "Music", "Reading", "Singing"};

//     employee1.setEmployee("Masnoon Akter", 25204043, H1);
//     employee2.setEmployee("Jannatul Taskin", 25204052, H2);
    
//     std::cout << "Info of Employee 1 => " << std::endl;
//     employee1.printInfo();
//     employee1.printHobbies();

//     cout << endl;

//     cout << "Info of Employee 2 => " << endl;
//     employee2.printInfo();
//     employee2.printHobbies();

//     return 0;
// }















