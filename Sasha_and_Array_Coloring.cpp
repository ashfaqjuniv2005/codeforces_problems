// Problem Link= https://codeforces.com/problemset/problem/1843/A


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


#define all(x) x.begin(), x.end()
#define rip4(i,a,b) for(int i=a;i>=b;i--)
#define rip1(i,a,b) for(int i=a;i<b;i++)
#define rip2(i,a,b) for(int i=a;i<=b;i++)
#define rip3(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ppb pop_back
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
#define cnt_bit(x) __builtin_popcountll(x)
#define Sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))


void solve(){
      ll n;cin>>n;
   vll a(n);
   rip1(i,0,n){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   int ans=0;
  rip1(i,0,n/2){
   ans+=(a[n-1-i]-a[i]);
  }
  cout<<ans<<"\n";
  
}



int main () {
fio
 
    tt solve();
   
    return 0;
}
