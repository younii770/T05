#include<iostream>
#include<conio.h>
#include<stdio.h> 
using namespace std;
main()
{
	int i=0,word=1;
	char str[100],ch;
	cout<<"please enter a string:";
gets(str);
	while(true)
	{
	ch=str[i];
	if(ch==' ')
	word++;
		else if(ch>='0' && ch<='9')

	break;
	i++;
	};
cout<<"\nTedad kalamat : "<<word;

return 0;
}
