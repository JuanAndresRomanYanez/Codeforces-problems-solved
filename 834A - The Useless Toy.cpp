#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    bool right=false,left=false;
    long long cases;
    char a,b,aux;
    cin>>a>>b>>cases;
    cases%=4;
    aux=a;
    for(long long i=0;i<cases;++i){
        if(aux=='^')aux='>';
        else if(aux=='>')aux='v';
        else if(aux=='v')aux='<';
        else if(aux=='<')aux='^';
        if(a=='^')a='<';
        else if(a=='>')a='^';
        else if(a=='v')a='>';
        else if(a=='<')a='v';
    }
    if(aux==b)right=true;
    if(a==b)left=true;
    if(left==right)cout<<"undefined\n";
    else if(left==true)cout<<"ccw\n";
    else cout<<"cw\n";
    return 0;
}
