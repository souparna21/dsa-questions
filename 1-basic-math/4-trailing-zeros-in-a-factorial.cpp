//Find the number of zeros present in a factorial

/* -----Iterative solution(Integer Overflow problem for slightly higher value) ------*/ 
       /*---Time complexity: O(n), Space Complexity: O(n)----*/
/*
#include <iostream> 

using namespace std;

int factorialOf(int n)
{
    int result = 1;
    for(int i=2; i<=n; i++)
    {
        result = result*i;
    }
    return result;
}

int countZeros(int n)
{
    int factorial = factorialOf(n), count=0;
    while(factorial % 10 == 0)
    {
        factorial = factorial/10;
        count++;
    }
    return count;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << countZeros(n) << endl;
    }
    return 0;
}
*/

/* ----------------------Mathematical solution --------------------*/ 
       /*---Time complexity: O(logn), Space Complexity: O(n)----*/
//count the occurance of the number 5 in the factorial of that number.
#include <iostream> 

using namespace std;

int countZeros(int n)
{
    int count = 0;
    for(int i=5; i<n; i=i*5)
    {
        count += n/i;
    }
    return count;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << countZeros(n) << endl;
    }
    return 0;
}