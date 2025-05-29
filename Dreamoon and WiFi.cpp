#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define CLS system("cls");
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define uni(a) a.erase(unique(all(a)), a.end())
#define input(a)    \
  for (auto &i : a) \
    cin >> i;
#define output(a)   \
  for (auto &i : a) \
    cout << i << ' ';

void fast()
{
  std::ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
}
const ll N = 1e6, mod = 1e9 + 7;
const ld EPS = 1e-10;

string s, ss;
int n, ans;

double f(int i, int sum)
{
  if (i == n)
  {
    return (sum == ans);
  }

  double cnt = 0;
  if (s[i] == '+')
    cnt += f(i + 1, sum + 1);
  if (s[i] == '-')
    cnt += f(i + 1, sum - 1);
  if (s[i] == '?')
    cnt += f(i + 1, sum + 1) + f(i + 1, sum - 1);

  return cnt;
}

void solve()
{
  cin >> ss >> s;
  n = s.size();
  for (auto &i : ss)
  {
    if (i == '+')
      ans++;
    else if (i == '-')
      ans--;
  }
  int a = 0;
  for (auto &&i : s)
  {
    if (i == '?')
      a++;
  }
  cout << fixed << setprecision(9);
  cout << (f(0, 0) / (1 << a));
}

int main()
{
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  fast();

  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
    cout << '\n';
  }

  return 0;
}
