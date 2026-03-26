// https://codeforces.com/contest/2182/problem/B

#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    
    cout << min((int)log2(3*a+2), (int)log2(3*b+2)-1) << endl;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
