/* --------- Time complexity = O(n) ---------- */

#include <bits/stdc++.h>

using namespace std;

int delete_element(int arr[], int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            break;
        }
    }

    if(i == n) return n;

    for(int j=i; j<n-1; j++)
    {
        arr[j] = arr[j+1];
    }

    return n-1; 
}

void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5,10,15,20,25,30};
    int x = 15;
    int n = sizeof(arr)/sizeof(arr[0]);

    int new_elemnt_number = delete_element(arr,n,x);
    print_array(arr,new_elemnt_number);
    
    return 0;
}