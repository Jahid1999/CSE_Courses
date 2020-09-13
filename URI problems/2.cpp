#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	double area,R,n;
	
	n=3.14159;
	
	cin >> R;
	
	area= n * R * R;
	
	cout << "A=" << setprecision(4) << fixed << area << endl;
	
	return 0;
}


