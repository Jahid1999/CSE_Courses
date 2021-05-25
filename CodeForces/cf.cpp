#include <bits/stdc++.h>

using namespace std;

int main()
{	 
	int k2, k3, k5, k6, n256, n32, ans=0;
	
	cin >> k2 >> k3 >> k5 >> k6;
	
	n256 = min(min(k5, k6), k2);
	n32 = min(k3, (k2 - n256));
	
	ans = 32*n32 + 256*n256;
	cout << ans << endl;
	
	return 0;
}
