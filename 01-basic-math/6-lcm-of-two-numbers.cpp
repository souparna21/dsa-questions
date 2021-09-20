/*
LCM of two numbers.

INPUT: a=4, b=6
OUTPUT: 12

INPUT: a=12, b=15
OUTPUT: 60
*/

/* ----------------------Iterative solution(Brute force) --------------------*/ 
       /*---Time complexity: O(a*b - max(a,b)), Space Complexity: O(1)----*/
/*
#include <iostream> 

using namespace std;

int lcm(int a, int b)
{
    int result = max(a,b);
    while(true)
    {
        if(result%a == 0 && result%b == 0)
        {
            return result;
        }
        result++;
    }
}

int main()
{
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << lcm(a,b) << endl;
    }
    return 0;
}
*/

/* ----------------------Iterative solution --------------------*/ 
       /*---Time complexity: O(n), Space Complexity: O(1)----*/
/*
#include <iostream> 

using namespace std;

int lcm(int a, int b)
{
    int small = min(a,b), big = max(a,b);
    for(int i=1; i<=small; i++)
    {
        if((big*i) % small == 0)
        {
            return big*i;
        }
    }
    return 0;
}

int main()
{
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << lcm(a,b) << endl;
    }
    return 0;
}
*/

/* ---------------------- Mathematical solution(logarithmic) --------------------*/ 
       /*---Time complexity: O(log(min(a,b))), Space Complexity: ----*/
                    /*--Formula: a*b = gcd(a,b) * lcm(a,b)---*/
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

int lcm(int a, int b)
{
    return (a*b) / gcd(a,b);
}

int main()
{
    int t,a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << lcm(a,b) << endl;
    }
    return 0;
}