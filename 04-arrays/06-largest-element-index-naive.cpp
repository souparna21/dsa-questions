/* --------- Time complexity = O(n²) ---------- */

#include <bits/stdc++.h>

using namespace std;

int index_of_largest(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool flag = true;
        for(int j=0; j<n; j++)
        {
            if(arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {40,8,50,100};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << index_of_largest(arr,n);
    
    return 0;
}