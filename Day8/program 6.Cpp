//program to calculate palindrome check//
#include <iostream>
#include <cstring>
using namespace std;

int palindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;

    if (str[start] != str[end])
        return 0;

    return palindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);

    if (palindrome(str, 0, len - 1))
        cout << "it is a Palindrome";
    else
        cout << "it is not a Palindrome";

    return 0;
}
