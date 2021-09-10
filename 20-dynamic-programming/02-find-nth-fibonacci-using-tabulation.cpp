/* 0,1,1,2,3,5,8,13.....*/
// Time complexity = O(n), aux space = O(n) // bottom up solution - tabulation

#include <iostream>
#include <vector>

using namespace std;

int fib(int n)
{
    int table[n+1];
    
    table[0] = 0, table[1] = 1;

    for(int i=2; i<=n; i++)
    {
        table[i] = table[i-1] + table[i-2];
    }
    return table[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}