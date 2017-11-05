#include <stdio.h>
int n;
long long x,mi,ma,cont=0;
int main(){
    scanf("%i%lld", &n, &x);
    ma=mi=x,n--;
    while(n--){
        scanf("%lld", &x);
        if(x<mi)cont++,mi=x;
        if(x>ma)cont++,ma=x;
    }
    printf("%lld", cont);
}
