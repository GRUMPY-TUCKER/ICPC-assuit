#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int N;
    cin>>N;

    string s;
    cin>>s;

    int sum=0;
    //while(N>0){
        
     //   int a = N % 10;
     //   sum += a;
     //   N /=10;
   // }
   for(int i=0;i<s.size();i++){
    sum += (int)(s[i])-48;
   }
    cout << sum << endl;
}