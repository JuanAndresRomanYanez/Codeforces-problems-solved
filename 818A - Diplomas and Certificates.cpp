#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long a,b,c;
int main(){
    optimizar_io
    cin>>a>>b;
    if(((a/2)/(b+1))<=0)cout<<"0 0 "<<a<<"\n";
    else {
        cout<<(a/2)/(b+1)<<" "<<((a/2)/(b+1))*b<<" "<<a-((((a/2)/(b+1))*b)+((a/2)/(b+1)))<<"\n";
    }
    return 0;
}
