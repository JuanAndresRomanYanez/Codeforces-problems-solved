#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io
    int a,b;
    cin>>a>>b;
    if(a==2){
        if(b==1){cout<<"4\n";goto kok;}
        else{cout<<"5\n";goto kok;}
    }
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
        if(b>=1 && b<=5){cout<<"5\n";goto kok;}
        else{cout<<"6\n";goto kok;}
    }
    if(b==7){cout<<"6\n";goto kok;}
    cout<<"5\n";goto kok;
    kok:;
    return 0;
}
