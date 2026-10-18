// Program 16: Count words using strlen() and spaces
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char text[300];
    int words = 0;
    bool insideWord = false;
    cout << "Enter a sentence: ";
    cin.getline(text, 300);

    for (int i = 0; i < strlen(text); i++) {
        if (!isspace(static_cast<unsigned char>(text[i]))) {
            if (!insideWord) words++;
            insideWord = true;
        } else {
            insideWord = false;
        }
    }
    cout << "Number of words = " << words << endl;
    return 0;
}
