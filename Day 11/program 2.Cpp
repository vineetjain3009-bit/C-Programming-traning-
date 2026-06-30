//program to print character frequency in a string using map//
#include <iostream>
#include <map>
using namespace std;

int main() {
    string str = "hello world";
    map<char, int> frequency;

    for (char c : str) {
        frequency[c]++;
    }

    cout << "Character\tFrequency" << endl;
    for (const auto &pair : frequency) {
        cout << pair.first << "\t" << pair.second << endl;
    }

    return 0;
}
