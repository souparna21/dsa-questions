/* --------- Time complexity = O(n²) ---------- */
/* --------- Aux space = O(1) ---------- */

#include <bits/stdc++.h>

using namespace std;

void move_zeros(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j] != 0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
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
    int arr[] = {0,0,0,34,2,5,0,0,7,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    move_zeros(arr,n);
    print_array(arr,n);

    return 0;
}