/*
Find the given number in a sorted array. If there is present multiple numbers then print any of their index else print -1.

INPUT- {10,20,30,40,50,60}, x=20
OUTPUT- 1

INPUT- {5,15,25} x=25
OUTPUT- 2

INPUT- (5,10,15,25,35), x=20
OUTPUT- -1
*/
// for sorted array( Iterative approach - two pointer method)
/* ----------------------- Time Complexity=O(logn) and auxulary space=O(1)------------------------ */
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int x, int n)
{
    int firstIndex = 0, lastIndex = n-1;
    while(firstIndex <= lastIndex)
    {
        int mid = (firstIndex + lastIndex)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] > x)
        {
            lastIndex = mid-1;
        }
        else 
        {
            firstIndex = mid+1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,n,k;
        cin >> n;
        vector<int> arr;
        for(int i=0; i<n; i++)
        {
            cin >> k;
            arr.push_back(k);
        }
        cin >> x;
        cout << binarySearch(arr,x,n) << endl;
    }
    
    return 0;
}