//source from tourist

#include "bits/stdc++.h"
using namespace std;
using ll = long long;

const int N = 1000000;
const int MOD = 998244353;

inline int add(int a, int b) { a += b; if (a >= MOD) a -= MOD; if (a < 0) a += MOD; return a; }
inline int sub(int a, int b) { a -= b; if (a < 0) a += MOD; return a; }
inline int mul(ll a, ll b) { return int(a * b % MOD); }

vector<int> dv[N + 1];  // dv[x] = all divisors of x
int mu[N + 1];          // Möbius function
int dp[N + 1];          // stores cumulative f[d] as negative values
int mut[N + 1];         // intermediate array for Möbius inversion
int ns[N + 1];          // prefix sums of answers

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1) Precompute divisors
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            dv[j].push_back(i);
        }
    }

    // 2) Compute Möbius function
    mu[1] = 1;
    for (int i = 1; i <= N; ++i) {
        for (int j = 2; i * j <= N; ++j) {
            mu[i * j] -= mu[i];
        }
    }

    // 3) Main DP loop
    ll ans_acc = 0;
    for (int i = 1; i <= N; ++i) {
        // 3.1) For each divisor d of i, compute tmp = 2*(sum_{s|d} mut[s] + dp[d] + 1)
        for (int d : dv[i]) {
            ll tmp = 0;
            for (int s : dv[d]) {
                tmp += mut[s];
            }
            tmp += dp[d];
            tmp += 1;
            tmp %= MOD;
            tmp = (tmp * 2) % MOD;

            // 3.2) Update dp[d]
            dp[d] = sub(dp[d], int(tmp));

            // 3.3) Distribute via Möbius inversion
            int rem = i / d;
            for (int nd : dv[rem]) {
                int idx = d * nd;
                mut[idx] = add(mut[idx], mul(tmp, mu[nd]));
            }
        }

        // 3.4) Compute ans[i] = dp[i] + 1 + sum_{j|i} mut[j]
        ll cur = dp[i] + 1;
        for (int j : dv[i]) {
            cur += mut[j];
        }
        cur %= MOD;
        ans_acc = (ans_acc + cur) % MOD;
        ns[i] = int(ans_acc);
    }

    // 4) Answer queries in O(1)
    int T;
    cin >> T;
    while (T--) {
        int m;
        cin >> m;
        cout << ns[m] << '\n';
    }
    return 0;
}

