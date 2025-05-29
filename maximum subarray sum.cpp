//! In The Name Of Allah

//ashfaq hossain

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define pob pop_back
#define make M
#define F first
#define S second
#define all(s) (s).begin(), (s).end()
#define rall(s) s.rbegin(), s.rend()
#define sz(x) (int)x.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define log2(x) 31 - __builtin_clz(x)
#define getbit(n, i) (((n) & (1LL << (i))) != 0)
#define msb(x) 31 - __builtin_clz(x)
#define TxtIO                         \
    freopen("sample.in", "r", stdin); \
    freopen("sample.out", "w", stdout);
#define Fokinnir_moto_kaj_koris_na \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define PI acos(-1)

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef array<int,3> tu;

//#define DEBUG
#define TEM template <class... T>
TEM istream& operator>>(istream& in, pair<T...>& p) { return in >> p.first >> p.second; }
TEM ostream& operator<<(ostream& out, const pair<T...>& p) { return out << '(' << p.first << ", " << p.second << ')'; }
#define def_in(cont) TEM istream& operator>>(istream& in, cont<T...>& A) { for (auto& a : A) in >> a; return in; }
#define def_out(cont) TEM ostream& operator<<(ostream& out, const cont<T...>& A) { int i = 0; auto it = A.begin(); while (it != A.end()) out << &" "[!i++] << *it++; return out; }
def_in(vector) def_in(deque) def_out(vector) def_out(deque) def_out(set) def_out(map) def_out(multiset)

TEM void c_in(T&... args) { ((cin >> args), ...); }
TEM void c_out(const T&... args) { int i = 0; ((cout << &" "[!i++] << args), ...) << '\n'; }
void c_out(bool b) { c_out(b ? "YES" : "NO"); }

#ifdef DEBUG
TEM void c_err(const T&... args) { int i = 0; ((cerr << &" "[!i++] << args), ...) << '\n'; }
#else
#define c_err(...)
#endif
#define dbg(args...) c_err(#args, '=', args)

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

/*
int p = 237,mod = 1000000289;
auto Goriber_function = [&] (int m) -> int{

};
*/
const ll oo = 1e18;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 123;

void Goriber_solve()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi ar(n);
    cin >> ar;
    int mx = 0,sum = 0;
    int lala = count(all(s),'1');
    for(int i = 0; i < n; i++){
        if(sum < 0 || s[i] == '0')sum = 0;
        sum += ar[i];
        mx = max(sum,mx);
        if(sum < 0)sum = 0;
    }
    if(lala == n){
        if(mx == k){
            py;
            for(int i = 0; i < n; i++){
                cout << ar[i] << " ";
            }
        }
        else pn;
        return;
    }
    if(mx > k){
        pn;
        return;
    }
    vi suf(n + 1,0),pre(n+1,0);
    sum = 0;
    for(int i = 0; i < n; i++){
        if(sum < 0 || s[i] == '0')sum = 0;
        sum += ar[i];
        if(sum < 0)sum = 0;
        pre[i] = sum;
        if(sum < 0)sum = 0;
    }
    sum = 0,mx = 0;
    for(int i = n - 1; i >= 0; i--){
        if(sum < 0 || s[i] == '0')sum = 0;
        sum += ar[i];
        mx = max(sum,mx);
        if(sum < 0)sum = 0;
        suf[i] = sum;
        if(sum < 0)sum = 0;
    }
    vi ans(n+1,-1);
    int ind = -1;
    for(int i = 0; i < n; i++){
        if(s[i] != '0')continue;
        int cnt1 = 0,cnt2 = 0;
        if(i != 0)cnt1 = pre[i-1];
        if(i != n - 1)cnt2 = suf[i+1];
        ans[i] = (k - (cnt1 + cnt2));
        ind = i;
        break;
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1')ans[i] = ar[i];
        else if(i != ind)ans[i] = -1e9;
    }
    py;
    for(int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    // for(int i = 0; i < n; i++){
    //     cout << suf[i] << " ";
    // }
    // cout << endl;
}
signed main()
{
    Fokinnir_moto_kaj_koris_na
    int _ = 1,tc = 0;
    cin >> _;
    while (_--)
    {
        //cout<<"Case "<<++tc<<": ";
        Goriber_solve();
    }
}
