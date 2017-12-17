#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long test,idx,x;
bool ban;
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        cin>>x;
        idx=0,ban=false;
        while(idx*3<=x){
            if((x-(idx*3))%7==0)ban=true;
            idx++;
        }
        cout<<(ban?"YES\n":"NO\n");
    }
    return 0;
}
