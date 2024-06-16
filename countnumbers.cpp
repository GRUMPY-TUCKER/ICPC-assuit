#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,q;
    cin>>n>>q;
    map<int,int> mpp;
    //query problem
    while(q--){
    int x;
    cin>>x;
    int y;
    
    
    if(x==1){
        //1 x: add x in the array
        cin>>y;
        mpp[y]++;
    }
    else{
        //2 x: print the no of ocurrence of y
        cin>>y;
        cout << mpp[y] <<endl;
    }
    //return 0;
    }
}