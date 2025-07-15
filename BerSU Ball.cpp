#include<bits/stdc++.h>
using namespace std;


int main()
{
        int n,m;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>m;
        vector<int> b(m);
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int l=0,r =0,p_cnt=0;
        while(l <n && r <m)
        {
            if(abs(a[l]-b[r])<=1)
            {
                p_cnt++;
                r++;
                l++;
            }
            else if(abs(a[l]-b[r])>1)
            {
                if(a[l]>b[r]) r++;
                else l++;
            }
        }
        cout<<p_cnt<<endl;
    }
