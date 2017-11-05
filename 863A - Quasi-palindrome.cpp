#include <stdio.h>
int x;
int solve(int x){
    while(x%10==0)x/=10;
    int aux=x,it=0;
    while(aux!=0){
        it=it*10 + aux%10;
        aux/=10;
    }
    printf(it==x?"YES\n":"NO\n");
}
int main(){
    scanf("%i", &x),solve(x);
}
