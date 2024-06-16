#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin

int N,q;
cin>>N>>q;
vector<int> v(N);
for(int i=0;i<N;i++) cin>>v[i];

while(q--){
    string s;
    cin>>s;
    if(s=="sort"){
        int l,r;
        cin>>l>>r;
        if(l>r) swap(l,r);
        l--;  //decreasing the position index by 1
        r--;
        sort(v.begin()+l,v.begin()+r+1);
        //for(auto i:v){
          //  cout << i << " ";
        //}
        //cout <<endl;
    }
    else if(s=="pop_back") v.pop_back();
    else if(s=="back") cout << v.back() <<endl;
    else if(s=="reverse"){
        int l,r;
        cin>>l>>r;
        if(l>r) swap(l,r);
        l--;
        r--;
        reverse(v.begin()+l,v.begin()+r+1);
    }
    else if(s=="front") cout<< v.front() <<endl;
    else if(s=="push_back"){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    else if(s=="print"){
        int pos;
        cin>>pos;
        cout << v[pos-1] <<endl;
    }
    else cout << "Wrong query" <<endl;
}
return 0;
}