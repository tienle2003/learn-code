#include <stdio.h>
#define max 100

void inPut(int arr[], int &n)
{
	do{
		printf("nhap so luong phan tu cua mang (1-100): ");
	    scanf("%d",&n);
	    if(n<1 || n>100)
	    printf("nhap lai!");
	}while(n<1 || n>100);
	for(int i=0; i<n; i++)
	{
		printf("nhap gia tri phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
}

void checkOdd(int arr[], int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2!=0)
		{
			sum+=arr[i];
		}
	}
	printf("tong cua cac phan tu le trong mang la: %d",sum);
}
void checkEven(int arr[], int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			sum+=arr[i];
		}
	}
	printf("tong cua cac phan tu chan trong mang la: %d",sum);
}

int main() {
	int arr[max],n;
	inPut(arr,n);
	checkOdd(arr,n);
	checkEven(arr,n);
}
