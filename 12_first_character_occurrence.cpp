// Program 12: Find first occurrence using strchr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], character;
    cout << "Enter a string: ";
    cin.getline(text, 200);
    cout << "Enter a character to find: ";
    cin >> character;

    char *position = strchr(text, character);
    if (position != NULL)
        cout << "First occurrence is at index " << (position - text) << endl;
    else
        cout << "Character not found." << endl;
    return 0;
}
