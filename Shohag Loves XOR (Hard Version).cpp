//collected from tourist

#include<bits/stdc++.h>
using namespace std;
//9223372036854775807
void solve()
{
	long long x, m; cin >> x >> m;
	if (m <= x)
	{
		long long ans = 0;
		for (long long i = 1; i <= m; i++)
		{
			long long temp = x ^ i;
			if (temp % x == 0 || temp % i == 0)ans++;
		}
		cout << ans << endl;
		return;
	}
	long long ans = m / x - 1;
	long long temp = m - m % x;
	long long pos1 = temp ^ x;
	long long pos2 = (temp + x) ^ x;
	//cout << "ans = " << ans << endl;
	//cout << "temp = " << temp << endl;
	//cout << "temp ^ x = " << (long long)(temp ^ x) << endl;
	//cout << "(temp + x) ^ x = " << (long long)((temp + x) ^ x) << endl;
	if (pos1 == 0 || (pos1 <= m && pos1 >= 1))ans++;
	if (pos2 <= m && pos2 >= 1)ans++;
	//cout << "ans = " << ans << endl;
	for (long long i = 1; i <= x; i++)
	{
		if ((i ^ x) % i == 0 && (i ^ x) % x != 0)ans++;
	}
	cout << ans << endl;
}
int main()
{
 	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int tt = 1;
	cin >> tt;
	while (tt--)
	{
		solve();
	}
	return 0;
}
