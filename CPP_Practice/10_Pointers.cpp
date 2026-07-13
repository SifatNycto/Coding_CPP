#include <iostream>

/*
    ### Pointers 
        Variable that stores a memory address of another variable
        sometimes it's easier to work with an address...

        # & address-of operator
        # * dereference operator
*/
// int main()
// {
//     std::string name = "Bro";
//     int age = 22;

//     std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
//     std::string *pFreePizzas = freePizzas;

//     std::string *pName = &name;
//     int *pAge = &age;

//     std::cout << *pName << std::endl;
//     std::cout << *pAge;
//     std::cout << *pFreePizzas;

//     return 0;
// }











// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Null Pointers..........
/*
    Null value: a special value that means something has no value.
        When a pointer is holding a null value,
        that pointer is not pointing at anything (null pointer)
    
    nullptr = Keyword represents a null pointer literal

    nullptrs are helpful when determining if an address
    was successfully assigned to a pointer

    when using pointers, be carefull that your code isn't
    dereferencing nullptr or pointing to free memory
    this will cause undefined behaivor
*/
int main(void)
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr)
    {
        std::cout << "address was not assigned";
        
    }
    else
    {
        std::cout << "address was assigned";
        std::cout << *pointer;
    }
}