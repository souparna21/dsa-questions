/*
Find the factorial of a number
*/


/* ----------------------Recursive solution --------------------*/ 
       /*---Time complexity: O(n), Space Complexity: O(n)----*/
/*
#include <iostream> 

using namespace std;

int factorialOf(int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }
    //recursive part
    return n*factorialOf(n-1);
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << factorialOf(n) << endl;
    }
    return 0;
}
*/


/* ----------------------Iterative solution --------------------*/ 
       /*---Time complexity: O(n), Space Complexity: O(1)----*/
#include <iostream> 

using namespace std;

long long factorialOf(long long n)
{
    long long result = 1;
    for(int i=2; i<=n; i++)
    {
        result = result*i;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << factorialOf(n) << endl;
    }
    return 0;
}