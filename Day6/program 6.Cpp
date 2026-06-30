//PROGRAM FOR ANAGRAM CHECKING//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "The strings are not anagrams.";
        return 0;
    }

    // Compare character frequencies
    int count[256] = {0};

    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    bool anagram = true;

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "The strings are anagrams.";
    else
        cout << "The strings are not anagrams.";

    return 0;
}
