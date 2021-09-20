// Dynamic programming is the optimised recursion process to stop repeating same sub calculation of a reursion tree
/* 0,1,1,2,3,5,8,13.....*/
// Time complexity = O(n) // top down solution - memoisation

#include <iostream>
#include <vector>

using namespace std;

vector<int> memo(1000,-1);

int fib(int n)
{
    if(memo[n] == -1)
    {
        int result;
        // Base case
        if(n == 0 or n == 1)
        {
            result = n;
        }
        // Recusive case
        else
        {
            result = fib(n-1)+fib(n-2);
        }

        memo[n] = result;
    }
    return memo[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}