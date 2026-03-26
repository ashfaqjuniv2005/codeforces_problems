// https://codeforces.com/contest/1559/problem/B


#include<bits/stdc++.h>
using namespace std;
#define ll long long

 
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  int t;cin>>t;
  while(t--){
   ll n,x=-1;cin>>n;
   string s;cin>>s;

   for(int i=0;i<n;i++){
    if(s[i]!='?'){
    x=i;
    break;
    }
    
   }
		for(int i=x-1;i>=0;i--) s[i]='R'+'B'-s[i+1];
		if(x==-1) s[0]='R',x=0;
		for(int i=x+1;i<n;i++) if(s[i]=='?') s[i]='R'+'B'-s[i-1];
		cout<<s<<endl;
  }
   
  return 0;
}
