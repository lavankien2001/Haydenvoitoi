#include <iostream>
using namespace std;
#include<math.h>
int nguyento( int k)
{
	if ( k<2) return 0;
	for (int i = 2; i<= sqrt(k); i++)
	if ( k % i ==0) return 0;
	return 1;
}
main ()
{
	int a,b;
	do
	{
	    cin>>a>>b;
	}while (a<0||b<0);
	if (a>b) swap(a,b);
	for (int i=a; i<=b; i++)
		if (nguyento(i)) cout<<i<<" ";
}
