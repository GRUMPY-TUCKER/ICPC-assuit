#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    auto solve=[&](){
        int q;
        cin>>q;
        priority_queue<int> pq1;
        while(q--){
            string str;
            cin>>str;
            if(str=="push"){
                int x;
                cin>>x;
                pq1.push(x);
            }
            else if(str=="pop"){
                pq1.pop();
            }
            else cout << pq1.top() <<endl;
        }
    };
    solve();
    return 0;
}