#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io
    string a,b,c,j;
    cin>>a>>b>>c;
    j=c;
    for(int i=0;i<(int)j.size();++i)j[i]=tolower(j[i]);
    for(int k=0;k<(int)c.size();++k){
        if( (c[k]>=65 && c[k]<=90) || (c[k]>=97 && c[k]<=122 ) ){
            for(int i=0;i<(int)a.size();++i){
                if(j[k]==a[i]){
                    j[k]=b[i];
                    if(c[k]>=65 && c[k]<=90){
                        j[k]=toupper(j[k]);
                    }
                    break;
                }
            }
        }
    }
    cout<<j<<"\n";
    return 0;
}
