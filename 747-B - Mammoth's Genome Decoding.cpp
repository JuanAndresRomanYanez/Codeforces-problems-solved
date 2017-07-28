#include <iostream>
#include <math.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io
    int a,ca=0,cc=0,ct=0,cg=0,co=0,x=0,y=0,pup=0;
    string s;
    cin>>a>>s;
    if((a%2)==0 && (a%4)==0){
    for(int i=0;i<a;++i){
        if(s.at(i)=='A'){
            ca++;
        }
        if(s.at(i)=='C'){
            cc++;
        }
        if(s.at(i)=='G'){
            cg++;
        }
        if(s.at(i)=='T'){
            ct++;
        }
        if(s.at(i)=='?'){
            co++;
        }
    }
    x=a/4;
    if(ca>x || cc>x || cg>x || ct>x ){cout<<"===\n";goto kok;}
            ca=x-ca;
            cc=x-cc;
            cg=x-cg;
            ct=x-ct;
            for(int i=0;i<a;++i){
                if(s.at(i)=='?'){
                if(ca>0){ca--;s.at(i)='A';goto pol;}
                if(cc>0){cc--;s.at(i)='C';goto pol;}
                if(cg>0){cg--;s.at(i)='G';goto pol;}
                if(ct>0){ct--;s.at(i)='T';goto pol;}
            }
            pol:;
        }
        cout<<s<<"\n";
    }
    else{cout<<"===\n";goto kok;}
    kok:;
    return 0;
}
