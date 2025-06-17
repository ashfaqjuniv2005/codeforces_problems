#include<bits/stdc++.h>
using namespace std;
int main()
{
          ios_base::sync_with_stdio(false);
          cin.tie(0);
          cout.tie(0);
          
          string s;
          cin>>s;
          
          int notmatch=0,i=0,first=0,last=s.size()-1,ssize=(s.size())/2;
          while(i<ssize){
                    if(s[first]==s[last]) {
                              first++;
                              last--;
                    }
                    else{
                              
                    notmatch++; 
                    first++; 
                    last--;
                    }
                    i++;
          }
    if(notmatch==1){
        cout<<"YES";
    }
    else if(s.size()%2!=0 and notmatch==0){
        cout<<"YES";
    }
    else cout<<"NO";
}
