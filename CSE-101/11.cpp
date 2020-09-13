#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
	ifstream iFile;
	iFile.open("6in.txt");
	if(iFile.is_open())
	{
		ofstream oFile;
		oFile.open("lamisa.txt");
		if(oFile.is_open())
		{
			int input;
			iFile >> input;
			while(!iFile.eof())
			{
				oFile << input*input << endl;
				iFile >> input;
				cout << "Khaj kata" << endl;
			}
			oFile.close();
		}
		else
		{
			cout << "Cannot Open Output File" << endl;
		}
		iFile.close();
	}
	else
	{
		cout << "Cannot Open Input File" << endl;
	}
	
	string s;
	cout << "mama kemon achos?" << endl;
	cin >> s;
	cout << "amio "  << s << endl;
	
	return 0;
}
