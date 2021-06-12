# include <bits/stdc++.h>
 
using namespace std;

const int inf = 1e9 + 10;
const int xn = 1e2 + 10;
int qq, n, a[xn], mn, ans;
 
int main(){
	ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
	cin >> qq;
	while (qq --){
		cin >> n, mn = inf, ans = 0;
		for (int i = 1; i <= n; ++ i)
			cin >> a[i], mn = min(mn, a[i]);
		for (int i = 1; i <= n; ++ i)
			ans += a[i] != mn;
		cout << ans << endl;
	}
 
	return 0;
}