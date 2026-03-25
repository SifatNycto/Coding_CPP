#include <iostream>
//Bubble Sort 2.0

void bubble_sort(int arr[], int size);

int main()
{
    int arr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(arr) / sizeof(int);

    bubble_sort(arr, size);

    std::cout << "{ ";

    for (int indexes : arr)
        std::cout << indexes << " ";


        std::cout << "}";

    return 0;
}

void bubble_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < (size-1); i++)
    {
        for (int j = 1; j < (size-i); j++)
        {
            if (arr[j-1] > arr[j])
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}






