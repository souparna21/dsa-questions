/*
Find out if a number is prime or not. (1 is neither prime nor composite).

INPUT: n=13
OUTPUT: YES

INPUT: n=14
OUTPUT: NO

ONPUT: n=101
OUTPUT: YES
*/

/* ----------------------Iterative solution(Brute force) --------------------*/ 
       /*---Time complexity: O(n), Space Complexity: O(1)----*/
/*
#include <iostream> 

using namespace std;

bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(isPrime(n))
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
*/
/* ----------------------Iterative solution --------------------*/ 
     /*---Time complexity: O(sqrt(n)), Space Complexity: O(1)----*/
     // divisors always apears in pairs.(Not suitable for large value of n)
/*
#include <iostream> 

using namespace std;

bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(isPrime(n))
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
*/

/* ----------------------Iterative solution --------------------*/ 
       /*---Time complexity: 3 times less than O(sqrt(n)), Space Complexity: O(1)----*/

#include <iostream> 

using namespace std;

bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    if(n == 2 || n == 3)
    {
        return true;
    }
    else if(n%2 == 0 || n%3 == 0)
    {
        return false;
    }
    for(int i=5; i*i<=n; i+=6)
    {
        if(n%i == 0 || n%(i+2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(isPrime(n))
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}