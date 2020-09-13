#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
	//cout << "What is your faltu name?" << endl;
	string fileName;
	cin >> fileName;
	cout << fileName << endl;
	
	ifstream iFile;
	iFile.open(fileName.c_str() );
	if(iFile.is_open())
	{
		int input;
	
		iFile >> input;
		while(!iFile.eof())
		{
			cout << input*input << endl;
			iFile >> input;
		}
		
		iFile.close();
	}
	else
	{
		cout << "File khule nai" << endl;
	}
	
	return 0;
}
