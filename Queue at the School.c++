#include<bits/stdc++.h>

using namespace std;

int main(){
          
          ios_base::sync_with_stdio(false);
          cin.tie(0);
          cout.tie(0);
          
int n,t; cin>>n>>t;
string s; cin>>s;
while(t){
          for(int i=1;i<n;i++){
                    if(s[i-1]=='B'&&s[i]=='G'){
                              s[i-1]='G';
                              s[i]='B';
                              i++;
                    }
          }
          t--;
}
cout<<s;
return 0;
}
