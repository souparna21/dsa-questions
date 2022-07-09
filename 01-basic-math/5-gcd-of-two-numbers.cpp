// Similar to the tiles problem
/*
Find the GCD(Greatest Common Divisor) or HCF(Highest Common Factor) of two numbers.

INPUT: a=4, b=6
OUTPUT: 2

INPUT: a=100, b=200
OUTPUT: 100
*/



/* ----------------------Iterative solution(Euclidian Algorithm) --------------------*/ 
       /*---Time complexity: O(min(a,b)), Space Complexity: O(1)----*/
/*
Eucledian Algorithm: If b is smaller than a, then gcd(a,b)=gcd(a-b,b)
*/
/*
#include <iostream> 

using namespace std;

int gcd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return b;
}

int main()
{
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << gcd(a,b) << endl;
    }
    return 0;
}
*/

/* ----------------------recursive solution(Eucledian Algorithm) --------------------*/ 
       /*---Time complexity: O(log(min(a,b))), Space Complexity:----*/
#include <iostream> 

using namespace std;

int gcd(int a, int b)
{
    //base case
    if(b == 0)
    {
        return a;
    }
    //recursive case
    return gcd(b, a%b);
}

int main()
{
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << gcd(a,b) << endl;
    }
    return 0;
}