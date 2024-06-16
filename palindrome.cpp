#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin
int n;
cin>>n;
int no = n;
int rev=0;
while(n!=0){
    int d = n%10;
    rev = rev*10 + d;
    n/=10;
}
cout << rev <<endl;
if(rev == no ) cout << "YES" <<endl;
else cout << "NO" <<endl;
return 0;
}