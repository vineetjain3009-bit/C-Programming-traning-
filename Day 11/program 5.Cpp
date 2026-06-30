//program to print word frequency using map//
#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string str = "hello world hello";
    map<string, int> frequency;
    stringstream ss(str);
    string word;

    while (ss >> word) {
        frequency[word]++;
    }

    cout << "Word\tFrequency" << endl;
    for (const auto &pair : frequency) {
        cout << pair.first << "\t" << pair.second << endl;
    }

    return 0;
}
