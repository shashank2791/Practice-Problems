/*
You are given a circular list of students as follows:
0 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 11
This list is circular, means that 11 will follow 0 again. You will be given the student number
‘i’ and some position ‘p’. You will have to tell that if the list will start from (i+1)th student,
 then which student will be at pth position.
Input Format:
First line will have an integer ‘t’, denoting the number of test cases.
Next line will have two space separated integers denoting the value of ‘i’ and ‘p’ respectively.
Output Format:
Print ‘t’ lines containing single integer denoting the student number.
Constraints:
1 <= t <= 10^5
0 <= i <= 11
1 <= p <= 12
Sample Input:
2
2 3
5 8
Sample Output:
5
1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,p;
    int result[t];
    int arr[]={0,1,2,3,4,5,6,7,8,9,10,11};
    for(int j=0;j<t;j++)
    {
        cin>>i>>p;
        if(i+1+p<=11)
        {
           result[j]=arr[i+p];
        }
        else
        {
            result[j]=arr[(i+p)%12];
        }

    }
    for(int k=0;k<t;k++)
    {
        cout<<result[k]<<"\n";
    }
	return 0;
}

