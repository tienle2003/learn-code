#include<stdio.h>
#include<math.h>
#define max 100

void input_Arr(int arr[], int &n)
{
	puts(">>> nhap mang >>>");
	do{
		printf("\nnhap so luong phan tu cua mang (1-100): ");
		scanf("%d",&n);
		if(n<=0 || n>100)
		printf("vui long nhap lai!\n");
	}while(n<=0 || n>100);
	for(int i=0; i<n; i++)
	{
		printf("nhap gia tri cua phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
}

void output_Arr(int arr[], int n)
{
	puts("\n>>> xuat mang >>>");
	for(int i=0; i<n; i++)
	{
		printf("\narr[%d] = %d\n",i,arr[i]);
	}
}

void maxArr(int arr[], int n)
{
	int i,max_index=0;
	puts("\n>>> chi so va gia tri phan tu co gia tri lon nhat >>>");
	for(i=1; i<n; i++)
	{
		if(arr[max_index]<arr[i])
		{
		    max_index=i;
			arr[max_index]=arr[i];	
		}
	}
	printf("arr[%d] = %d",max_index,arr[max_index]);
}

void minArr(int arr[], int n)
{
	int i,min_index=0;
	puts("\n>>> chi so va gia tri phan tu co gia tri nho nhat >>>");
	for(i=1; i<n; i++)
	{
		if(arr[min_index]>arr[i])
		{
		    min_index=i;
			arr[min_index]=arr[i];
		}
	}
	printf("arr[%d] = %d",min_index,arr[min_index]);
}

bool isPrime(int a)
{
	if(a<=1) return false;
	for(int i=2; i<=sqrt(a); i++)
	    if(a%i==0) return false;
	return true;
}

void primeOfArr(int arr[], int n)
{
	int count=0,sum=0;
	puts("\n>>> cac phan tu co gia tri la snt >>>");
	for(int i=0; i<n; i++)
	{
		if(isPrime(arr[i]))
		{
			printf("arr[%d] = %d\n",i,arr[i]);
            sum+=arr[i];
		    count++;
		}
	}
	if(count!=0)
	{
		printf("trong mang co %d phan tu la snt\n",count);
	    printf("trung binh cong cua chung la: %.2f\n",(float)sum/count);
	}
	else printf("khong co phan tu nao la snt");
}

void sumOfArr(int arr[], int n)
{
	int sum=0,count=0;
	for(int i=0; i<n; i++)	
	{
		if(arr[i]%3==0 && arr[i]%2==0)
		{
		   sum+=arr[i];
		   count++;	
		} 
    }	
    if(count!=0) printf("\ntong cua cac phan tu chan chia het cho 3 la: %d",sum);
    else printf("\nkhong co phan tu nao chan chia het cho 3");
}

void sumOddOfArr(int arr[], int n)
{
	int sum=0,count=0;
	for(int i=0; i<n; i++)	
	{
		if(arr[i]%2!=0)
		{
		   sum+=arr[i];
		   count++;	
		} 
    }
	if(count!=0) printf("\ntrung binh cong cua cac phan tu le la: %.2f",(float)sum/count);
    else printf("\nkhong co phan tu nao le");	
}

bool checkSquareNum(int n)
{
	if ((int)sqrt(n)*sqrt(n) == n) return true;
	else return false;
}

void sumSquareNum(int arr[], int n)
{
	int i,sum=0;
	printf("\ncac so chinh phuong co trong mang la: ");
	for(i=0; i<n; i++)
	{
		if(checkSquareNum(arr[i])) 
		{
			sum+=arr[i];
		    printf("%d ",arr[i]);
		}
	}
	printf("\ntong cua cac so chinh phuong co trong mang: %d",sum);
}

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void sort_inc(int arr[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i; j<n; j++)
		{
			if(arr[i]>arr[j]) swap(arr[i],arr[j]);
		}
	}
}

void sort_dec(int arr[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i; j<n; j++)
		{
			if(arr[i]<arr[j]) swap(arr[i],arr[j]);
		}
	}
}

void odd_inc(int arr[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		if(arr[i]%2==0) continue;
		for(j=i; j<n; j++)
		{
			if(arr[j]%2==0) continue;
			if(arr[i]>arr[j]) swap(arr[i],arr[j]);
		}
	}
}

void even_dec(int arr[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		if(arr[i]%2!=0) continue;
		for(j=i; j<n; j++)
		{
			if(arr[j]%2!=0) continue;
			if(arr[i]<arr[j]) swap(arr[i],arr[j]);
		}
	}
}

int main() {
	int arr[max],n;
	int luachon;
	input_Arr(arr,n);
	output_Arr(arr,n);
//	maxArr(arr,n);
//	minArr(arr,n);
//	primeOfArr(arr,n);
//	sumOfArr(arr,n);
//	sumOddOfArr(arr,n);
//	sumSquareNum(arr,n);
//	sort_inc(arr,n);
//	output_Arr(arr,n);
//	sort_dec(arr,n);
//	output_Arr(arr,n);
//	odd_inc(arr,n);
//	output_Arr(arr,n);
//	even_dec(arr,n);
//	output_Arr(arr,n);

printf("\t1.tim phan tu lon nhat trong mang");
printf("\n\t2.tim phan tu nho nhat trong mang");
printf("\n\t3.tinh trung binh cong cua cac so nguyen to co trong mang");
printf("\n\t4.tinh tong cua cac phan tu chan chia het cho 3");
printf("\n\t5.tinh trung binh cong cua cac phan tu le co trong mang");
printf("\n\t6.tinh tong cua cac so chinh phuong co trong mang");
printf("\n\t7.sap xep mang theo thu tu tang dan");
printf("\n\t8.sap xep mang theo thu tu giam dan");
printf("\n\t9.sap xep cac phan tu le trong mang theo thu tu tang dan");
printf("\n\t10.sap xep cac phan tu chan trong mang theo thu tu giam dan");
printf("\n\tchon: ");
scanf("%d",&luachon);
switch(luachon) {
	case 1: maxArr(arr,n); break;
	case 2: minArr(arr,n); break;
	case 3: primeOfArr(arr,n); break;
	case 4: sumOfArr(arr,n); break;
	case 5: sumOddOfArr(arr,n); break;
	case 6: sumSquareNum(arr,n); break;
	case 7: sort_inc(arr,n); output_Arr(arr,n); break;
	case 8: sort_dec(arr,n); output_Arr(arr,n); break;
	case 9: odd_inc(arr,n); output_Arr(arr,n); break;
	case 10: even_dec(arr,n); output_Arr(arr,n); break;
	default : printf("lua chon khong thoa man");
}
	return 0;
}
