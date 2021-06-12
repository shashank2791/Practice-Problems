#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<"1"<<"\n";
        return;
    }
    int mid;
    if(n%2==0)
    {
     mid = n/2;
    }
    else
    {
      mid = (n/2)+1;
    }
  
    cout<<mid<<"\n";
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}