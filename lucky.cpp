#include <bits\stdc++.h>
using namespace std;
int main()
{
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++){


        int number,arr[6],secondsum=0,firstsum=0;
        cin>>number;

        for(int i=0; i<6;i++){
            arr[i]=number%10;
            number=number/10;
            if(i<3){
                firstsum=firstsum+arr[i];
            }
            else{
                secondsum=secondsum+arr[i];
            }
        }
        if(secondsum==firstsum){
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
        }

}
