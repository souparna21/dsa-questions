/*
Find the given number in a sorted array. If there is present multiple numbers then print any of their index else print -1.

INPUT- {10,20,30,40,50,60}, x=20
OUTPUT- 1

INPUT- {5,15,25} x=25
OUTPUT- 2

INPUT- (5,10,15,25,35), x=20
OUTPUT- -1
*/
// for sorted array
/* ----------------------- Time Complexity=O(logn) and auxulary space=O(logn)------------------------ */
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int x, int firstIndex, int lastIndex)
{
    // base case
    if(firstIndex > lastIndex)
    {
        return -1;
    }
    int mid = (firstIndex + lastIndex)/2;
    if(arr[mid] == x)
    {
        return mid;
    }
    else if(arr[mid] > x)
    {
        return binarySearch(arr,x,firstIndex, mid-1);
    }
    else
    {
        return binarySearch(arr,x,mid+1,lastIndex);
    }
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
        int firstIndex = 0, lastIndex = n-1;
        cout << binarySearch(arr,x,firstIndex,lastIndex) << endl;
    }
    
    return 0;
}
