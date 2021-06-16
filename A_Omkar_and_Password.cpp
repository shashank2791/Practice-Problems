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
   int n;
   cin>>n;
   int arr[n];
   int f = 0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       
   }
   for(int i = 0;i<n;i++)
   {
       if(arr[i]!= arr[0])
       {
           cout<<"1\n";
           return;
       }
   }
   cout<<n<<"\n";
   return;
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