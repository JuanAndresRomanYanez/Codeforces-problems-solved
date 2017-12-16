#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long n,ma=0,mi=0,dif=360,aux;
int main(){
    optimizar_io
    cin>>n;
    vector<long long>lol(n);
        for(int i=0;i<n;++i)cin>>lol[i];
        for(int i=0;i<n;++i){
            aux=0;
            for(int j=i;j<n;++j){
                aux+=lol[j];
                //2a-b-->-360+aux+aux
                dif=min(dif,abs(-360+aux+aux) );
            }
        }
    cout<<dif<<"\n";
}
