#define REP(i, n) for(int i = 0; i < n; i ++)
#define REPL(i,m, n) for(int i = m; i < n; i ++)
# define M_PI 3.1415926535897932384
# define INF 999999999

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int x;
    cin>>x;
    REP(i, x){
        string str;
        cin>> str;
        cout<<str.length()<<"\n";
    }
}
