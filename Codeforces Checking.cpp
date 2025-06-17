#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string eleas ="codeforces";
        char ali;
        cin>>ali;
        bool a=false;
        for(int b=0;b<eleas.size();b++)
        {
            if(eleas[b]==ali)
            {
                a= true;
                break;
            }
        }
        if (a)
        {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}
