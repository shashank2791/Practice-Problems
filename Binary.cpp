#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void rec (vector<int> a,int l, int r,int key){
    int mid = (l+r)/2;
    if(key<mid){
      rec(a,l,mid-1,key);
    }
    else if (key>mid)
    {
      rec(a,mid+1,r,key);
    }
    else{
      cout<<mid<<"\n";
    }
}
void binary(vector<int> a, int key){
  sort(a.begin(),a.end());
  rec(a,0,a.size()-1,key);
}
void solve()
{
  int n;
  cin>>n;
  vector<int> a;
  for( int i =0 ;i<n;i++){
    a.push_back(i);
  }
  int key;
  cin>>key;
  binary(a,key);
}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
  return 0;
}
