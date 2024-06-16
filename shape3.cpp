#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    int space = n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        //cout <<endl;
        space--;
        for(int row = 1;row<=2*i-1;row++){
            cout << "*";
        }
        cout <<endl;
    }
    space=0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        //cout <<endl;
        space++;
        for(int row = 1;row<=2*i-1;row++){
            cout << "*";
        }
        cout <<endl;
    }
}