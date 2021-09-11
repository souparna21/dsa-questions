/* --------- Time complexity = O(n) ---------- */
/* --------- Aux space = O(1) ---------- */

#include <bits/stdc++.h>

using namespace std;

bool sorted(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1,2,3,4,5,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(sorted(arr,n))
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    
    return 0;
}