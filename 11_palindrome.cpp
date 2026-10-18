// Program 11: Check palindrome (reverse and compare)
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], reversed[200];
    cout << "Enter a word: ";
    cin.getline(text, 200);

    int length = strlen(text);
    for (int i = 0; i < length; i++) reversed[i] = text[length - 1 - i];
    reversed[length] = '\\0';

    if (strcmp(text, reversed) == 0)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;
    return 0;
}
