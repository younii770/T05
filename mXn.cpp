#include<iostream>

using namespace std;
 
int main()
{
	int i,j,n,m;
	cout<<"Enter N:"; 
	cin>>n;
	cout<<"Enter M:"; 
	cin>>m;

	for(i=1;i<=n;i++)
	{
		cout<<"\n";
	for(j=1;j<=m;j++)
		cout<<i*j<<"\t";
	}

	return 0;
}
