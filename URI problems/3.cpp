#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	double A,B,MEDIA;
	
	cin >> A >> B;
	
	MEDIA=(A*3.5 + B*7.5)/(3.5+7.5);
	
	cout << "MEDIA = " << setprecision(5) << fixed<< MEDIA << endl;
	
	return 0;
}


