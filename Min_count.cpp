/*
Given an integer N, find and return the count of minimum numbers, sum of whose squares is equal to N.
That is, if N is 4, then we can represent it as : {1^2 + 1^2 + 1^2 + 1^2} and {2^2}.
 Output will be 1, as 1 is the minimum count of numbers required.
Note : x^y represents x raise to the power y.
Input Format :
Integer N
Output Format :
Required minimum count
Constraints :
1 <= N <= 1000
Sample Input 1 :
12
Sample Output 1 :
3
Sample Output 1 Explanation :
12 can be represented as :
1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1
1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 1^1 + 2^2
1^1 + 1^1 + 1^1 + 1^1 + 2^2 + 2^2
2^2 + 2^2 + 2^2
As we can see, the output should be 3.
Sample Input 2 :
9
Sample Output 2 :
1
*/


#include<iostream>
using namespace std;
#include "Solution.h"

int minCount(int n){

    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    int* dp = new int[n + 1];

    // getMinSquares table for base case entries
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    // getMinSquares rest of the table using recursive
    // formula
    for (int i = 4; i <= n; i++) {
        // max value is i as i can always be represented
        // as 1*1 + 1*1 + ...
        dp[i] = i;

        // Go through all smaller numbers to
        // to recursively find minimum
        for (int x = 1; x <= ceil(sqrt(i)); x++) {
            int temp = x * x;
            if (temp > i)
                break;
            else
                dp[i] = min(dp[i], 1 + dp[i - temp]);
        }
    }

    // Store result and free dp[]
    int res = dp[n];
    delete[] dp;

    return res;

}
int main(){

    int num;
    cin >> num;
    cout << minCount(num);

}



