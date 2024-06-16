#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin

auto solve=[&](){
    int k;
    cin>>k;

    if(k==-1) cout << -2 << " " << -2 <<endl;
    else if(k==0) cout << -1 << " " << -1 <<endl;
    else cout << k*k + k << " " << k+1 <<endl;
};
solve();
return 0;
}