#include <iostream>
#include <string>
using namespace std;




int main() {
    int size, input, sum {0};
    
    // asking the user for the size of the array
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    // initializing a pointer to point to the first element of the array
    int *ptr = &arr[0];

    cout << "Enter values in your array: ";
    for (int i = 0; i < size; i++) {
        cin >> input;
        *ptr = input;
        cout << *ptr << " ";
        sum += *ptr;
        ptr++;
    }

    cout << endl << "And the sum of all values is: " << sum << endl;

    

    return 0;
}