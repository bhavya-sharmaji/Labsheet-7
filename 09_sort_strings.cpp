// Program 9: Arrange strings in alphabetical order using strcmp()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char words[10][100], temp[100];
    int count;
    cout << "How many words (1-10)? ";
    cin >> count;
    if (count < 1 || count > 10) {
        cout << "Please enter a number from 1 to 10." << endl;
        return 0;
    }
    cin.ignore(10000, '\\n');

    for (int i = 0; i < count; i++) {
        cout << "Enter word " << i + 1 << ": ";
        cin.getline(words[i], 100);
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    cout << "Alphabetical order:" << endl;
    for (int i = 0; i < count; i++) cout << words[i] << endl;
    return 0;
}
