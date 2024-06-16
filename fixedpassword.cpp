#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    //until you get the desired password go as usual
    while(cin>>n){
        if(n==1999) {
            cout << "Correct" <<endl;
            break;
        }
        else{
            cout << "Wrong" <<endl;
            continue;
        }
    }
}