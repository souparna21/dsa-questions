/*
Computing Power

INPUT: x=2, n=3
OUTPUT: 8

INPUT: x=3, n=4
OUTPUT: 81

INPUT: x=5, n=0
OUTPUT: 1
*/

/* ---------------------- Brute force solution --------------------*/ 
       /*---Time complexity: O(n), Space Complexity: O(1)----*/
/*
#include <iostream>

using namespace std;

int computePower(int a, int n)
{
    int result = 1;
    for(int i=0; i<n; i++)
    {
        result = result * a;
    }
    return result;
}

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int a,n;
        cin >> a >> n;
        cout << computePower(a,n) << endl;
    }
    return 0;
}
*/

/* ---------------------- Recursive solution --------------------*/ 
       /*---Time complexity: O(log(n)), Space Complexity: O(log(n))----*/
/*
#include <iostream>

using namespace std;

int computePower(int a, int n)
{
    // base case
    if(n == 0)
    {
        return 1;
    }
    int temp = computePower(a, n/2);
    temp = temp*temp;
    if(n%2 == 0)
    {
        return temp;
    }
    else 
    {
        return temp*a;
    }
}
int computePower(int a, int n)
// {
//     // Base case
//     if(n == 0)  return 1;
//     // Recursive case
//     int res = computePower(a, n/2);
//     if(n%2) return res*res*a;
//     else return res*res;
// }

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int a,n;
        cin >> a >> n;
        cout << computePower(a,n) << endl;
    }
    return 0;
}
*/

/* ---------------------- Iterative solution(Binary Exponentiation) --------------------*/ 
       /*---Time complexity: O(log(n)), Space Complexity: O(1)----*/
#include <iostream>

using namespace std;

// int computePower(int a, int n)
// {
//     int result = 1;
//     while(n > 0)
//     {
//         if(n%2 != 0)
//         {
//             result = result*a;
//         }
//         a *= a;
//         n /= 2;
//     }
//     return result;
// }

int computePower(int a, int n)
{
    int res = 1;
    while(n > 0)
    {
        // Check if the least significant bit is 0 or 1 and if 1 then do (res *= a)
        if(n & 1)   res *= a;
        // Keep multiplying the number to keep track
        a *= a;
        // Shift the while binary number a bit towards right side
        n >>= 1;
    }
    return res;
}

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int a,n;
        cin >> a >> n;
        cout << computePower(a,n) << endl;
    }
    return 0;
}