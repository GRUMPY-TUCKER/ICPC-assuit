#include<bits/stdc++.h>
using namespace std;
signed main(){
    auto solve=[&](){
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        while(q--){
            string s;
            cin>>s;
            if(s=="binary_search"){
                int ele;
                cin>>ele;
                auto it = binary_search(v.begin(),v.end(),ele);
                if(!it){
                    cout << "found" <<endl;
                }
                else cout << "not found" <<endl;
            }
            else if(s=="lower_bound"){
                int ele;
                cin>>ele;
                auto it=lower_bound(v.begin(),v.end(),ele);
                if(it==v.end()){
                    cout << -1 <<endl;
                }
                else{
                    cout << *it <<endl;
                }
            }
            else{
                int ele;
                cin>>ele;
                auto it=upper_bound(v.begin(),v.end(),ele);
                if(it==v.end()){
                    cout << -1 <<endl;
                }
                else{
                    cout << *it <<endl;
                }
            }
        }
    };
    solve();
    return 0;
}