/*
Find out if a number is palindrome or not(A single digit number is always a palindrome).

INPUT: 78987
OUTPUT: YES

INPUT: 8668
OUTPUT: YES

INPUT: 7
OUTPUT: YES

INPUT: 367
OUTPUT: NO
*/
#include<iostream>

using namespace std;

bool isPalindrome(long n)
{
    // if(n <= 9) return true;
    int reversedNumber = 0;
    int temp = n;
    while(temp != 0){
        int lastDigit = temp%10;
        reversedNumber = reversedNumber*10 + lastDigit;
        temp = temp/10;
    }
    return (reversedNumber == n);
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        if(isPalindrome(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}