#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long b,cont=0,ma=0;
    cin>>b;
    cin.ignore();
    string a;
    getline(cin, a);
    bool ban=false;
    for(long long i=0;i<(long long )a.size();++i){
            if(a[i]>64 && a[i]<91)cont++;
            if(a[i]==' ' || i==(long long)a.size()-1){
                    if(cont>ma)ma=cont;
                    cont=0;
            }
    }
    cout<<ma<<"\n";
    return 0;
}
