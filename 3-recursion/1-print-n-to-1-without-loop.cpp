#include <iostream>

using namespace std;

void nto1(int n)
{
    // Base case
    if(n == 0) return;

    // Recursive case
    cout << n << " ";
    nto1(n-1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        nto1(n);
        cout << endl;
    }
    return 0;
}