#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int> // for max and min heaps
#define pqs             priority_queue<int,vi,greater<int> >  // for max and min heaps
#define setbits(x)      __builtin_popcountll(x) // no. of set bits in a number
#define zrobits(x)      __builtin_ctzll(x) // count no of bits with value zero before the the first 1 from right to left
#define mod             1000000007 //1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x // till specific decimal places 
#define mk(arr,n,type)  type *arr=new type[n];s
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count()); // random shuffler
 

 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
   string s;
   cin>>s;
   vector<int> v;
   int res = 0;
//   int n = s.length();
//   cout<<n<<"\n";
   
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='1')
       {
           res++;
       }
       else if(s[i] == '0')
       {
           v.push_back(res);
           res = 0;
       }
   }
   v.push_back(res);
   if(v.size() == 0)
   {
       cout<<res<<"\n";
       return;
   }
   sort(v.begin(),v.end(),greater<int>());
   vector<int> v2;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]!=0)
       {
           v2.pb(v[i]);
       }
   }
//   for(int i=0;i<v2.size();i++)
//   {
//       cout<<v2[i]<<" ";
//   }
   int ans = 0;
   for(int i = 0;i<v2.size();i++)
   {
       if(i%2==0)
       ans += v2[i];
   }
   cout<<ans<<"\n";
}

int32_t main()
{
    w(t)
    {
        solve();
    }
    c_p_c();
    return 0;
}