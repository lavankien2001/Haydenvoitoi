#include <iostream>
using namespace std;
void timso(int m,int s)
{
	int a[1000];
	if (m==1||s==0)
		 cout<<"0"<<" "<<"0";
	else
	if (s=0||s>9*m) cout<<"-1 -1";
	else
	{
	int temp=s;
	for (int i=0; i<m; i++) a[i]=0;
	
	for (int i=0; i<m; i++)
	{
		for (int j=9; j>0; j--)
		{
			if (temp-j>0)
			{
				a[i]=j;
				temp=temp-j;
				break;
			}	
			if (a[i]==0) break;
		}
		
	}
	for (int i=0; i<m; i++) cout<<a[i];}
}
int main()
{
	int n,s;
	cin>>n;
	cin>>s;
	timso(n,s);
	return 0;
}

