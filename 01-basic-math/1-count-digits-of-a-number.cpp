/*
Cont the numbers present in a digit.

INPUT: 4322
OUTPUT: 4
*/

/* --------------- Iterative Solution ---------------*/

/*
#include<iostream>

using namespace std;

int countDigit(long n)
{
    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    return count;
}

int main()
{
    long n;
    cin >> n;
    cout << countDigit(n) << endl;
    return 0;
}
*/

/* --------------- Recursive Solution ---------------*/

/*
#include<iostream>

using namespace std;

int countDigit(long n)
{
    if(n == 0){
        return 0;
    }
    return 1+countDigit(n/10);
}

int main()
{
    long n;
    cin >> n;
    cout << countDigit(n) << endl;
    return 0;
}
*/

/* --------------- logarithmic Solution ---------------*/

#include<iostream>
#include<cmath>

using namespace std;

int countDigit(long n)
{
    if(n == 0)
    {
        return 0;
    }
    return floor(log10(n) + 1);
}

int main()
{
    long n;
    cin >> n;
    cout << countDigit(n) << endl;
    return 0;
}