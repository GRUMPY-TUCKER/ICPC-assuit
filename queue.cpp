#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false); // removes sync between cout and printf
    cin.tie(NULL);               // removes sync between cout and cin
    auto solve=[&](){
        int q;
        cin>>q;
        queue<int> que;
        while(q--){
            string str;
            cin>>str;
            if(str=="push"){
                int ele;
                cin>>ele;
                que.push(ele);
            }
            else if(str=="pop"){
                que.pop();
            }
            else if(str=="front"){
                cout << que.front() <<endl;
            }
            else cout << que.back() <<endl;
        }
    };
    solve();
    return 0;
}