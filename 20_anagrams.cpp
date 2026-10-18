// Program 20: Check whether two strings are anagrams
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char first[200], second[200];
    int counts[256] = {0};
    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    // Ignore spaces and letter case; count each remaining character.
    for (int i = 0; i < strlen(first); i++) {
        unsigned char ch = static_cast<unsigned char>(first[i]);
        if (!isspace(ch)) counts[tolower(ch)]++;
    }
    for (int i = 0; i < strlen(second); i++) {
        unsigned char ch = static_cast<unsigned char>(second[i]);
        if (!isspace(ch)) counts[tolower(ch)]--;
    }

    bool anagram = true;
    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            anagram = false;
            break;
        }
    }
    if (anagram) cout << "The strings are anagrams." << endl;
    else cout << "The strings are not anagrams." << endl;
    return 0;
}
