#include <iostream>
using namespace std;
#include <fstream>
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
void doctep(float a[],int &n)
{
	fstream fd;
	fd.open("input.dat",ios::in);
	fd.read()
	
}
void ghitep(float a[], int &n)
{
	fstream fg;
	
}
int main()
{
	float a[100];
	int n;
	
	return 0;
}
