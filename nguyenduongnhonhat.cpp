#include <iostream>
#include <math.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuy?n ranh gi?i c?a m?ng dã s?p x?p và chua s?p x?p
    for (i = 0; i < n-1; i++)
    {
    // Tìm ph?n t? nh? nh?t trong m?ng chua s?p x?p
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // Ð?i ch? ph?n t? nh? nh?t v?i ph?n t? d?u tiên
        swap(arr[min_idx], arr[i]);
    }
}
void nhap(int a[],int n)
{
	for (int i=0; i<n; i++)
		cin>>a[i];
}
int NguyenDuongMin(int a[],int n) {
	int dem=0;
	int b[1000],k;
	for (int i=0; i<n-1 ;i++)
		if (a[i]<0) dem++;
	if (dem==n-1) return 1;
	int j=0;
	for (int i=0; i<n-1 ;i++)
		if (a[i]>0) 
			{
				b[j]=a[i];
				j++;
			}
	selectionSort(b,j);
	for (int i=0; i<j; i++)
		if (b[i]+1!=b[i+1])
			return b[i]+1;
}
int main()
{
	int t,n,a[10000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		nhap(a,n-1);
		cout<<NguyenDuongMin(a,n)<<endl;
	}
	return 0;
}
