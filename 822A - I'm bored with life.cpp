#include <stdio.h>
int main(){
	int a,b,c,f;
	scanf ("%d %d",&a,&b);
	c=a<b?a:b,f=1;
	for(int i=2;i<=c;i++)f*=i;
	printf("%i\n",f);
}
