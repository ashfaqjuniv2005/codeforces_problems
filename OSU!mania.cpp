//  https://codeforces.com/contest/2009/problem/B


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lttc ll t;cin>>t; while(t--)
#define vll vector<long long>
#define vi vector<int>
#define rip(i,n) for(int i=0;i<n;i++)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define pb push_back
#define ppb pop_back
#define tt int t;cin>>t;while(t--)
#define fr(i,n) for(int i=1;i<=n;i++)
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(n) n.begin(), n.end()

void answer(){
int n;cin>>n;
string s[5000];
fr(i,n){
    cin>>s[i];
}
	for(int i=n;i>=1;i--){
		cout<<s[i].find("#")+1<<endl;
	}
}
int main(){

optimize();

lttc 
answer();

return 0;
}
