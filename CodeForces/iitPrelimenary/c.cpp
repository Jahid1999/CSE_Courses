#include <iostream>

using namespace std;

int main (void)
{
	int n,num,g1=0,g2=0,g3=0,g4=0,ans=0,t;
	
	cin >> n;

	for(int i=0;i<n;i++)
	{
		cin >> num;

		if(num==1) 
			g1++;
		else if(num==2)
			g2++;
		else if(num==3) 
			g3++;
		else 
			g4++;
	}
	
	ans= ans+g4;
	
	if(g1>g3) 
	{
		ans=ans+g3;
		g1=g1-g3;
	}
	
	else 
	{
		ans=ans+g3;
		g1=0;
	}
	
	if (g2%2==0)
	{
		ans=(ans+g2)/2;
		g2=0;
	}
	
	else
	{
		ans=(ans+g2)/2;
		g2=1;
	}

	t=g2*2+g1;

	if(t%4==0) 
		ans=ans+(t/4);
	else 
		ans=ans+(t/4)+1;

	cout << ans << endl;
	
	return 0;
}
