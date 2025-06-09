#include<bits/stdc++.h>
using namespace std;
int main()
 
{
 int n;
 cin>>n;
 bool isTrue=false;
 //n=10 --> 9 8 7 6 5 4 3 2 1 0
 while(n){
    if(!isTrue){
        cout<<"I hate ";
        isTrue=true;
    }else{
        cout<<"I love ";
        isTrue=false;
    }
    if(n>1){
       cout<<"that ";
    }else{
        cout<<"it ";
    }
    n--;
 }
    return 0;
}
