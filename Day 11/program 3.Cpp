//program to print most repeated character in a string using map//
#include <iostream>
#include <map>
using namespace std;

int main() {
    string str = "hello world";
    map<char, int> frequency;

    for (char c : str) {
        frequency[c]++;
    }

    char mostRepeatedChar;
    int maxFrequency = 0;

    for (const auto &pair : frequency) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostRepeatedChar = pair.first;
        }
    }

    cout << "Most repeated character: " << mostRepeatedChar << endl;
    cout << "Frequency: " << maxFrequency << endl;

    return 0;
}
