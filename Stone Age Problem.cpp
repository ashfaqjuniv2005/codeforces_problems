#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, q;
    cin >> n >> q;
    ll sum = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }
    ll def = 0;
    ll time = 1;
    ll time2 = 0;
    vector<ll> override(n, 0), update(n, 0);
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll val;
            ll x, y;
            cin >> x >> y;
            x--;
            if (update[x] > time2)
            {
                val = override[x];
            }
            else if (time2 > 0)
            {
                val = def;
            }
            else
            {
                val = a[x];
            }
            sum -= val;
            sum += y;
            update[x] = time;
            override[x] = y;
        }
        else
        {
            ll x;
            cin >> x;

            sum = n * x;
            def = x;
            time2 = time;
        }
        time++;
        cout << sum << endl;
    }

    return 0;
}
