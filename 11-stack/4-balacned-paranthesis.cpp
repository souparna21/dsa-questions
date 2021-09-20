// Find out if the given string of paranthesis is balanced or not.
#include <bits/stdc++.h>

using namespace std;

bool matching(char a, char b)
{
    return (a=='(' && b==')' ||
            a=='{' && b=='}' ||
            a=='[' && b==']');
}

bool isValid(string &str) {
    stack <char> s;
        
    for(char x: str)
    {
        if(x=='(' || x=='{' || x=='[')
            s.push(x);
        else{
            if(s.empty() == false)
                return false;
            if(matching(s.top(),x) == false)
                return false;
            else
                s.pop();
        }
    }
    return (s.empty() == true);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string st;
        getline(cin,st);
        if(isValid)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}