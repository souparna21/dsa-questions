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
// #include <iostream> 

// using namespace std;

// int countZeros(int n)
// {
//     int count = 0;
//     for(int i=5; i<n; i=i*5)
//     {
//         count += n/i;
//     }
//     return count;
// }

// int main()
// {
//     int t,n;
//     cin >> t;
//     while(t--)
//     {
//         cin >> n;
//         cout << countZeros(n) << endl;
//     }
//     return 0;
// }

/*
4617 ÷ 5 = 923.4 (write down 923)
923.4 ÷ 5 = 184.68 (write down 184)
184.68 ÷ 5 = 36.936 (write down 36)
36.936 ÷ 5 = 7.3827 (write down 7)
7.3827 ÷ 5 = 1.47744 (write down 1)
1.47744 ÷ 5 < 1 (so don't write anything down)
At which point, you're done doing divisions.

Turn to your scratch paper where you've written down the whole numbers (namely, 923,184, 36, 7, and 1), and add them up to get 1151, as before.
*/
#include<iostream>

using namespace std;

int numberOfZero(int n)
{
    int count = 0;
    while(n>=1)
    {
        n /= 5;
        count += n;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << numberOfZero(n) << endl;
    return 0;
}