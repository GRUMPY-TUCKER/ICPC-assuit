#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

//Lexicographgically we are sorting the names of array as well as the salary
bool cmp(pair<string,int>&p1,pair<string,int>&p2){
    if(p1.second>p2.second) return true;
    else if(p1.second==p2.second){
        if(p1.first<p2.first) return true;
        else return false;
    }
    else return false;
}


signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin
int N;
cin>>N;

vector<pair<string,int>> v;  //dont m,ention the size of vector since it outputs 0 for many places after the required output
for(int i=0;i<N;i++){
    string s;
    int salary;
    cin>>s>>salary;
    v.push_back({s,salary});
}

sort(v.begin(),v.end(),cmp);
for(auto it: v){
    cout << it.first << " " <<it.second<<endl;
}
}