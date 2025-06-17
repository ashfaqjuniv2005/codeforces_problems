#define REP(i, n) for(int i = 0; i < n; i ++)
#define REPL(i,m, n) for(int i = m; i < n; i ++)
# define M_PI 3.1415926535897932384
# define INF 999999999

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int tc;
    cin>>tc;
    REP(i, tc){
        int n;
        cin>>n;
        int k=1;
        int steps =0;
        while (steps < n) {
            steps+=k;
            k++;
        }
        k--;
        if (steps-1==n){
            k++;
        }
        cout<<k<<"\n";
    }
}
