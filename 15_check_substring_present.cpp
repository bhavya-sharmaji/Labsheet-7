// Program 15: Check whether one string is present in another using strstr()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], part[100];
    cout << "Enter main string: ";
    cin.getline(text, 300);
    cout << "Enter string to search: ";
    cin.getline(part, 100);

    if (strstr(text, part) != NULL)
        cout << "The string is present." << endl;
    else
        cout << "The string is not present." << endl;
    return 0;
}
