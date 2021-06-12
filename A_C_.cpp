#include<bits/stdc++.h>
using namespace std;

/*int get_max(int a,int b)
{
    return ((a>b)?a:b);
}
int get_min(int a,int b)
{
    return ((a<b)?a:b);
}*/
void solve(int a ,int b, int n)
{
    int t = 0;
    if(a>n || b>n)
    {
        cout<<"0"<<"\n";
        return ;
    }
    if(a+b > n)
    {
        cout<<"1"<<"\n";
        return;
    }
    int temp = max(a,b);
    int temp2 = min(a,b);

   while(temp <= n && temp2 <= n )
    {
            int c,d;
            c = max(temp,temp2);
            d = min(temp,temp2);
            temp = c;
            temp2 = d;
            temp2 += temp;
            t++;
    }
    cout<<t<<"\n";
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        solve(a,b,n);
    }
    return 0;
}