#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x,y,n,k;
    cin>>x>>y>>n;
    int t = (int)n/x;
    int r = (int)n%x;
    if((n - t*x) >= y)
    {
        k = t*x+y;  
    }
    else
    {
        k = ((t-1)*x)+y;
    }
   
    cout<<k<<"\n";
   
    
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