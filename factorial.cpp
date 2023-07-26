#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int fact(int n)
{
    int sum = 1;
    for (int i = n; i > 0; i--)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    int n, result, result1;
    cout << "enter a number" << endl;
    cin >> n;
    // finding factorial through recursion
    result = factorial(n);
    cout << result << endl;
    // finding recursion through loop
    result1 = fact(n);
    cout << result1 << endl;
    return 0;
}