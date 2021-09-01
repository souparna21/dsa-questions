/*
The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.

Input:
N = 2
Output:
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3
Explanation: For N=2 , steps will be
as follows in the example and total
3 steps will be taken.
*/
#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from, int to, int aux)
    {
        // Your code here
        long long moves = 0ll; // 0ll means the long long value of 0
        if (n >= 1)
        {
            // recursive call to move top disk from "from" to aux in current call
            moves += toh(n - 1, from, aux, to);
            cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
            // increment moves
            moves++;

            // recursive call to move top disk from aux to "to" in current call
            moves += toh(n - 1, aux, to, from);
        }
        return moves;
    }
};

int main()
{

    int t;
    cin >> t; //testcases
    while (t--)
    {

        int n;
        cin >> n; //taking input N

        //calling toh() function
        Solution ob;

        cout << ob.toh(n, 1, 3, 2) << endl;
    }
    return 0;
}