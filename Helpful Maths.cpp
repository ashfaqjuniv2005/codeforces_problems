#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s;
   
     
    
         for(int i=0;i<s.length();i=i+2){
                for(int j=i+2;j<s.length();j=j+2)
                if(s[j]<s[i]){
                    int temp=s[j];
                    s[j]=s[i];
                    s[i]=temp;

                }
            }
            for(int i=0;i<s.length();i++){
                cout<<s[i];
        }
          
            }  

    
