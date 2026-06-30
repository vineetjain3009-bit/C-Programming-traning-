//program to print Query frequency count using map//
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> frequency;

    // Example queries
    frequency["SELECT * FROM users"]++;
    frequency["INSERT INTO users (name, email) VALUES ('John', 'john@example.com')"]++;
    frequency["SELECT * FROM users"]++;

    cout << "Query\tFrequency" << endl;
    for (const auto &pair : frequency) {
        cout << pair.first << "\t" << pair.second << endl;
    }

    return 0;
}
