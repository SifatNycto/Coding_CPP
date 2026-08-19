#include <iostream>

// int main()
// {
//     int arr[4] = {7, 9, 10, 11};

//     int n = 4;

//     int key = 2;

//     int item = 8;

//     int j = n;

//     for (int i = 0; i < n; i++)
//     {
//         std::cout << arr[i] << " ";
//     }

//     n += 1;

//     while (j >= key)
//     {
//         arr[j+1] = arr[j];
//         j--;
//     }

//     arr[key] = item;


//     std::cout << std::endl << std::endl;


//     for (int i = 0; i < n; i++)
//     {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }
































// int main()
// {
//     int a[5] = {1, 5, 2, 8, 9};

//     int n = 5;
//     int j = n;

//     int item = 15;
//     int k = 3;

//     for (int i = 0; i < n; i++)
//     {
//         std::cout << a[i] << " ";
//     }

//     std::cout << std::endl;

//     n = n + 1;

//     while (j >= k)
//     {
//         a[j+1] = a[j];
//         j--;
//     }

//     a[k] = item;



//     for (int i = 0; i < n; i++)
//     {
//         std::cout << a[i] << " ";
//     }

// }














int main()
{
    int arr[5]={2,4,8,9,6};
    int item=16;
    int k=1;
    int n=5;
    int j=n-1;
    

    for(int i=0; i<n; i++){
        std::cout<< arr[i]<<" ";
    }

    n=n+1;

    while(j>=k)
    {
        arr[j+1]=arr[j];
        j--;
    }

    arr[k]=item;

    std::cout << std::endl;
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;

}