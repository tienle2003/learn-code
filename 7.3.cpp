#include <stdio.h>
#include <math.h>

float count(float x)
{
	float a;
	if(x>100) a=x*sin(x+2.0)+5.0;
	else a=sqrt(2.0*fabs(x)+3.0);
	return a;
}

float calc(float x, float y)
{
	float a=count(x);
	float f=fabs(a-sqrt(17.0))*(a+log10(fabs(a)+25.0)+y);
	return f;
}

int main() {
	float m=5,n=5,f;
	printf("nhap 2 so thuc bat ky: ");
//	scanf("%f%f",&m,&n);
	f=calc(m,n);
	printf("%f",f);
}

