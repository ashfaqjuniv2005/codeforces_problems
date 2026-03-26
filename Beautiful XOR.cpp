// https://codeforces.com/contest/2162/problem/C

#include<bits/stdc++.h> 
using namespace std;
#define ll long long
void solve() {
	
	ll a, b; cin >> a >> b;
	ll k = __lg(a);
	if (b < (2 << k)){
		cout << 2 << '\n';
		cout << (2 << k) - 1 - a << '\n';
		cout << (2 << k) - 1 - b << '\n';
	} else {
		cout << "-1\n";
	}
}


int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	ll T ;
	cin >> T;
	while (T--) {
		solve ();
	}
	return 0;
}
