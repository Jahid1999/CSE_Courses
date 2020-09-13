#include <iostream>
#include <fstream>

using namespace std;

int main (void)
{
	ofstream oFile;
	oFile.open("testOut.txt", ofstream::app);
	if(oFile.is_open())
	{
		oFile << "Tini atkiye uthlin" << endl;
		int i;
		cin >> i;
		cout << i << endl;
		oFile.close();
	}
	else
	{
		cout << "file khule nai" << endl;
	}
	
	return 0;
}


/*

int numberOfStudentsInTheUniversity;
*/
