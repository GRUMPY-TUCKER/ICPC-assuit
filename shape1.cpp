#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout << "*" ;
        }
        cout <<endl;
    }
}