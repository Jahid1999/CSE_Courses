#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	double d= 10.000035;
	int i = (int) d;
	cout << setprecision(7) << i << endl << d << endl;
	
	return 0;
}
