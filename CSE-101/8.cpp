#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
	int i=999999999;
	float f=12.3456;
	double d=123.4567897, i1=10.98456, i2=10.8766548, i3=1.34567458;
	char c='a';
	string s="shondehojonok";
	
	cout << i << endl;
	
	cout << setw(15) << setfill('x') << f << "\t\t" << d << endl;
	
	
	
	cout << setw(15) << setfill('-') << setprecision(8) << i1 << endl;
	cout << setw(15) << setfill('-') << i2 <<  endl;
	cout << setw(15) << setfill('-') << i3 << endl;
	
	cout << i1 << endl;
	cout << i2 << endl;
	cout << i3 << endl;
	
	
	//"\t" << c << endl << s << endl;
	
	//cout << "hello, how are you?" << 'x' << endl;
	
	
	return 0;
}
