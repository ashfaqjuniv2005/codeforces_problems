#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

   int n;
   cin>>n;
   int ans=0;
   for(int i=0;i<n;i++) {
             int p,q;
             cin>>p>>q;
             int fs=q-p;
             if(fs>=2){
                       ans++;
             }
   }
   cout<<ans<<endl;
  
   
return 0;
}
