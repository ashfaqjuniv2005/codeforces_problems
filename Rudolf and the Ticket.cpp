#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ar1[n], ar2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> ar2[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = ar1[i] + ar2[j];
                if (sum <= k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
        
    }
    return 0;
}
