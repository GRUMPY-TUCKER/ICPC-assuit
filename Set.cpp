#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin
int tc;
cin>>tc;
while(tc--){
    string str;
    cin>>str;
    set<int> s;
    int ele;
    if(str=="insert"){
        
        cin>>ele;
        s.insert(ele);
    }
    else if(str=="find"){
       
        cin>>ele;
        if(s.find(ele)!=s.end()) cout <<  "found" <<endl;
        else cout << "not found" <<endl;
        //if(s.count(x)>0) cout << "found" <<endl;
        // else cout << "not found" <<endl;
    }
    else if(str=="lower_bound"){
        
        cin>>ele;
        auto ans = s.lower_bound(ele);
        if(ans==s.end()) cout << -1 <<endl;
        else cout << *ans <<endl;  //returns the address
    }
    else if(str=="upper_bound"){
      
        cin>>ele;
        auto ans = s.upper_bound(ele);
         if(ans==s.end()) cout << -1 <<endl;
        else cout << *ans <<endl;  //returns the address
    }
}
return 0;
}