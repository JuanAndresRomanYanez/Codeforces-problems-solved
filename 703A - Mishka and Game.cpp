#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int a,b,x,cont=0,conti=0;
    cin>>a;
    while(a--){
        cin>>b>>x;
        if(b>x){cont++;}
        if(x>b){conti++;}
    }
    if(cont>conti){cout<<"Mishka\n";}
    if(cont==conti){cout<<"Friendship is magic!^^\n";}
    if(conti>cont){cout<<"Chris\n";}
    return 0;
}
