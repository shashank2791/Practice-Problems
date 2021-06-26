#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int N = 1e7+10;
long long int ar[N];
void solve()
{
  int n,m;
  cin>>n>>m;
  while(m--){
    int a,b,d;
    cin>>a>>b>>d;
    ar[a] +=d;
    ar[b+1] -= d;
  }
  for(int i=1;i<=n;i++){
    ar[i] = ar[i-1]+ar[i];
  }
  long long mx = -1;
  for(int i=1;i<=n;i++){
    if(mx<=ar[i]){
      mx = ar[i];
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif 
    solve();
  return 0;
}
