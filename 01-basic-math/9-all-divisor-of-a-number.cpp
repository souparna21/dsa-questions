/*
Print all divisor of a number in increasing order.

INPUT: 15
OUTPUT: 1 3 5 15

INPUT: 100
OUTPUT: 1 2 4 5 10 20 25 50 100

INPUT: 7
OUTPUT: 1 7
*/

/* ----------------------Iterative solution --------------------*/ 
       /*---Time complexity: O(n), Space Complexity: O(1)----*/
/*
#include <iostream>

using namespace std;

void allDivisors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
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
        allDivisors(n);
    }
    return 0;
}
*/

/* ----------------------Iterative solution --------------------*/ 
/*-----Time complexity: O(sqrt(n)), Space Complexity: O(1)------*/
/*
#include <iostream>

using namespace std;

void allDivisors(int n)
{
    for(int i=1; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            if(n/i != i)
            {
                cout << n/i << " "; // require example 25
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
        allDivisors(n);
    }
    return 0;
}
*/

/* ----------------------Iterative solution --------------------*/ 
/*-----Time complexity: O(sqrt(n)), Space Complexity: O(n)------*/
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> divisorOf(int n)
{
    vector<int> result;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            result.push_back(i);
            if(n/i != i) result.push_back(n/i);
        }
    }
    sort(result.begin(),result.end());
    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> ans = divisorOf(n);
        for(auto x: ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

/* ----------------------Iterative solution --------------------*/ 
       /*---Time complexity: O(sqrt(n)), Space Complexity: O(1)----*/
#include <iostream>

using namespace std;

void divisors(int n)
{
    int i;
    for(i=1; i*i<n; i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
        }
    }
    for( ; i>=1; i--)
    {
        if(n%i == 0)
        {
            cout << n/i << " ";
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
        divisors(n);
    }
    return 0;
}