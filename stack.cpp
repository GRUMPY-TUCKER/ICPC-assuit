#include<bits/stdc++.h>
using namespace std;
signed main(){
    auto solve=[&](){
        int q;
        cin>>q;
        stack<int> st;
        while(q--){
            string str;
            cin>>str;
            if(str=="top"){
                cout <<st.top()<<endl;
            }
            else if(str=="push"){
                int x;
                cin>>x;
                st.push(x);
            }
            else st.pop();
        }
    };
    solve();
    return 0;
}