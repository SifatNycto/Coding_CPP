#include <iostream>

using namespace std;

void input(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << "Enter element #" << i+1 << ": ";
        cin >> arr[i];
    }
}

void output(int n, int arr[]) {
    cout << "Elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    input(n, arr);

    output(n, arr);

    return 0;
}