#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m;
  cin>>n>>m;
  int arr1[n];
  int arr2[m];
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  for(int j=0;j<m;j++)
  {
    cin>>arr2[j];
  }
  sort(arr1,arr1+n);
  sort(arr2,arr2+m);

  int ans1=0,ans2;
  int j=0;
  for(int i=0;i<n;)
  {
    if(j<m)
    {
      if(arr1[i]>arr2[j])
      {
        j++;
      }
      else if(arr1[i] == arr2[j])
      {
        ans1 = 1;
        ans2 = arr1[i];
      break;
      }
      else
      {
        i++;
      }
    }
    else
    {
      break;
    }  
  }
  if(ans1==1)
  {
  cout<<"YES\n";
  cout<<ans1<<" " <<ans2<<"\n";
  return;
  }
  else
  {
    cout<<"NO\n";
  }
  
  }
int   main()
{
	   	// #ifndef ONLINE_JUDGE
	   	// freopen("input.txt","r",stdin);
	   	// freopen("output.txt","w",stdout);
	   	// #endif
      int t;
      cin>>t;
      while(t--)
      {
        solve();
      }
    	
    	return 0;
    	}