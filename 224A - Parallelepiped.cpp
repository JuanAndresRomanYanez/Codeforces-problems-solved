#include"stdio.h"
int a,b,c,i;
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
            if( (a/i)*(b/i)==c ) break;
    }
    printf("%d ", 4*(i+a/i+b/i));
    return 0;
}
