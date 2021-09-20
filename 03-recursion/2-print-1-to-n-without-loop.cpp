#include <iostream>
using namespace std;

class gfg
{
public:
    void printNos(unsigned int n)
    {
        if (n > 0)
        {
            printNos(n - 1);
            cout << n << " ";
        }
        return;
    }
};

int main()
{
    gfg g;
    g.printNos(100);
    return 0;
}