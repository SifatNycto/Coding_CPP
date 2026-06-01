#include <iostream>

// int main()
// {
    
//     int n1, n2;
//     try
//     {
        
//         std::cin >> n1;
//         std::cin >> n2;

//         if (n2==0){
//         throw 1;
//         }

//         double result = (double) n1 / n2;
//         std::cout << result;
//     }

//     catch(int x)
//     {
//         std::cout << "\nYou can't divide number by 0" << std::endl;
//     }
// }


// in code blocks nan
// in vs code inf










class customer {
    std::string name;
    int balance, acc_no;
    
    public:
        customer(std::string name, int balance, int acc_no) {
            this->name = name;
            this->balance = balance;
            this->acc_no = acc_no;
        }

        //deposit
        void deposit(int amount) {
            if(amount > 0) {
                balance += amount;
                std::cout << amount << "Tk is credited successfully" << std::endl;
            }
            else {
                throw "Amount should be greater than 0";
            }
        }

        void withdraw(int amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                std::cout << amount << "Tk is debited successfully" << std::endl;
            }
            else if(amount < 0) {
                throw "Amount should be greater than 0";
            }
            else {
                throw "Your balance is Low";
            }
        }
};

int main()
{
    customer c1("Rana", 5000, 10);

    try {
        c1.deposit(100);
        c1.withdraw(6000);
    }
    catch(const char *e) {
        std::cout << "Exception Occured: " << e << std::endl;
    }

    return 0;
}