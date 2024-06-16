#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int N;
    cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++) cin>> v[i];
    //vector<int> v1=v;
    //reverse(v1.begin(),v1.end());
    //if(v1==v) cout << "YES" <<endl;
    //else cout << "NO" <<endl;
    //Time complexity will get reduced
    int low =0,high = N-1;
    while(low<=high){
        if(v[low]==v[high]){
            low++;
            high--;
        }
        else{
            cout <<"NO" <<endl;
            return;
        }
    }
    cout << "YES" <<endl;
}
signed main(){
    solve();
    return 0;
}
