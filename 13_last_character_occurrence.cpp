// Program 13: Find last occurrence using strrchr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], character;
    cout << "Enter a string: ";
    cin.getline(text, 200);
    cout << "Enter a character to find: ";
    cin >> character;

    char *position = strrchr(text, character);
    if (position != NULL)
        cout << "Last occurrence is at index " << (position - text) << endl;
    else
        cout << "Character not found." << endl;
    return 0;
}
