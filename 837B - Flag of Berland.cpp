#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    bool R=false,G=false,B=false;
    int n,m,cont=1,r=0,g1=0,b=0;
    char lol;
    string g="",subg="",str2="";
    cin>>n>>m;
    for(int i=0;i<n*m;++i){
        cin>>lol;
        g+=lol;
        if(i>0)if(g[i-1]!=g[i])cont++;
    }
    if(cont==3){
        for(int i=0;i<n*m;++i){
            if(g[i]=='R')r++;
            else if(g[i]=='G')g1++;
            else b++;
        }
        if(r==g1 && g1==b){cout<<"YES\n";return 0;}
        else {cout<<"NO\n";return 0;}
    }
    else{
        cont=1;
        r=g1=b=0;
        for(int i=0;i<m;++i){
                subg+=g[i];
                if(i>0)if(g[i-1]!=g[i])cont++;
        }
        if(cont==3){
                for(int i=0;i<m;++i){
                    if(g[i]=='R')r++;
                    else if(g[i]=='G')g1++;
                    else b++;
                }
            if(r==g1 && g1==b){
                for(int i=1;i<n;++i){
                    str2=g.substr(i*m,m);
                    if(str2!=subg){cout<<"NO\n";return 0;}
                }
                cout<<"YES\n";return 0;
            }
            else {cout<<"NO\n";return 0;}
        }
        else {cout<<"NO\n";return 0;}
    }
}
