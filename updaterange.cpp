#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
ios::sync_with_stdio(false);    //removes sync between cout and printf
cin.tie(NULL);                //removes sync between cout and cin
int n,queries;
cin>>n>>queries;
vector<int> original(n+1);  ////1-based indexing
for(int i=1;i<=n;i++) cin>> original[i];
 
vector<int> masked(n+2,0); // //0-based indexing
//This vector will be used to store the cumulative effect of updates on the original array. The extra size (n+2) is for padding purposes in the update logic.

while(queries--){
    int L,R,val;
    cin>>L>>R>>val;
    masked[L]+=val; //This signifies that the elements from index L onwards will be incremented by val.
    masked[R+1] -=val; //This effectively cancels out the previous increment for elements after index R. This is because the prefix sum will consider the difference between masked[L] and masked[R+1].
    }

    //prefix-sum
    for(int i=1;i<=n;i++){
        masked[i]+=masked[i-1];
    }
  //add the masked array to the original array
    for(int i=1;i<=n;i++){
        original[i]+=masked[i];
    }

    for(int i=1;i<=n;i++){
        cout << original[i]<<" ";
    }
    cout <<endl;
    return 0;
}