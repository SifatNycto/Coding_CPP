#include <iostream>

// struct Node {
//     int data;
//     Node *next;
// };

// int main(void)
// {
//     Node *head = new Node;
    
//     head->data = 20;
//     head->next = nullptr;

//     std::cout << "Data: " << head->data << std::endl;
// }






// int main(void)
// {
//     int x = 10;
//     int *p = &x;
//     int **q = &p;
//     **q = 12;

//     std::cout << std::endl << "x = " << x;
//     std::cout << std::endl << "&x = " << &x;
//     std::cout << std::endl << "p = " << p;
//     std::cout << std::endl << "*p = " << *p;
//     std::cout << std::endl << "&p = " << &p;
//     std::cout << std::endl << "q = " << q;
//     std::cout << std::endl << "*q = " << *q;
//     std::cout << std::endl << "**q = " << **q;

// }







// int main(void)
// {
//     int a = 60;
//     int *b;
//     b = &a;
//     int **c;
//     c = &b;

//     std::cout << std::endl << "value of a: " << a;
//     std::cout << std::endl << "memory address of a: " << &a;
//     std::cout << std::endl << "value of pointer b: " << *b;
//     std::cout << std::endl << "content of pointer b: " << b;
//     std::cout << std::endl << "memory address of b: " << &b;
//     std::cout << std::endl << "value of pointer c: " << **c;
//     std::cout << std::endl << "content of pointer c: " << c;
//     std::cout << std::endl << "memory address of c: " << &c;
// }



int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *p;
    p = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        std::cout << *p << " ";
        p++;
    }
}