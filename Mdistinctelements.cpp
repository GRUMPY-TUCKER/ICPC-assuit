#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin
//play with indexes

int n,q;
cin>>n>>q;

set<int>s;
vector<int>ans;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.insert(x);
}
for(auto i:s){
    ans.push_back(i);
}
//In set already elements are in sorted order

while(q--){
    int ele;
    cin>>ele;
    //for less than element use lower bound >=ele
    auto pos1=lower_bound(ans.begin(),ans.end(),ele)-ans.begin();
    //for greater than element use upper bound >ele
    auto pos2=upper_bound(ans.begin(),ans.end(),ele)-ans.begin();
    cout << pos1 << " " << s.size() - pos2 <<endl;
}
return 0;
}