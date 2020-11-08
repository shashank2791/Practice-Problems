#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll matrix[12][12];
bool issafe(int i,int j,int n)
{
    for(int k=0;k<n;k++)
    {
        if(matrix[k][j]==1)
        {
            return false;
        }
        if(matrix[i][k]==1)
        {
            return false;
        }
    }
    for(int k=i,l=j;k>=0&&l>=0;k--,l--)
    {
        if(matrix[k][l]==1)
        {
            return false;
        }

    }
    for(int k=i,l=j;k>=0&&l<n;l++,k--)
    {
        if(matrix[k][l]==1)
        {
            return false;
        }
    }
    return true;
}
void placenqueen(int row,int n)
{
    if(row==n)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<matrix[i][j]<<" ";
                }

            }
            cout<<endl;
                return ;

        }
        for(int j=0;j<n;j++)
        {
            if(issafe(row,j,n))
            {
                matrix[row][j]=1;
                placenqueen(row+1,n);
                matrix[row][j]=0;
            }
        }
}
placeNQueens(int n)
{
    memset(matrix,0,11*11*sizeof(int));
    placenqueen(0,n);
}
int main(){

  int n;
  cin >> n ;
  placeNQueens(n);

}
