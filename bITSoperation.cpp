#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL); 
int q,n;
cin>>q>>n;

while(q--){
    char ch;
    cin>>ch;
if(ch=='1'){
    int x;
    cin>>x;
    cout << (n|x) <<endl;
    n|=x;
}
else if(ch=='2'){
    int x;
    cin>>x;
    cout << (n&x) <<endl;
    n&=x;
}
else if(ch=='3'){
    int x;
    cin>>x;
    cout << (n^x) <<endl;
    n^=x;
}
else {
    cout << ~n <<endl;
    n=~n;
}
}
return 0;
}