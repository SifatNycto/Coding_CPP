#include <iostream>

int main()
{
    int position, value;
    int arr[] = {1,7,6,8,10};
    int size = sizeof(arr) / sizeof(int);

    std::cout << std::endl << "Array before insertion: ";
    for (int c : arr) std::cout << c << " ";

    std::cout << std::endl << "Enter the element that you wanna insert: ";
    std::cin >> value;
    std::cout << std::endl << "Enter the position in which you wanna insert: ";
    std::cin >> position;

    size++;
    int j = size - 1;

    while (j > position)
    {
        arr[j] = arr[j - 1];
        j--;
    }

    arr[position] = value;

    std::cout << std::endl << "Array after insertion: ";
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";

    return 0;
}