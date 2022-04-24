#include <stdio.h>
#include <math.h>

int UCLN(int a, int b)
{
	if(a==0 || b==0)
	return a+b;
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}

void inPut(int *a, int *b, int *c, int*d)
{
	do{
		printf("nhap 4 so nguyen duong bat ky: ");
		scanf("%d%d%d%d",&(*a),&(*b),&(*c),&(*d));
		if(a<=0||b<=0||c<=0||d<=0)
		   printf("nhap lai!");
	}while(a<=0||b<=0||c<=0||d<=0);
}

void outPut(int a, int b, int c, int d)
{
	int x,y,z;
	x=UCLN(a, b);
	y=UCLN(c, d);
	z=UCLN(x, y);
	printf("UCLN cua 4 so {%d , %d , %d , %d} la: %d",a,b,c,d,z);
}

int main() {
	int a,b,c,d;
	inPut(&a,&b,&c,&d);
	outPut(a,b,c,d);
}

