#include <stdio.h>
long long a,b,c,t=1;
int main(){
    scanf("%lld%lld%lld", &a, &b, &c);
    while(t<1000000){
        a*=10;
            if(a/b==c){
                printf("%lld\n", t);
                return 0;
            }
        a%=b;
        t++;
    }
    printf("-1\n");
}
