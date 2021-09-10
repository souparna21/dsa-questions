/* --------- Time complexity = O(n) ---------- */


#include <bits/stdc++.h>

using namespace std;

int index_of_largest(int arr[], int n)
{
    int res = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

int index_of_second_largest(int arr[], int n)
{
    int largest = index_of_largest(arr,n);
    int res = -1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(res == -1)
            {
                res = i;
            }
            if(arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {5,20,12,20,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << index_of_second_largest(arr,n);
    
    return 0;
}