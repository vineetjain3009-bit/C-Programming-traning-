//program to print first non repeated character in a string using map//
#include <iostream>
#include <map>
using namespace std;

int main() {
    string str = "hello world";
    map<char, int> frequency;

    for (char c : str) {
        frequency[c]++;
    }

    char firstNonRepeatedChar;
    bool found = false;

    for (char c : str) {
        if (frequency[c] == 1) {
            firstNonRepeatedChar = c;
            found = true;
            break;
        }
    }

    if (found) {
        cout << "First non-repeated character: " << firstNonRepeatedChar << endl;
    } else {
        cout << "No non-repeated character found." << endl;
    }

    return 0;
}
