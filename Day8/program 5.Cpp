//program to display reverse string //
#include <iostream>
using namespace std;

void reverse(char str[], int i) {
    if (str[i] == '\0')
        return;

    reverse(str, i + 1);
    cout << str[i];
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed string: ";
    reverse(str, 0);

    return 0;
}
