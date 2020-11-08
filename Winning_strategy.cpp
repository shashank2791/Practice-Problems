/*
Our college team is going to the sports fest to play a football match with our coach.
There are n players in our team, numbered from 1 to n.
The coach will know the position of another team hence create a winning strategy. He creates the
position of every player in a specific order so that we will win and then he starts swapping two
players at a time to form the positions.
He swaps payers in such a way that it can't be understood by another team:
1. Any player can swap with the player directly at front him
2. One player can swap at most with two other players
If the specific order is formed then our team will win otherwise we will lose
Input Format
The First line contains numbers of players in team: n
The second line contains n space separated integers denoting the specific position of players:
i-th integer denotes the position of Ai player in winning strategy
Output Format
If our team wins print "YES"(without quotes) and in next line print the minimum numbers of swapping
required to form this specific order otherwise print "NO"(without quotes)
Constraints
1 =< n <= 10^5
1 <= Ai <= n
Sample Input1:
5
2 1 5 3 4
Sample Output1:
YES
3
Sample Input2:
5
2 5 1 3 4
Sample Output3:
NO
Explaination
In the First Sample case,
    Initial state: 1 2 3 4 5
    Three moves required to form this order:
    1 2 3 4 5 -> 1 2 3 5 4 -> 1 2 5 3 4 -> 2 1 5 3 4
In the second case, no way to form this specific order
*/

#include<bits/stdc++.h>

using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main() {
int n;
    cin>>n;
    int arr[n];
    int total_swaps=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=n-1;j>=0;j--)
    {
         if(j==0&&arr[j]==j+1)
        {
            cout<<"YES"<<"\n";
            cout<<total_swaps;
        }
        if(arr[j]==j+1)
        {

        }
        else
        {
            if(j-1>=0||j-2>=0)
            {
            if(arr[j-1]==j+1)
            {
                swap(&arr[j-1],&arr[j]);
                    total_swaps+=1;
            }
            else if(arr[j-2]==j+1)
            {
                swap(&arr[j-2],&arr[j-1]);
                swap(&arr[j-1],&arr[j]);
                total_swaps+=2;

            }
            else
            {
            cout<<"NO";
            break;
            }

            }
        }
    }
 return 0;
}
