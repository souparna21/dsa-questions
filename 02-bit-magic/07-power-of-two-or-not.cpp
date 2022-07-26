/*
Check if a number is power of 2, i.e- 2⁰, 2¹, 2³ ..., or not
i/p- n = 4
o/p- Yes
i/p- n=6
o/p- no
i/p- n=16
o/p- Yes
*/

/* ----------------------Iterative solution(Brute force) --------------------*/ 
       /*---Time complexity: , Space Complexity: O(1)----*/
/*
#include<iostream>

using namespace std;

bool powerOftwo(int n)
{
    if(n == 0)  return false;
    while(n != 1)
    {
        if(n%2)    return false;
        n /= 2;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(powerOftwo(n))   cout << "Yes" << endl;
        else    cout << "No" << endl;
    }
    return 0;
}
*/

/* ---------------------- Optimized solution --------------------*/ 
       /*---Time complexity: , Space Complexity: O(1)----*/

/*
#include<iostream>

using namespace std;

bool powerOftwo(int n)
{
    // If any number is power of 2 it's binary equevalent will have only one set bit
    if(__builtin_popcount(n) == 1)  return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(powerOftwo(n))   cout << "Yes" << endl;
        else    cout << "No" << endl;
    }
    return 0;
}
*/

/* ---------------------- Optimized solution --------------------*/ 
       /*---Time complexity: θ(1) , Space Complexity: O(1)----*/

#include<iostream>

using namespace std;

bool powerOftwo(int n)
{
    if(n == 0)  return false;
    // It converts the right most set bit to 0
    return ((n & (n-1)) == 0);
    
    // return (n!=0) && ((n & (n-1)) == 0);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(powerOftwo(n))   cout << "Yes" << endl;
        else    cout << "No" << endl;
    }
    return 0;
}