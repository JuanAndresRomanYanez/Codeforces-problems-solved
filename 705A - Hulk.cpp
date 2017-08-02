#include <iostream>
#include <string>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int a;
    string b="";
    cin>>a;
    for(int i=1;i<=a;++i){
                if(i%2==0){
                    if(i==a){b=b+"I love it";}
                    else{b=b+"I love that ";}
                }
                else{
                    if(i==a){b=b+"I hate it";}
                    else{b=b+"I hate that ";}
                }
            }
            cout<<b<<"\n";
    return 0;
}
