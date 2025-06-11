//collected from tourist

#include<bits/stdc++.h>

using namespace std;

const int mod=998244353;
int t,n;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>d(n+1),suf(n+1);

        d[n]=suf[n]=1;

        for(int i=n-1;i>=4;--i)
        {
            d[i]=(1LL*i*suf[i+1]+1)%mod;
            suf[i]=(d[i]+suf[i+1])%mod;
        }

        int sol=n-1;

        for(int i=3;i<=n-1;++i)
        {
            int p=(1LL*(i-1)*i/2-1)%mod;
            sol=(1LL*p*d[i+1]+sol)%mod;
        }

        cout<<sol<<'\n';
    }
    return 0;
}
