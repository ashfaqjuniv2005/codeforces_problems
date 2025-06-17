#include<bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          for(int i=1;i<=n;i++){
                   
                    string s;
                    cin>>s;
                    int a=0;
                    int b=0;
                    for(int j=0;j<s.size();j++){
                              if(s[j]=='A') a++;
                              else b++;
                    }
                    if(a>b) cout<< 'A' <<endl;
                    else cout<< 'B' <<endl;
          }
}
