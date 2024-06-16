#include<bits/stdc++.h>
using namespace std;
signed main(){
    int N;
    cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++) cin>> v[i];
    //selection sort
    for(int i=0;i<N-1;i++){
        int mini = i;
        for(int j=i+1;j<N;j++){
            if(v[mini]>v[j]) {
                //mini = j;
                swap(v[mini],v[j]);
            }
        }
    }
    for(auto i:v) cout<<i << " ";
    cout <<endl;
}