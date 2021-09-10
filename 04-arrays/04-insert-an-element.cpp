/* --------- Time complexity = O(n) ---------- */

#include <bits/stdc++.h>

using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if(cap == n) return n;

    int idx = pos-1;
    for(int i=cap-2; i>=idx; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = x;

    return n+1;
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
    int cap = 5;
    int arr[cap] = {5,10,20};
    int x = 15;
    int pos = 3;
    int n = 0;
    for(int i=0; i<cap; i++)
    {
        if(arr[i] != 0) n++;
    }

    int new_elemnt_number = insert(arr,n,x,cap,pos);
    print_array(arr,new_elemnt_number);
    
    return 0;
}