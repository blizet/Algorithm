#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// user defined function
int maxE(vector<int> vect)
{
    int max = -92398;
    for (int i = 0; i < vect.size(); i++)
    {
        if (max < vect[i])
            max = vect[i];
    }
    return max;
}

int main()
{

    vector<int> A;
    int n, e, max, max1;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> e;
        A.push_back(e);
    }

    // inbuild function
    max = *max_element(A.begin(), A.end());
    cout << max << endl;

    // function call
    max1 = maxE(A);
    cout << max1 << endl;
    return 0;
}
