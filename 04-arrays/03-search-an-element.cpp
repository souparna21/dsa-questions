/* --------- Linear Search ---------- */
/* --------- Time complexity = O(n) ---------- */

#include <bits/stdc++.h>

using namespace std;

int search(int arr[], int x, int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {20,7,5,25};
    int x = 5;
    int n = sizeof(arr)/sizeof(int);

    cout << search(arr,x,n);
    
    return 0;
}