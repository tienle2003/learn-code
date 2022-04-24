#include <stdio.h>
#define MAX 100


// Nhap mang 
void input_array(int arr[], int *len)
{
    puts(">>> Nhap mang:");
    do
    {
        printf("\t-Nhap do dai mang (5-99): "); scanf("%d", &(*len));

    } while (*len<=4 && *len>=100);

    puts("\n\t-Nhap cac phan tu trong mang:");
    int i;
    for (i=0; i<*len; i++)
    {
        printf("\tNhap gia tri thu %d: ", i+1); scanf("%d", &arr[i]);
    } puts("");
}

// Xuat mang
void show_array(int arr[], int len)
{
    int i, count=0;
    puts(">>> Xem mang: ");
    for(i=0; i<len; i++)
    {
        printf("%6d", arr[i]); count++;
        if (count==10) puts("");
    }
}

void day_la_ten_ham(int arr[], int len)
{
    int i, count=0, sum=0, n;
    printf(">>> Nhap gia tri: "); scanf("%d", &n);
    printf("Cac uoc cua %d trong mang la: ", n);
    for(i=0; i<len; i++)
    {
        if(n%arr[i]==0)
        {
            printf("%6d", arr[i]);
            count++; sum+=arr[i];
        }
    }
    if (count!=0) printf("\n\t>> Trung binh cong cac so do la: %.2f", (float) sum/count);
}

int main()
{
    int arr[MAX], len;
    input_array(arr, &len); show_array(arr, len);
    day_la_ten_ham(arr, len);
    return 0;
}
