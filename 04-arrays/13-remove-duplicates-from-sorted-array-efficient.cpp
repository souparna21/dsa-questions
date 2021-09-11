/* --------- Time complexity = O(n) ---------- */
/* --------- Aux space = O(1) ---------- */

#include <bits/stdc++.h>

using namespace std;

int remove_duplicates(int arr[], int n)
{
    int res = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
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