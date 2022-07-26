/*
A positive integer is given. Find the number of set bits of its binary representation.
i/p- n=5
o/p- 2
i/p- n=7
o/p- 3
i/p- n=13
o/p- 3
*/

/* ----------------------Iterative solution(Brute force) by right shit or dividing by 2 --------------------*/ 
       /*---Time complexity: θ(Total bits in n), Space Complexity:   ----*/

/*
#include<iostream>

using namespace std;

int setBits(int n)
{
    int count = 0;
    while(n != 0)
    {
        if(n&1) count++;
        n >>= 1;

        // another way to express it
        // count += (n&1)
        // n >>= 1;

        // We can achieve this by dividing by 2
        // if(n%2) count++;
        // n /= 2;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << setBits(n) << endl;
    }
    return 0;
}
*/

/* ----------------------Optimized solution(Brian Kernighan's algorithm) --------------------*/ 
       /*---Time complexity: θ(no of set bits in n), Space Complexity:   ----*/

/*
#include<iostream>

using namespace std;

int setBits(int n)
{
    int count = 0;
    while(n != 0)
    {
        n = (n&(n-1)); 
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << setBits(n) << endl;
    }
    return 0;
}
*/

/* ---------------------- Optimized solution(look up table method) --------------------*/ 
/*---Time complexity: θ(1) assuming that initialization is done beforehand, Space Complexity:   ----*/

#include<iostream>

using namespace std;

// Pre processing
int table[256];

void initialize()
{
    table[0] = 0;
    for(int i=1; i<256; i++)
    {
        // Store the number of set bits corresponding to the value of i
        table[i] = (i&1) + table[i/2];
    }
}

int setBits(int n)
{
    int count = table[n & 0xff];
    n >>= 8;
    count += table[n & 0xff];
    n >>= 8;
    count += table[n & 0xff];
    n >>= 8;
    count += table[n & 0xff];

    return count;

    /*
    return (table[n & 0xff] + table[(n>>8) & 0xff] + table[(n>>16) & 0xff] + table[(n>>24) & 0xff]);
    */
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        initialize();
        cout << setBits(n) << endl;
    }
    return 0;
}