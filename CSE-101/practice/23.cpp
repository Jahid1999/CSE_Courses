#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	int n,i=1;
	cin >> n;
	for( ; ; )
	{
		cout << n <<" x " << i << "=" << n*i <<endl;
		i=i+1;
		if(i>10){
			break;
		}
	}
	
		return 0;
}

