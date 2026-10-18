// Program 14: Find a substring using strstr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], part[100];
    cout << "Enter main string: ";
    cin.getline(text, 300);
    cout << "Enter substring: ";
    cin.getline(part, 100);

    char *position = strstr(text, part);
    if (position != NULL)
        cout << "Substring found at index " << (position - text) << endl;
    else
        cout << "Substring not found." << endl;
    return 0;
}
