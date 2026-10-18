// Program 8: Check equality (case-sensitive) using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200];
    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    if (strcmp(first, second) == 0)
        cout << "Strings are exactly equal." << endl;
    else
        cout << "Strings are different (case matters)." << endl;
    return 0;
}
