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

int main()
{
    int arr[] = {40,8,50,100};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << index_of_largest(arr,n);
    
    return 0;
}