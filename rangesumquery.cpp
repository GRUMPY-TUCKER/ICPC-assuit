#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin

int N,Queries;
cin>>N>>Queries;

vector<int> A(N+1);  //1-based indexind

for(int i=1;i<=N;i++) cin>> A[i];

vector<int> prefix_sum(N+1);

for(int i=1;i<=N;i++){
    prefix_sum[i]= prefix_sum[i-1]+A[i];
}

while(Queries--){
    int L,R;
    cin>>L>>R;
    cout << prefix_sum[R]-prefix_sum[L-1] <<endl;
}
return 0;
}