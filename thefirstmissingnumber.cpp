#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int N,M;
    cin>>N>>M;
    vector<int> v(N);
    set<int> s;
    for(int i=0;i<N;i++) {
        cin>> v[i];
        s.insert(v[i]);
    }

    for(int i=-M;i<=M;i++){
        if(s.count(i)==0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}