#include <stdio.h>
#include <math.h>

int giaiThua(int n)
{
	int i,ans=1;
	if(n!=0)
	{
		for(i=1;i<=n;i++) ans*=i;
	}
	return ans;
}

void inPut(int *n)
{
	do{
		printf("nhap 1 so nguyen duong bat ky: ");
		scanf("%d",&(*n));
		if(n<0) printf("nhap lai!");
	}while(*n<0);	
}

void outPut(int n)
{
	int sum=1;
	for(int i=2; i<=n; i++){
		sum+=giaiThua(i);
	}
	printf("%d",sum);
}

int main() {
	int n;
	inPut(&n);
	outPut(n);
}

