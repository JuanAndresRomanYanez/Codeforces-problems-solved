#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main (){
    optimizar_io
    long long s,v1,t1,v2,t2,res=0,cont=0;
    cin>>s>>v1>>v2>>t1>>t2;
    res=(v1*s)+t1*2;
    cont=(v2*s)+t2*2;
    if(cont==res)cout<<"Friendship\n";
    else if(res<cont)cout<<"First\n";
    else cout<<"Second\n";
    return 0;
}
