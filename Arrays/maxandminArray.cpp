/* Program to find max and min in an Array */

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
/* Linear Comparision method */

struct Pair MaxMinLinear(int a[], int n)
{
    struct Pair maxmin;

    /* if only one Element in array */

    if (n == 1)
    {
        maxmin.min = a[0];
        maxmin.max = a[1];
    }
    /* if only two Element in array */

    if (a[0] > a[1])
    {
        maxmin.max = a[0];
        maxmin.min = a[1];
    }
    else
    {
        maxmin.max = a[1];
        maxmin.min = a[0];
    }

    /* if greator than 2 */

    for (int i = 2; i < n; i++)
    {
        if (a[i] > maxmin.max)
        {
            maxmin.max = a[i];
        }
        else if (a[i] < maxmin.min)
        {
            maxmin.min = a[i];
        }
    }

    return maxmin;
}

/* Recursive method */

struct Pair MaxMinRecursive(int arr[], int l, int h)
{
    struct Pair minmax, minmaxl, minmaxr;
    if (l == h)
    {
        minmax.max = arr[l];
        minmax.min = arr[l];

        return minmax;
    }

    if (h == l + 1)
    {
        if (arr[l] > arr[h])
        {
            minmax.max = arr[l];
            minmax.min = arr[h];
        }
        else
        {
            minmax.max = arr[h];
            minmax.min = arr[l];
        }
        return minmax;
    }

    int mid = (l + h) / 2;
    minmaxl = MaxMinRecursive(arr, l, mid);
    minmaxr = MaxMinRecursive(arr, mid + 1, h);

    if (minmaxl.max > minmaxr.max)
    {
        minmax.max = minmaxl.max;
    }
    else
    {
        minmax.max = minmaxr.max;
    }
    if (minmaxl.min < minmaxr.min)
    {
        minmax.min = minmaxl.min;
    }
    else
    {
        minmax.min = minmaxr.min;
    }

    return minmax;
}

/* Display method */

void display(struct Pair minmax)
{
    cout << "Max val = " << minmax.max << endl;
    cout << "Min val = " << minmax.min << endl;
}

/* Driver Function */

int main()
{
    int n = 0;
    cout << "Enter size of Array" << endl;
    cin >> n;

    cout << "Enter the elements of the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Min Max using Linear comparision" << endl;
    struct Pair maxmin = MaxMinLinear(arr, n);
    display(maxmin);
    cout << "Min Max using Recursive method" << endl;
    struct Pair maxminRecursive = MaxMinRecursive(arr, 0, n - 1);
    display(maxminRecursive);
}