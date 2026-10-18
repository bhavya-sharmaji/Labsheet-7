// Program 1: Find string length using strlen()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200];
    cout << "Enter a string: ";
    cin.getline(text, 200);

    cout << "Length = " << strlen(text) << endl;
    return 0;
}
