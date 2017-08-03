#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b+c>=d)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
