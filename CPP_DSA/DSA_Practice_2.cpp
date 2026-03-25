#include <iostream>
//bubble sort >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// void bubble_sort(int arr[], int size);

// int main()
// {
//     int arr[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
//     int size = sizeof(arr) / sizeof(int);

//     bubble_sort(arr, size);

//     std::cout << "{ ";

//     for (int indexes : arr)
//         std::cout << indexes << " ";


//         std::cout << "}";

//     return 0;
// }

// void bubble_sort(int arr[], int size)
// {
//     int temp;
//     for (int i = 0; i < (size-1); i++)
//     {
//         for (int j = 0; j < (size-i-1); j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }



//swap >>>>>>>>>>>>>>>>>>>>>>>>>>>


int main()
{
    int a = 2, b = 3;

    std::cout << a << '\n' << b;
    std::cout << std::endl;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << a << '\n' << b;

    return 0;
}






// //============================================================

// void inserting_element(int size, int arr[]);
// int searching_element(int size, int arr[], int s_key);

// int main() {
//     int size, s_key;

//     std::cout << "How many elements you want to enter: ";
//     std::cin >> size;

//     int arr[size];

//     std::cout << "Enter the array elements (must be sorted): ";
//     inserting_element(size, arr);

//     std::cout << "Which element do you want to search?: ";
//     std::cin >> s_key;

//     searching_element(size, arr, s_key);

//     return 0;
// }

// void inserting_element(int size, int arr[]) {
//     for (int i = 0; i < size; i++) {
//         std::cin >> arr[i];
//     }
// }

// int searching_element(int size, int arr[], int s_key) {
//     int lb = 0, ub = size - 1;

//     while (lb <= ub) {
//         int mid = (lb + ub) / 2;

//         if (arr[mid] == s_key) {
//             std::cout << s_key << " found at index: " << mid << std::endl;
//             return mid;
//         }
//         else if (s_key > arr[mid]) {
//             lb = mid + 1;
//         }
//         else {
//             ub = mid - 1;
//         }
//     }

//     std::cout << s_key << " is not found in this array." << std::endl;
//     return -1;
// }