#include <iostream>

int main()
{
    int value, index_value;
    int arr[] = {1,2,6,8,10};
    int size = sizeof(arr) / sizeof(int);

    std::cout << std::endl << "Array before deletion: ";
    for (int c : arr) std::cout << c << " ";

    std::cout << std::endl << "Enter the element that you wanna delete: ";
    std::cin >> value;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value) index_value = i;
    }

    int j = index_value + 1;
    while (j < size)
    {
        arr[j-1] = arr[j];
        j++;
    }

    size = size - 1;
    std::cout << std::endl << "Array after deletion: ";
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";

    return 0;
}