#include <stdio.h>
int main(){
    int a,b,x,sum=0,ans=-1;
    scanf("%i%i", &a, &b);
    for( int i=0;i<a;++i){
        scanf("%i", &x);
        sum+=x;
        b-=(8<sum?8:sum);
        if(b<=0 && ans==-1)ans=i+1;
        sum-=(8<sum?8:sum);
    }
    printf("%i\n", ans);
}
