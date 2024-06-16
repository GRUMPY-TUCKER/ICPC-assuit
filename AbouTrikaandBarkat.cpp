#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin
int x,y;
cin>>x>>y;
if(x+y==0) cout << "Barkat" <<endl;
int u = min(x,y);
x -=u;
y -=u;
u += max(x,y);
if(u&1) cout << "Barkat\n";
else cout << "Abou Trika\n";
}