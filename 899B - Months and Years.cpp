#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long test;
long long months3[72]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
bool ok2=false;
int main(){
    optimizar_io
    cin>>test;
    long long v[test];
    for(int i=0;i<test;++i)cin>>v[i];
    // me daba flojera hacerlo mas corto XD
        for(int j=0;j<72-(test-1);++j){
            for(int k=0,i=j;k<test;i++,++k){
                    if( (v[k]!=months3[i]) )goto kok2;
            }
            ok2=true;
            kok2:;
        }
    cout<<(ok2?"YES\n":"NO\n");
    return 0;
}
