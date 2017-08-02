#include <stdio.h>
int main()
{
    int a,b,c,d,cont=0;
    scanf("%i%i",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%i%i",&c,&d);
            if(c==1||d==1){cont++;}
        }
    }
    printf("%i\n", cont);
}
