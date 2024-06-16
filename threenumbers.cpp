#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int K,S;
    cin>>K>>S;
    int count=0;
    //This will not work since T.C. = O(K^3) = O(3000^3) = O(27 x 10^9) > 3 X 10^7 
    //for(int x=0;x<=K;x++){
    // for(int y=0;y<=K;y++){
       //     for(int z=0;z<=K;z++){
         //       if((x+y+z)==S) count++;
           // }
       // }
    //}
    //O(K^3) to be reduced to O(K^2) 
    for(int x=0;x<=K;x++){
        for(int y=0;y<=K;y++){
            int z = S - (x+y);
            if(z>=0 && z<=K) count++;
        }
    }
    cout << count <<endl;
return 0;
}
