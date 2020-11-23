/* Program to find K max Elements from an Array */

#include <bits/stdc++.h>
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;

struct Pair
{
    int min;
    int max;
};

/* Recursive method */

int *MaxKRecursive(int arr[], int l, int h, int k)
{
}

/* bubble Sort method*/

int MaxkBubble(int a[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < (n - i) - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = n - 1; i >= abs(k - n); i--)
    {
        cout << a[i] << " ";
    }
}

/* Display method */

/* Driver Function */

int main()
{
    int n = 0, k = 0;
    cout << "Enter size of Array" << endl;
    cin >> n;

    cout << "Enter the elements of the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Number max elements to find" << endl;
    cin >> k;
    cout << "Max " << k << " elements of the array" << endl;

    MaxkBubble(arr, n, k);
}