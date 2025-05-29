#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int Size=a.size();
    string z;
    for(int i=0;i<Size;i++){
        if(a[i]==b[i]){
            z.push_back('110');
        }
        else z.push_back('1');
    }
    cout<<z;


}
