#include <stdio.h>

#define max 100
void inPut(int arr[], int &n)
{
	do{
		printf("nhap so luong phan tu cua mang (6-100): ");
		scanf("%d",&n);
		if(6>n || n>100)
		   printf("nhap lai!\n");
	}while(6>n || n>100);
	for(int i=0; i<n; i++)
	{
		printf("nhap gia tri cua phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
}

void showArr(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}

void xuLiHam(int arr[], int n)
{
	int count=0,sum=0,y;
	do{
		printf("nhap vao mot so nguyen duong bat ky: ");
		scanf("%d",&y);
		if(y<=0)
		   printf("nhap lai!\n");
	}while(y<=0);
	printf("cac uoc cua %d trong mang la: ",y);
	for(int i=0; i<n; i++)
	{
		if(y%arr[i]==0)
		{
			printf("%d ",arr[i]);
			sum+=arr[i];
			count++;
		}
	}
	printf("\ntong cua cac uoc la: %d",sum);
	if(count!=0)
	   printf("\nTB cong cua cac uoc la: %.2f",(float)sum/count);
}

int main() {
	int arr[max],n;
	inPut(arr,n);
	showArr(arr,n);
	xuLiHam(arr,n);
}
