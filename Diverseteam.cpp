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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    map<int,int> mpp;
    for(int i=0;i<n;i++) {
        cin>> v[i];
        mpp[v[i]]=i+1; // updating the indexes of the repeating elements and storing the indexes of non-repeating elements
    }
    if(mpp.size()>=k){
        cout << "YES\n";
        //sort(mpp.begin(),mpp.end());
        
        for(auto it:mpp){
            if(k>0){
            cout << it.second<<" ";
            k--;
        }
        cout<<endl;
        }
        
    }
    else{
        cout<<"NO\n";
    }
};
solve();
return 0;
}