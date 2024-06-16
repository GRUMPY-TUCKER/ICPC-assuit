#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool cmp(pair<string,int>&p1,pair<string,int>&p2){
    if(p1.second>p2.second){
        return true;
    }
    else if(p1.second==p2.second){
        if(p1.first<p2.first) return true;
        else return false;
    }
    else return false;
}
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin
  auto solve=[&](){
    map<string,vector<int>> mpp;   //{name {a,b,c,d}}
    vector<pair<string,int>> v;    //{name total}
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int total = a+b+c+d;
        v.push_back({name,total});
        mpp[name].push_back(a);
        mpp[name].push_back(b);
        mpp[name].push_back(c);
        mpp[name].push_back(d);
        //vector<int> v1;
        //v1.push_back(a);
        //v1.push_back(b);
        //v1.push_back(c);
        //v1.push_back(d);
        //mpp[name]=v1;
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it:v){
        cout << it.first << " "<<it.second<<" ";
        for(auto x:mpp[it.first]){    //respective names kaa scores print hoga
            cout<< x <<" ";
        }
        cout <<endl;
    }
  };
    solve();
  return 0;
}