#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
	cout << "What is your file name?" << endl;
	string fileName;
	cin >> fileName;
	//cout << fileName << endl;
	
	ifstream iFile;
	iFile.open(fileName.c_str() );
	if(iFile.is_open())
	{
		ofstream oFile;
		oFile.open("5out.txt",ofstream::app);
		if(oFile.is_open())
		{	
			int input;
	
			iFile >> input;
			while(!iFile.eof())
			{
				/*ofstream oFile;
				iFile.open("5out.txt");
				if(oFile.is_open())
				{*/
					oFile << input*input << endl;
					iFile >> input;
				}
				oFile.close();
		}	
		else
		{
			cout << "output file khule nai" << endl;
		}
		
		iFile.close();
	}
	else
	{
		cout << "input File khule nai" << endl;
	}
	
	
	return 0;
}
