//PROGRAM TO CONVERT A GIVEN STRING FROM LOWERCASE TO UPPERCASE//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    cout << "String in uppercase: " << str << endl;

    return 0;
}
