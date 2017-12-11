#include <stdio.h>
long long test,cont=0,conti=0,x,y;
int main(){
    scanf("%lld", &test);
    while(test--){
        scanf("%lld%lld", &x, &y);
        if(x<0)cont++;
        else conti++;
    }
    printf(cont<=1 || conti<=1?"Yes\n":"No\n");
}
