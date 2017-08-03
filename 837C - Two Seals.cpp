#include <stdio.h>
#define F(i,a,b) for(int i=a;i<b;++i)
int n, a, b, xi, yi,mx=0;
bool ok( int l, int r, int x, int y ){
   if(( (l<=a-x || r<=b-y) && l<=a && r<=b && a-x>=0 && b-y>=0)||
      ( (l<=b-x || r<=a-y) && l<=a && r<=b && b-x>=0 && a-y>=0)||
      ( (r<=a-x || l<=b-y) && r<=a && l<=b && a-x>=0 && b-y>=0)||
      ( (r<=b-x || l<=a-y) && r<=a && l<=b && b-x>=0 && a-y>=0) )return true;
    return false;
}
int main(){
    scanf("%i%i%i", &n, &a, &b);
    int x[n],y[n];
    F(i,0,n)scanf("%i%i", &x[i], &y[i]);
    F(i,0,n)
        F(j,i+1,n)
            if(ok(x[i],y[i],x[j],y[j]) && x[i]*y[i] + x[j]*y[j] <= a*b)
                mx=mx>x[i]*y[i]+x[j]*y[j] ? mx :x[i]*y[i]+x[j]*y[j];
    printf("%i\n", mx);
}
