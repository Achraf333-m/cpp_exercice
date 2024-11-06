#include <iostream>
using namespace std;

void add_two(int*, int*, int*);

int main() {
    int num_1 = 5;
    int num_2 = 11;
    int sum = 0;

    add_two(&num_1, &num_2, &sum);
    cout << sum;
    return 0;
}


void add_two(int* point1, int* point2, int* sum) {
    *sum = *point1 + *point2;
}