#include <iostream>
using namespace std;

void hanoi(int, int, int, int);

int main() {
    int num_disks, target, temp, start;

    cin >> num_disks;

    hanoi(num_disks, 1, 3, 2);
    return 0;
}

void hanoi(int disks, int start, int target, int temp) {
    if (disks == 1) {
        cout << "Move " << disks << " disk from " << start << " to " << target << endl;
    
    } else {

    hanoi(disks - 1, start, temp, target);
    cout << "Move " << disks << " disk from " << start << " to " << target << endl;
    hanoi(disks - 1, temp, target, start);

    }
  
}