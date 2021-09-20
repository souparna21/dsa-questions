#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(20);
    s.push(21);
    s.push(22);
    s.push(23);
    s.push(24);
    s.push(25);

    cout << s.top() << " " << s.size() << endl;

    s.pop();
    s.pop();

    cout << s.top() << " " << s.size() << endl;

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}