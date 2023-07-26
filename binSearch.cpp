#include <bits/stdc++.h>

using namespace std;

int binary_sort(int arr[], int l, int n, int k)
{
    int mid;
    while (l < n)
    {
        mid = l + n / 2;

        if (arr[mid] == k)

        {
            return mid;
        }
        if (k < arr[mid])
        {
            n = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cout << "Enter no of elements" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> k;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int result = binary_sort(arr, 0, n - 1, k);
    if (result == -1)
    {
        cout << "No matching term" << endl;
    }
    else
        cout << "Element is presetn" << result << endl;
    return 0;
}
