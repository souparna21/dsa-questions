/* --------- Time complexity = O(n) ---------- */
/* --------- Aux Space = O(1) ---------- */

#include <bits/stdc++.h>

using namespace std;

int index_of_second_largest(int arr[], int n)
{
    int largest = 0, res = -1;

    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i] < arr[largest])
        {
            if(res == -1 or arr[i] > arr[res])
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