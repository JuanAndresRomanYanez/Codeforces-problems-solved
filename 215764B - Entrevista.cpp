#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);
const int MAX=10000000;
bool fibo[MAX+1];
long long v[35];
void iniciar_criba(){
    v[0]=1,v[1]=1;
    for(int i=2;i<35;++i){
            v[i]=v[i-1]+v[i-2];
            fibo[v[i]]=true;
    }
}
using namespace std;
long long a,b,cont;
int main(){
    iniciar_criba();
    while(cin>>a>>b && (a!=0 || b!=0)){
        cont=0;
        for(int i=a;i<=b;++i){
                for(int j=2;j<35;++j){
                    if(i%v[j]==0)goto kok;
                }
                cont++;
                kok:;
        }
        cout<<cont<<"\n";
    }
    return 0;
}
