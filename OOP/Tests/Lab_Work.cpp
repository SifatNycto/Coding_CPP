#include <iostream>
#include <string>

// code 1 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// void sum(double a, double b);
// void sub(double a, double b);
// double mul(double a, double b);
// void div(double a, double b);

// int main()
// {
//     double n1, n2;

//     std::cout << "Enter n1: ";
//     std::cin >> n1;
    
//     std::cout << "Enter n2: ";
//     std::cin >> n2;
    
//     sum(n1, n2);
//     sub(n1, n2);

//     std::cout << std::endl << "\nMultiplication -->";
//     std::cout << "\n=> n1 x n2 = " << n1 << " x " << n2 << " = " << mul(n1, n2);

//     div(n1, n2);
    
//     return 0;
// }

// void sum(double a, double b) {
//     std::cout << std::endl << "Summation -->";
//     std::cout << "\n=> n1 + n2 = " << a << " + " << b << " = " << a+b;
// }

// void sub(double a, double b) {
//     std::cout << std::endl << "\nSubtraction -->";
//     std::cout << "\n=> n1 - n2 = " << a << " - " << b << " = " << a-b;
// }

// double mul(double a, double b) {
//     return a * b;
// }

// void div(double a, double b) {
//     if ((a == 0 && b == 0) || b == 0) {
//         std::cout << std::endl << "\nDivision -->";
//         std::cout << "\n=> n1 / n2 = " << a << " / " << b << " = " << "Undefined";
//     }
//     else {
//         std::cout << std::endl << "\nDivision -->";
//         std::cout << "\n=> n1 / n2 = " << a << " / " << b << " = " << a / b;
//     }
// }



// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// code 2 >>>>>>>>>>>>>>>>>>>>>>>>>>

// void create_arr(double arr[], int n);
// double sum_arr(double arr[], int n);

// int main()
// {
//     int n;
//     std::cout << "Enter number of elements: ";
//     std::cin >> n;

//     double arr[n];

//     create_arr(arr, n);

//     std::cout << "The summation of all " << n << " numbers is: " << sum_arr(arr, n);
 
//     return 0;
// }

// void create_arr(double arr[], int n) {
//     std::cout << "Enter numbers continuously.....\n";
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "Number #" << i+1 << " -> ";
//         std::cin >> arr[i];
//     }
// }

// double sum_arr(double arr[], int n) {
//     double s = 0;
//     for (int i = 0; i < n; i++)
//         s += arr[i];
//     return s;
// }




// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Code 3 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>












// bool palindrome(std::string something);

// int main()
// {
//     std::string something;
//     std::cout << "Enter something: ";
//     std::cin >> something;

//     std::cout << std::endl;

//     (palindrome(something))
//         ? std::cout << "The String '" << something << "' is Palindrome."
//             : std::cout << "The String '" << something << "' isn't Palindrome.";


//     return 0;
// }

// bool palindrome(std::string something) {
//     int left = 0;
//     int right = something.length() - 1;

//     while (left < right)
//     {
//         if (something[left] != something[right])
//             return false;
        
//         left++;
//         right--;
//     }
//     return true;
// }









// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Code 4 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>








// void create_arr(int n, struct Student s[]);
// void show_arr(int n, struct Student s[]);

// struct Student {
//     std::string name;
//     int id;
//     double physics;
//     double math;
//     double chemistry;
// };

// int main()
// {
//     int n;
//     std::cout << "Number of students: ";
//     std::cin >> n;

//     // Student s[n];    // Here, variable length array is not suitable
//     Student *s = new Student[n];    // So, I used Dynamic Array here for passing argument

//     create_arr(n, s);
//     show_arr(n, s);
    
//     delete[] s; // For free up the memory
//     return 0;
// }

// void create_arr(int n, struct Student s[]) {
//     std::cout << "Input Students Info --> ";

//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "\nStudent #" << i+1 << ": ";
//         std::cout << "Name: ";
//         std::getline(std::cin >> std::ws, s[i].name);

//         std::cout << "ID: ";
//         std::cin >> s[i].id;

//         std::cout << "Marks in Physics: ";
//         std::cin >> s[i].physics;

//         std::cout << "Marks in Math: ";
//         std::cin >> s[i].math;

//         std::cout << "Marks in Chemistry: ";
//         std::cin >> s[i].chemistry;
//     }
// }

// void show_arr(int n, struct Student s[]) {
//     std::cout << "\n\nDisplaying Student Info --> ";

//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "\nStudent #" << i+1 << ": ";
//         std::cout << "\nName: " << s[i].name;
//         std::cout << "\nID: " << s[i].id;
//         std::cout << "\n" <<s[i].name << " got total " << s[i].physics + s[i].math + s[i].chemistry << " marks.";
//     }
// }






// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Code 5 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#include <iostream>
#include <string>

void displayBook(struct Book_info book);

struct Book_info {
    char title[50];
    char author[50];
    float price;
} book;

int main()
{
    std::cout << "Enter Title of the Book: ";
    std::cin >> book.title;

    std::cout << "Enter Author name of the Book: ";
    std::cin >> book.author;

    std::cout << "Enter price of the Book: ";
    std::cin >> book.price;

    displayBook(book);

    return 0;
}

void displayBook(struct Book_info book) {
    std::cout << std::endl << "Book title: " << book.title;
    std::cout << std::endl << "Author name: Mr. " << book.author;
    std::cout << std::endl << "Price: " << book.price << " Tk";
}