#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	int n;
	cin >> n;
	for(n=1;n<=20;n++)
	{
		for(int i=1;i<=10;i++)
		{
			cout << n <<" x " << i << "=" << n*i <<endl;
		} cout<<endl;
	}
		return 0;
}
