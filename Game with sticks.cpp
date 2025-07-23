#include<bits/stdc++.h>
using namespace std;
 
string wow(int n,int m){
    int folafol=min(n,m);
    if (folafol%2!=0){
        return "Akshat";
    }
    else { 
        return "Malvika";
    }
}
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
   int m,n;
   cin>>n>>m;
   string result= wow(n,m);
   cout<<result<<endl;
   
return 0;
}
