#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    double car,ma,s,sum=0,cont=0;
    cin>>car>>ma;
    for(int i=0;i<car;++i){
        cin>>s;
        sum+=s;
    }
    if((ma-(sum/car))<=0.5){
        cout<<cont<<"\n";
    }
    else{
        while(true==1){
                cont++;
                sum+=ma;
                car++;
            if((ma-(sum/car))<=0.5){
                cout<<cont<<"\n";goto kok;
            }
        }
    }
    kok:;
    return 0;
}
