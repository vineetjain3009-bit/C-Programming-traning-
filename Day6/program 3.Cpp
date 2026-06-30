//PROGRAM TO CHECK IF A STRING IS A PALINDROME//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}
