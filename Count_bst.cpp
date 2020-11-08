/*
Given an integer N, find and return the count of unique Binary search trees (BSTs)
 are possible with nodes valued from 1 to N.
Output count can be very large, so return the count modulo 10^9+7.
Input Format :
Integer n
Output Format :
Count of BSTs
Contraints :
1<= N <=1000
Sample Input 1:
8
Sample Output 1:
1430
Sample Input 2:
3
Sample Output 2:
5
*/

#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int countBST( int n)
{

   int dp[n + 1];

    for(int i=0;i<=n;i++)
    {
        dp[i]=0;
    }

   if(n==1)
        return 1;
    dp[0] = 1;
    dp[1] = 1;

    int temp=pow(10,9)+7 ;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {

            //dp[i] = dp[i] + (dp[i - j] * dp[j - 1]);
           long int  temp2  = ( long int ) (dp[i - j]%temp * ( long int)dp[j - 1]%temp)%temp;
            dp[i]=(dp[i]%temp+temp2%temp)%temp;
    }
    }
   int result = dp[n];
    return result;


}





int main()
{
	int n ;
	cin>>n;
	cout<<countBST(n);
	return 0;
}
