#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int N;
    cin>>N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin>> a[i];
    int X;
    cin>>X;
    int pos=-1;
    for(int i=0;i<N;i++){
        if(a[i]==X){
            pos = i;
            break;
        }
    }
    cout << pos <<endl;
}
signed main(){
    solve();
    return 0;
}