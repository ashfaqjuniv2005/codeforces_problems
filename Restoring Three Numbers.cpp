#include<bits/stdc++.h>
using namespace std;
int main()
 
{
    long long a,b,c,d,m,x,y,z;
    cin>>a>>b>>c>>d;
 m=max(a,max(b,max(c,d)));
 if(m!=a){
     cout<<m-a<<" ";
 }
  if(m!=b){
     cout<<m-b<<" ";
 }
  if(m!=c){
     cout<<m-c<<" ";
 }
  if(m!=d){
     cout<<m-d<<" ";
 }
    return 0;
}
