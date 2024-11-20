#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    // writing first file
    fstream myFile1;
    myFile1.open("file_1.txt", ios::out);
    if (myFile1.is_open()) {
        myFile1 << "Hello, this is text from file1.";
        myFile1.close();
    }

    // reading first file into second file
    ofstream myFile2("file_2.txt");
    myFile1.open("file_1.txt", ios::in);
    
    if (myFile2.is_open()) {
        string line;
        while(getline(myFile1, line)) {
            myFile2 << line;
        }
        myFile2.close();
        myFile1.close();
    }

    return 0;
}