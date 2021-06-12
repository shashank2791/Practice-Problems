#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
int n;
int arr[55];
void solve()
{
  cin>>n;
		rep(x,0,2*n) cin>>arr[x];
		
		sort(arr,arr+2*n);
		
		rep(x,0,n) cout<<arr[x]<<" "<<arr[x+n]<<" ";
		cout<<endl;
}
int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll test;
  cin>>test;
  while(test--)
  {
    solve();
  }
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  return 0;
}
