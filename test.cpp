#include <stdio.h>
#include <math.h>

void inPut(int &n, float &a)
{
	do{
		printf("nhap so nguyen duong n:");
		scanf("%d",&n);
		if(n<0)
		   printf("nhap lai!");
	}while(n<0);
	printf("nhap so thuc a bat ky:");
	scanf("%f",&a);
}

float count(int n, float a)
{
	float p=sqrt(22);
	for(int i=2; i<=22; i++)
	{
		if(i%2==0)
		{
			float x=a*a,c=(-1.0)*(-1.0);
			p+=c*(x-n*n*1.0)/(i*1.0);
			x*=a*1.0;
			c*=(-1.0);
		}
	}
	return p;
}

int main() {
	int n;
	float a,p;
	inPut(n,a);
	p=count(n,a);
	printf("%f",p);
}
