/*
Express the given number as the product of prime factors.

INPUT: n=12
OUTPUT: 2 2 3

INPUT: n=13
OUTPUT: 13

INPUT: n=84
OUTPUT: 2 2 3 7
*/

/* ----------------------Brute force solution --------------------*/ 
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
    else if(n==2 || n==3)
    {
        return true;
    }
    else if(n%2 == 0 || n%3 == 0)
    {
        return false;
    }
    for(int i=5; i*i<n; i+=6)
    {
        if(n%i == 0 || n%(i+2) == 0)
        {
            return false;
        }
    }
    return true;
}

void primeFactor(int n)
{
    for(int i=0; i<=n; i++)
    {
        if(isPrime(i))
        {
            int x=i;
            while(n%x == 0)
            {
                cout << i << " ";
                x = x*i;
            }
        }
    }
    cout << endl;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        primeFactor(n);
    }
    return 0;
}
*/

/* ---------------------- Optimization --------------------*/ 
       /*---Time complexity: O(sqrt(n)), Space Complexity: O(1)----*/
/*
#include <iostream> 

using namespace std;

void primeFactor(int n)
{
    if(n <= 1)
    {
        return;
    }
    for(int i=2; i*i<=n; i++)
    {
        while(n%i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
    if(n > 1)
    {
        cout << n ;
    }
    cout << endl;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        primeFactor(n);
    }
    return 0;
}
*/

/* ----------------------Iterative solution(Eucledian Algorithm) --------------------*/ 
       /*---Time complexity: 3 times less than O(sqrt(n)), Space Complexity: O(1)----*/
#include <iostream> 

using namespace std;

void primeFactor(int n)
{
    if(n <= 1)
    {
        return;
    }
    while(n%2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
    while(n%3 == 0)
    {
        cout << 3 << " ";
        n = n/3;
    }
    for(int i=5; i*i<=n; i+=6)
    {
        while(n%i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
        while(n%(i+2) == 0)
        {
            cout << (i+2) << " ";
            n = n/(i+2);
        }
    }
    if(n > 3)
    {
        cout << n;
    }
    cout << endl;
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        primeFactor(n);
    }
    return 0;
}