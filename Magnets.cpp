#include<bits/stdc++.h>
using namespace std;
 #define rip(i,n) for(int i=0;i<n;i++)
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
   
   int n; cin>>n;
   vector<int>a(n);
   int cnt=0;
   rip(i,n) cin>>a[i];
    rip(i,n){
              if(a[i]!=a[i+1]){
                        cnt++;
              }
    }
    cout<<cnt<<endl;
return 0;
}
