#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long test,x,cont1=0,cont2=0,cant=0;
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        cin>>x;
        if(x==1)cont1++;
        if(x==2) cont2++;
    }
        while(cont2>0 && cont1>0){
            cont1--,cont2--;
            cant++;
        }
        if(cont1>2)cant+=(cont1/3);
    cout<<cant<<"\n";
    return 0;
}
