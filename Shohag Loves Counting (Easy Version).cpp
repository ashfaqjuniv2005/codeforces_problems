#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
int mad(int &a, int b) {
    a += b;
    if (a >= mod)
        a -= mod;
    return a;
}
vector<int> d[100100], dd[100100];
int pr[100100], top, mu[100100];
bool np[100100];
void sieve() {
    mu[1] = 1;
    for (int i = 2; i < 100100; i++) {
        if (!np[i])
            pr[++top] = i, mu[i] = -1;
        for (int j = 1; j <= top && i * pr[j] < 100100; j++) {
            np[i * pr[j]] = true;
            if (i % pr[j] == 0)
                break;
            mu[i * pr[j]] = -mu[i];
        }
    }
}
int tag[100100], f[100100], fs[100100];

void solve() {
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
        tag[i] = fs[i] = f[i] = 0;
    int ans = 0;
    for (int i = m; i >= 1; i--) { // i
        for (int g : d[i]) {       // g
            fs[g] = 0;
            for (int hh : dd[i / g]) {
                int h = hh * g;
                if (mu[hh] > 0)
                    mad(fs[g], tag[h]);
                else
                    mad(fs[g], mod - tag[h]);
            }
            mad(fs[g], mod - f[g]);
            mad(fs[g], fs[g]);
            mad(ans, fs[g]);
            mad(f[g], fs[g]);
            for (int gg : d[g])
                mad(tag[gg], fs[g]);
        }
        mad(f[i], 1);
        // cerr<<"F:"<<f[i]<<'\n';
        for (int k : d[i])
            mad(tag[k], 1);
        ans++;
        // cerr<<ans<<'\n';
    }
    printf("%d\n", ans);
}
int main() {
    sieve();
    for (int i = 1; i <= 100005; i++)
        for (int j = i; j <= 100005; j += i) {
            d[j].push_back(i);
            if (mu[i])
                dd[j].push_back(i);
        }
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

