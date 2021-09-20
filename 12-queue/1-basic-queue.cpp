#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        q.push(x);
    }

    cout << q.size() << endl;

    q.pop();

    cout << q.front() << " "  << q.back() << endl;

    q.pop();

    cout << q.front() << " " << q.back() << endl; 

    if(q.empty() == true)
    {
        cout << "It's empty";
    }
    else 
    {
        cout << "Not empty";
    }
    return 0;
}