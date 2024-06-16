#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    auto solve=[&](){
        int n,q;
        string s;
        cin>>n>>q>>s;
        while(q--){
            string str;
            cin>>str;
            if(str=="next_permutation"){
                int x;
                cin>>x;
                for(int i=0;i<x;i++){
                    next_permutation(s.begin(),s.end());
                }
                cout << s<<endl;
            }
            else{
                int x;
                cin>>x;
                for(int i=0;i<x;i++){
                    prev_permutation(s.begin(),s.end());
                }
                cout << s<<endl;
            }
        }
    };
    solve();
    return 0;
}