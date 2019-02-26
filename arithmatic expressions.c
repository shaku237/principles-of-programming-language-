#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	float x;
	printf("enter values");
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	x=((a+(float)b/c*d-e)*(f-g));
	printf("%f",x);
}
