#include <iostream>

/*
    ### Luhn Algorithm
    A simple checksum formula used to validate various identification numbers, 
    most notably credit card numbers.

    # Algorithm >_
    1. Double every second digit from right for left
        If doubled number is 2 digits, split them
    2. Add all single digits from step 1
    3. Add all odd numbered digits from right to left
    4. Sum results from steps 2 & 3
    5. If step 4 is divisible by 10, # is valid

    Steps >_

    6011000990139424
    6011    0009    9013    9424
    6 1     0 0     9 1     9 2
    1 2 2   0 0     1 8 2   1 8 4       now sum of lal digits from here =>
    1+2+2+0+0+1+8+2+1+8+4 = 29

    6011    0009    9013    9424
     0 1     0 9     0 3     4 4      add all odd numbered digits from right to left
    0+1+0+9+0+3+4+4 = 21

    29 + 21 = 50

    50 % 10 = 0    50 is divisible by 10 # is valid
    
*/


int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout<< "\nEnter credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    
    if(result % 10 == 0)
        std::cout << "\nis valid";
    else
        std::cout << "\nnot valid";


    return 0;
}

int getDigit(const int number) 
{
    // 18    18 % 10 = 8  +  1 % 10 = 1
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';     // '0' or 48 for the ascii value of 0
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);     // '0' or 48 for the ascii value of 0
    }

    return sum;
}