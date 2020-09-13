#include<bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,m,r,count=0;
	
	cin >> n >> m;
	
	if(n==m)
	{
		cout << 0 << endl;
		return 0;
	}
	else if((m/2 < n) && (m/3 < n))
	{
		cout << -1 << endl;
		return 0;
	}
	
	else
	{
		for(int i=m;i>=n; )
		{
			if(i==n)
			{
				cout << count << endl;
				return 0;
			}
			
			else if((i%3==0) && (i/3)%n==0)
		    {
				i=i/3;
				count++;
		    }
		    
		    else if((i%2==0) && (i/2)%n==0)
		    {
		     	i=i/2;
		     	count++;     
		    }
			
			else
			{
				cout << -1 << endl;
				
				return 0;
			}
		}
	}
	
	
	return 0;
}
