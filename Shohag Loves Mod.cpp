// Problem Link= https://codeforces.com/contest/2039/problem/A
//collected from tourist

#include<bits/stdc++.h>
using namespace std;
void slove() {
	int n;cin>>n;
	for(int i=1;i<=n;i++) {
		cout<<2*i-1<<" ";
	}
	cout<<"\n";
}
int main(){
	int T;
	cin >> T;
	while (T--) slove();
	return 0;
}
