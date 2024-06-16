#include<bits/stdc++.h>
using namespace std;
signed main(){
    auto solve=[&](){
        int N,q;
        string s;
        cin>>N>>q>>s;
        while(q--){
            string str;
            cin>>str;
            if(str=="pop_back"){
                s.pop_back();
            }
            else if(str=="front"){
                cout<<s.front() <<endl;
            }
            else if(str=="back"){
                cout << s.back() <<endl;
            }
            else if(str=="push_back"){
                char ch;
                cin>>ch;
                s.push_back(ch);
            }
            else if(str=="substr"){
                int l,r;
                cin>>l>>r;
                if(l>r) swap(l,r);
                l--;
                r--;
                //substr(pos,len)
                //len = r-l+1
                cout << s.substr(l,r-l+1) <<endl;
            }
            else if(str=="sort"){
                int l,r;
                cin>>l>>r;
                if(l>r) swap(l,r);
                l--;
                r--;
                sort(s.begin()+l,s.begin()+r+1);
            }
            else if(str=="reverse"){
                int l,r;
                cin>>l>>r;
                if(l>r) swap(l,r);
                l--;
                r--;
                reverse(s.begin()+l,s.begin()+r+1);
            }
            else{
                int pos;
                cin>>pos;
                pos--;
                cout << s[pos] <<endl;
            }
        }
    };
    solve();
    return 0;
}