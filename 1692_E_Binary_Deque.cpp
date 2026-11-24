// Link: https://codeforces.com/contest/1692/problem/E

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
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>


#define countsetbitsll(x) __builtin_popcountll(x)

#define show(z) cout << z << endl
#define printtwo(a,b) cout << a << " " << b << endl
#define display(vec) for(auto value:vec) cout << value << " " 
#define printpair(vec) for(auto value:vec) cout << value.first << " " << value.second << endl
#define rip1(i,a,b) for(int i=a;i<b;i++)
#define rip2(i,a,b) for(int i=a;i<=b;i++)
#define rip3(i,a,b) for(int i=a;i>=b;i--)
#define rip4(i,a,b) for(int i=a;i>b;i--)
#define pb push_back
#define ppb pop_back
#define empb emplace_back
#define vi vector<int>
#define vll vector<long long>
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mii map<int,int>
#define mll map<long long,long long>

#define Yes cout << "Yes" << endl; 
#define No cout <<"No"<< endl;
#define yes cout <<"YES"<< endl;
#define no cout << "NO" << endl;
#define Sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
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
#define Boro(vec) *(max_element(vec.begin(),vec.end()))
#define Chuto(vec) *(min_element(vec.begin(),vec.end()))
#define minidx(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxidx(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())




void solve() {
	
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll i = 0, j = 0, sum = 0, ans = 0;
    bool ok = false;
    while (j < n)
    {
        sum += v[j];
        if (sum < k)
            j++;
        else if (sum == k)
        {
            ok = true;
            ans = max(ans, j - i + 1);
            j++;
        }
        else if (sum > k)
        {
            sum -= v[i];
            i++;
            j++;
        }
    }
    if (!ok)
        cout << -1 << '\n';
    else
        cout << (n - ans) << '\n';
}

signed main () {
fio
 
tt solve();
   
    return 0;
}
