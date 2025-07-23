#include<bits/stdc++.h>

using namespace std;
int main(){
          
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        
        string s;
        cin>>s;
        
    for(int i=0;i<n;i++){
        if(s[i]=='B')
         ans++;
        }
    if(s[n-1]=='B'&& ans>1||s[n-2]=='B'&&s[0]=='B'){
    cout<<"Bob"<<endl;
              
    }
    
    else
    {
    cout<<"Alice"<<endl;
              
    }
    
    }
    return 0;
}
