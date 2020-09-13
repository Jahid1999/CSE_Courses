#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int t,s,d;
	double l;
	
	cin >> t >> s;
	
	d= t * s;
	l= d /12.0;
	
	cout << setprecision(3) << fixed << l << endl;
	
	return 0;
}
