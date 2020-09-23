#include <iostream>
using namespace std;
#include <string.h>
main ()
{
	char s[200];int t; cin>>t;
	while(t--)
	{
	fflush(stdin);
	cin>>s;
	int h;
	h=strlen(s);
	if (s[h-2]=='8'&& s[h-1]=='6')
		cout<<"1\n";
		else 
		cout<<"0\n";
	}
}
