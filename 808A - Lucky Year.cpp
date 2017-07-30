#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long a,k=0,aux;
void com(){
    while(a>9){
        k++;
        a/=10;
    }
}
int main() {
    optimizar_io
    cin>>a;
    aux=a;
    com();
    a++;
    for(int i=0;i<k;++i){a*=10;}
    cout<<a-aux<<endl;
    return 0;
}
