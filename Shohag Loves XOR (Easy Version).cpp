//collected from tourist 


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)(x.size())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define powmod(a, b, m) ([](int a, int b, int m){int r=1;while(b){if(b&1)r=r*a%m;a=a*a%m;b>>=1;}return r;})(a, b, m)
#define modinv(a, m) powmod(a, m - 2, m)

#define sort_asc(v) sort(all(v))
#define sort_desc(v) sort(rall(v))
#define sortrng(v, l, r) sort(v.begin() + l, v.begin() + r)

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repr(i, a, b) for (int i = a; i >= b; i--)
#define each(x, v) for (auto &x : v)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

bool cmp(pii a, pii b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}
const int mod=1e9+7;

void solve() {
    int x,m;
    cin>>x>>m;
    int cnt=0;
    int v=x,t=0,a=1;
    while(v>0){
        a<<=1;
        v>>=1;
    }
    a--;
    for(int i=1;i<=(min(m,a));i++){
        if(i!=x){
            int y=x^i;
        
        if(x%y==0||i%y==0){cnt++;}}
    }
    
   
   cout<<cnt<<endl;
 
   }
    
    
    
   
    

int32_t main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
