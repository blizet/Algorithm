#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// user defined function
string rev(string str)
{
    string s1;
    for (int i = str.length(); i >= 0; i--)
    {
        s1.push_back(str[i]);
    }
    return s1;
}

int main()
{
    string str, s1;
    cout << "Enter the string" << endl;
    cin >> str;

    // inbuild function
    reverse(str.begin(), str.end());
    cout << "Result1 :";
    cout << str << endl;

    // Calling the rev function
    s1 = rev(str);
    cout << "Result2 :" << s1 << endl;

    return 0;
}
