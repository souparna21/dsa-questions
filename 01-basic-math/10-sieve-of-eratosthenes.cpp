/*
Print all the prime numbers upto the given number

INPUT: n=10
OUTPUT: 2 3 5 7

INPUT: n=23
OUTPUT: 2 3 5 7 11 13 17 19 23
*/

/* ----------------------Brute Force Solution --------------------*/ 
       /*---Time complexity: O(n*sqrt(n)), Space Complexity: O(1)----*/
/*
#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if(n == 2 || n == 3)
    {
        return true;
    }
    if(n%2 == 0 || n%3 == 0)
    {
        return false;
    }
    for(int i=5; i*i<n; i+=6)
    {
        if(n%i == 0 || n%(i+1) == 0)
        {
            return false;
        }
    }
    return true;
}

void primeNumbers(int n)
{
    if(n <= 1)
    {
        return;
    }
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        primeNumbers(n);
    }
    return 0;
}
*/

/* ---------------------- Sieve of Eratosthenes Algorithm --------------------*/ 
       /*---Time complexity: O(n*log.log(n)), Space Complexity: O(n)----*/
/*
#include <iostream>
#include <vector>

using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n+1, true);
    for(int i=2; i*i<=n; i++)
    {
        if(isPrime[i])
        {
            for(int j=2*i; j<=n; j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        sieve(n);
    }
    return 0;
}
*/

/* --------------------------- Efficient solution(Sieve of Eratosthenes Algorithm) --------------------*/ 
       /*---Time complexity: O(n*log.log(n)), Space Complexity: O(n)----*/

#include <iostream>
#include <vector>

using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n+1, true);
    for(int i=2; i<=n; i++)
    {
        if(isPrime[i])
        {
            cout << i << " ";
            for(int j=i*i; j<=n; j+=i)
            {
                if(isPrime[j])
                {
                    isPrime[j] = false;
                }
            }
        }
    }
    cout << endl;
}

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        sieve(n);
    }
    return 0;
}
