#include <bits/stdc++.h> 
#include <string>
using namespace std; 

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
int arr[n];
if (n%2==0) {
    for (int i=0; i<n; i++) {
    arr[i] = n-i;
    cout << arr[i] << " ";
    }
}
else {
    for (int i=0; i<n; i++) {
    arr[i+1] = i+1;
    arr[0] = n;
    cout << arr[i] << " ";
    }
} 
}
}
