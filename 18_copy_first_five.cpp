// Program 18: Copy only first 5 characters using strncpy()
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[200], destination[6];
    cout << "Enter a string: ";
    cin.getline(source, 200);

    strncpy(destination, source, 5);
    destination[5] = '\\0'; // Ensure destination ends as a string
    cout << "First five characters = " << destination << endl;
    return 0;
}
