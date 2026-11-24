// https://codeforces.com/problemset/problem/822/A
// Just simple factorial problem

#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define Input  freopen("input.txt", "r", stdin);
#define Output freopen("output.txt", "w", stdout);

typedef vector<pair<int, int>> vpi;
typedef vector<vpi> vvpi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

#define ppb pop_back
#define pb push_back
#define empb emplace_back
#define show(z) cout<<z<<endl;

#define rip1(i,a,b) for(int i=a;i<b;i++)
#define rip2(i,a,b) for(int i=a;i<=b;i++)
#define rip3(i,a,b) for(int i=a;i>=b;i--)
#define rip4(i,a,b) for(int i=a;i>b;i--)
#define vi vector<int>
#define vll vector<long long>
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mii map<int,int>
#define mll map<long long,long long>
#define empb emplace_back
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define Yes cout << "Yes" << endl; 
#define No cout <<"No"<< endl;
#define yes cout <<"YES"<< endl;
#define no cout << "NO" << endl;
#define first_max LLONG_MAX
#define first_min LLONG_MIN
#define F first
#define S second
#define len(x) int((x).size())
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define sersort(v) sort(v.begin(),v.end());
#define rsort(v) sort(v.rbegin(),v.rend());
#define flip(v) reverse(v.begin(),v.end());
#define MOD 1000000007
#define INF 1e9
#define mp make_pair
#define fi first
#define se second


void solve(){

    ll n,k,res=1;cin>>n>>k;
    ll ans=min(n,k);
    rip2(i,1,ans){
   res*=i;
    }
    cout<<res<<endl;
 }

signed main () {
fio
 
//tt 
solve();
   
    return 0;
}
