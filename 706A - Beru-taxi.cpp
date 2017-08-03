#include <stdio.h>
#include <iostream>
#include <math.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
	int x,y,n;
	cin>>x>>y>>n;
	double res = 1e15;
	for (int i=0;i<n;++i) {
		double a, b, v;
		cin>>a>>b>>v;
		double dist=sqrt(pow(a-x,2)+pow(b-y,2))/v;
		res=min(res,dist);
	}
	printf("%.12lf\n", res);
	return 0;
}
