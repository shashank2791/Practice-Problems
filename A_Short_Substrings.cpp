#include<bits/stdc++.h>
using namespace std;
void solve(string a)
{
    string b;
    int n = a.length();
    if(n == 2)
    {
        cout<<a<<endl;
    }
    else
    {
        b = b + a[0];
        for(int i=1;i<n;i+=2)
        {
            if(i == n-1)
            {
               string c = b + a[n-1];
               cout<<c<<endl;
               return;
            }
            else
            {
                b = b + a[i];
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        solve(a);

    }
    return 0;
}