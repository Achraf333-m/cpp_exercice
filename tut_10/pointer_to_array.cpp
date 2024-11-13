#include <iostream>
using namespace std;

int main()
{
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    int *ptr{nullptr};

    ptr = &arr[0];

    int array_length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < array_length; i++) 
    {
        if (i == 2)
        {
            cout << i + 1 << "rd value of array: " << *ptr << endl;
        } else if (i == 0) {
            cout << i + 1 << "st value of array: " << *ptr << endl;

        } else if (i == 1) {
            cout << i + 1 << "nd value of array: " << *ptr << endl;

        }
        else
        {

            cout << i + 1 << "th value of array: " << *ptr << endl;
        }
        ptr++;
        // or *ptr + 1
    }

    return 0;
}