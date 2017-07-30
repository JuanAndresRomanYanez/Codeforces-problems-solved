#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a,casos,x,y;
    long long cont=0,v;
    cin>>a;
    for(int i=0;i<a;++i){
        cin>>v;
        cont+=v;
    }
    cin>>casos;
    for(int i=0;i<casos;++i){
        cin>>x>>y;
        for(int i=x;i<=y;++i){
            if(i>=cont){cout<<i<<"\n";return 0;}
        }
    }
    cout<<"-1\n";
    return 0;
}
