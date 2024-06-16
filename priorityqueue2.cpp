#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    auto solve=[&](){
        int q;
        cin>>q;
        priority_queue<int,vector<int>,greater<int>> pq; //min heap
        while(q--){
            string str;
            cin>>str;
            if(str=="push"){
                int x;
                cin>>x;
                pq.push(x);
            }
            else if(str=="pop") pq.pop();
            else cout <<pq.top() <<endl;
        }
    };
    solve();
    return 0;
}