 #include<bits/stdc++.h>
using namespace std;

int main(){
     int a,b,c;
     cin>>a>>b>>c;
     int p=0,q=0,r=0,x=0,y=0;
     p=a+b+c;
     q=a+b*c;
     r=a*(b+c);
     x=a*b*c;
     y=(a+b)*c;
    int m=max({p,q,r,x,y});
    cout<<m;

return 0;

}




