//Binary Search >>>>>>>>>>
#include <iostream>

// void making_array(int n, int arr[]);
// int binary_search(int n, int arr[], int target);
// int main()
// {
//     int n;
//     std::cout << "Enter the number of elements: ";
//     std::cin >> n;
//     int arr[n];
    
//     making_array(n, arr);

//     int target;
//     std::cout << "Enter tergeted element that you wanna search: ";
//     std::cin >> target;

//     binary_search(n, arr, target);
//     return 0;
// }

// void making_array(int n, int arr[])
// {
//     std::cout << "Enter your " << n << " sorted elements: ";
//     for (int i = 0; i < n; i++)
//         std::cin >> arr[i];
// }

// int binary_search(int n, int arr[], int target)
// {
//     int left = 0, right = n - 1, mid;

//     while (left <= right)
//     {
//         mid = (left + right) / 2;

//         if (arr[mid] == target)
//         {
//             std::cout << std::endl << "Your targeted element " << target << " is at index " << mid;
//             return mid;
//         }

//         else if (arr[mid] < target) left = mid + 1;
//         else right = mid - 1;
//     }
//     std::cout << std::endl << "Targeted key " << target << " not found!!!";
//     return -1;
// }


int binary_search(int arr[], int size, int target);
int main()
{
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    int arr[size];

    std::cout << "Enter your " << size << " elements: ";
    for (int i = 0; i < size; i++) std::cin >> arr[i];

    int target;
    std::cout << "Enter your targeted element: ";
    std::cin >> target;

    binary_search(arr, size, target);

    return 0;
    
}
int binary_search(int arr[], int size, int target)
{
    int l = 0, r = size - 1, mid;

    while (!(l > r))
    {
        mid = (l + r) / 2;

        if (arr[mid] == target)
        {
            std::cout << " index is: " << mid;
            return mid;
        }

        else if (arr[mid] > target) r = mid - 1;
        else l = mid + 1;
    }

    std::cout << "key not found in the array";
    return -1;
}
