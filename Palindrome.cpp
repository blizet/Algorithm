#include <iostream>
using namespace std;

int main()
{
    string str1, str2, str3;
    bool check;
    cin >> str1;
    for (int i = str1.length() - 1; i >= 0; i--)
    {
        str2.push_back(str1[i]);
    }
    // user defined function
    if (str1 == str2)
    {
        cout << "The two strings are equal." << endl;
    }
    else
    {
        cout << "The two strings are not equal." << endl;
    }
    // inbuild function
    check = str1.compare(str2);
    if (!check)
    {
        cout << "The two strings are equal." << endl;
    }
    else
    {
        cout << "The two strings are not equal." << endl;
    }
}