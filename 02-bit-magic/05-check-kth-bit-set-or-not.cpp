/*
Check if k-th bit is set or not. (k<=No. of bits in binary representation)
i/p = n=5, k=1
o/p = yes
i/p = n=8, k=2
o/p = no
i/p = n=0, k=3
o/p = yes
*/

// Using left shift operation
// #include<iostream>

// using namespace std;

// void setOrNot(int n, int k)
// {
//     if(n & (1 << (k-1)) ) cout << "Yes" << endl;
//     else    cout << "No" << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n,k;
//         cin >> n >> k;
//         setOrNot(n,k);
//     }
//     return 0;
// }

// Using right shift operation
#include<iostream>

using namespace std;

void setOrNot(int n, int k)
{
    n >>= (k-1);
    if(n&1) cout << "Yes" << endl;
    else    cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        setOrNot(n,k);
    }
    return 0;
}