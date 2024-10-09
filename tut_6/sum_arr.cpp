#include <iostream>
using namespace std;


int main() {
    int elements[5], sum = 0;

    cout << "Enter the numbers you want to sum (integers): ";

    for (int i = 0; i < 5; i++) {
        cin >> elements[i];
    }

    // summation
    for (int i = 0; i < 5; i++) {
        sum += elements[i];
    }

    // display
    cout << "The sum is: " << sum << endl;
    return 0;
}