/* --------- Time complexity = O(n) ---------- */
/* --------- Aux space = O(1) ---------- */

#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int n)
{
    int i=0, j=n-1;
    while(i < j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,n);
    
    return 0;
}