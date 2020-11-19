//Write a program to reverse an array or string

#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] in recursive method*/

void reverseRecursive(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        reverseRecursive(arr, start + 1, end - 1);
    }
}
/* Function to reverse arr[] using an extra array */

int *reverseWithAlt(int arr[], int n)
{
    int *temp = new int[n];
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        temp[j++] = arr[i];
    }
    return temp;
}

/* Function to reverse arr[] without recursion or extra array*/

void reverseWithoutAnything(int arr[],int n){
	int i=0;
	while(i<n){
		arr[i]=(arr[i]+arr[n])-(arr[n]=arr[i]);
		i++;
		n--;
	}
}

/* Function to Display the array */

void DisplayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/* Driver function*/

int main()
{
    int n = 0;
    cout << "Enter size of Array" << endl;
    cin >> n;

    cout << "Enter the elements of the array" << endl;
    int arr[n];
    int arr_2[n];	//array for another type of recursion as arr is modified by recurion function
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr_2[i]=arr[i];
    }

    cout << "Reverse using Alternate Array method" << endl;
    int *alt = reverseWithAlt(arr, n);
    DisplayArray(alt, n);

    cout << "Reverse using Recursive Method" << endl;
    reverseRecursive(arr, 0, n - 1);
    DisplayArray(arr, n);
    
    cout << "Reverse using while loop Method" << endl;
    reverseWithoutAnything(arr_2,n-1);
    DisplayArray(arr_2, n);
}
