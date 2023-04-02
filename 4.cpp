//Check if array is sorted
#include <bits/stdc++.h>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{
    if (n == 1 || n == 0)
        return true;
    if (arr[n - 1] < arr[n - 2])
        return false;
    return arraySortedOrNot(arr, n - 1);
}
int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        cout << "True\n";
    else
        cout << "False\n";
}