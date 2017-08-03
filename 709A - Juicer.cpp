
 #include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long lol;
int main()
{
    optimizar_io;
    long long a,x,b,c,conti=0;
    lol cont=0;
    cin>>a>>b>>c;
    while(a--){
        cin>>x;
        if(x>b)
        continue;
        cont+=x;
        if(cont>c)
        conti++,cont=0;
    }
    cout<<conti<<"\n";
    return 0;
}
