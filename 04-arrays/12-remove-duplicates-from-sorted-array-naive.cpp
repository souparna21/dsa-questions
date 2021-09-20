/* --------- Time complexity = O(n) ---------- */
/* --------- Aux space = O(n) ---------- */

#include <bits/stdc++.h>

using namespace std;

int remove_duplicates(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res =1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] != temp[res-1])
        {
            temp[res] = arr[i];
            res++;
        }
    }

    for(int i=0; i<res; i++)
    {
        arr[i] = temp[i];
    }   
    return res;
}

void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    int arr[] = {1,2,3,4,4,4,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int new_size = remove_duplicates(arr,n);

    print_array(arr,new_size);
    
    return 0;
}