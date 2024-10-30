#include <iostream>
using namespace std;


class Check {
    private: 
    int i;
    public:
    Check() {
        i = 0;
    }
    void operator++() {
        ++i;
    }

    void display() {
        cout << "i= " << i;
    }


};

int main() {
    Check check1;
    check1.display();
    // operator overloading
    ++check1;
    check1.display();
    return 0;
}