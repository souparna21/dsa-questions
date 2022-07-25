// Extra info- https://www.tutorialspoint.com/unsigned-and-signed-binary-numbers
#include<iostream>

using namespace std;

int main()
{
    // For Unsigned Integers(0 to (2^32-1))
    // unsigned int x=1;
    // cout << (~x) << endl;
    // x=5;
    // cout << (~x) << endl;

    // For signed integers (-2^31 to (2^31-1))
    int x=1;
    cout << (~x) << endl;
    x=5;
    cout << (~x) << endl;

    return 0;
}