#include <iostream>

using namespace std;

int main (void)
{
	int i,j,k;
	string a=" ",b;
	
	cout<<"enter the number of steps";
	cin>>k;
	cout<<"enter symbol";
	cin>>b;
	
	for(j=1;j<k+1;j++)
	{
		for(i=1;i<(k*2);i++)
		{
			if(i<(k-j+1)||i>(j+k-1))
			{
				cout<<b;
			}
			else
			{
				cout<<a;	
				
			}
		}
		cout<<endl;
	}
	
	return 0;
}
