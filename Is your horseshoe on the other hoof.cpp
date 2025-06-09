#include <bits/stdc++.h>
using namespace std;

int main(){

int arry[4];
int i,m=0;
for(i=0;i<4;i++){
cin>>arry[i];
     
}

sort(arry,arry+4);
for(i=0;i<3;i++){
     if(arry[i]==arry[i+1]) m++;
}
cout<<m;
return 0;
}
//24529480 PROD-AS
