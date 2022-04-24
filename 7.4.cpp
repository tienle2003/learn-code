#include <stdio.h>
#include <math.h>

const int max=100;
void nhapMang(int arr[], int &n)
{
	do{
		printf("nhap so luong phan tu: ");
	    scanf("%d",&n);
	    if(0>=n || n>100)
	       printf("nhap lai!");
	}while(0>=n || n>100);
	for(int i=0; i<n; i++)
	{
		printf("nhap gia tri phan tu thu %d:",i+1);
		scanf("%d", &arr[i]);	
	}
}

void xuatMang(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}

void swap(int &a, int &b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}

void sapXep(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[i] > arr[j]) swap(arr[i],arr[j]);
		}
	}
}


void AddNumber(int a[] , int&n , int pos , int value){
	for(int i = n ; i> pos ; i--){
		a[i] = a[i-1];
	}
	n++; a[pos] = value;
}

void inSert(int arr[], int &n,  int &value)
{	printf("\nnhap gia tri phan tu can chen vao mang:");
	scanf("%d",&value);
	for(int i=0; i<n-1; i++)
	{
		if(arr[i]<=value && value<arr[i+1]){
		AddNumber(arr , n , i+1 , value);
		   i++;
		}
	}
	if(value>=arr[n-1])
		AddNumber(arr , n , n , value);
	if(value<arr[0])
	    AddNumber(arr , n , 0 , value);
}

void mangTron(int a[], int b[], int c[], int m, int n, int &k)
{
	int i=0, j=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	for(;i<m;i++)
	{
		c[k]=a[i];
		k++;
	}
	for(;j<n;j++)
	{
		c[k]=b[j];
		k++;
	}
}

int main() {
	int a[max],b[max],c[max+max];
	int m,n,k=0,value;
	puts("nhap mang a:\n");
    nhapMang(a, m);
    xuatMang(a, m);
    puts("\nmang da duoc sap xep lai:\n");
    sapXep(a, m);
    xuatMang(a, m);
    inSert(a, m, value);
    xuatMang(a, m);
    puts("\nnhap mang b:\n");
    nhapMang(b, n);
    xuatMang(b, n);
    puts("\nmang da duoc sap xep lai:\n");
    sapXep(b, n);
    xuatMang(b, n);
    inSert(b, n, value);
    xuatMang(b, n);
    puts("\nmang tron c:\n");
    mangTron(a, b, c, m, n, k);
    xuatMang(c, k);
}

