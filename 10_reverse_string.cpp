// Program 10: Reverse a string (portable replacement for non-standard strrev())
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200];
    cout << "Enter a string: ";
    cin.getline(text, 200);

    int length = strlen(text);
    cout << "Reversed string = ";
    for (int i = length - 1; i >= 0; i--) cout << text[i];
    cout << endl;
    return 0;
}
