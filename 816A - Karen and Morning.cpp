#include <iostream>
#include <vector>
#include <stdlib.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    vector<int>a;
    a.push_back(110);
    a.push_back(220);
    a.push_back(330);
    a.push_back(440);
    a.push_back(550);
    a.push_back(1001);
    a.push_back(1111);
    a.push_back(1221);
    a.push_back(1331);
    a.push_back(1441);
    a.push_back(1551);
    a.push_back(2002);
    a.push_back(2112);
    a.push_back(2222);
    a.push_back(2332);
    optimizar_io
    string x,y="";
    cin>>x;
    for(int i=0;i<5;++i)if(i!=2)y+=x[i];
    int aux=atoi(y.c_str());
    if(aux==0){cout<<"0\n";return 0;}
        for(int i=0;i<(int)a.size();++i){
            if(aux<=a[i]){
                if(aux==a[i]){cout<<"0\n";return 0;}
                else{
                    int loc,auxi=0,por;
                    auxi=aux%100;
                    aux/=100;
                    loc=a[i];
                    loc/=100;
                    if(loc==aux){
                        loc=a[i]%100;
                        cout<<loc-auxi<<"\n";return 0;
                    }
                    else{
                        por=(loc-aux-1)*60;
                        cout<<a[i]%100+(60-auxi)+por<<"\n";return 0;
                    }
                }
            }
        }
    cout<<2360-aux<<"\n";
    return 0;
}
