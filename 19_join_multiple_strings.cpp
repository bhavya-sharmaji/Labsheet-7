// Program 19: Join multiple strings into one sentence using strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[500] = "";
    char part[150];
    int count;
    cout << "How many parts (1-3)? ";
    cin >> count;
    if (count < 1 || count > 3) {
        cout << "Please enter 1 to 3 parts." << endl;
        return 0;
    }
    cin.ignore(10000, '\\n');

    for (int i = 0; i < count; i++) {
        cout << "Enter part " << i + 1 << ": ";
        cin.getline(part, 150);
        if (i > 0) strcat(sentence, " ");
        strcat(sentence, part);
    }
    cout << "Complete sentence = " << sentence << endl;
    return 0;
}
