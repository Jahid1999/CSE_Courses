#include <bits/stdc++.h>

using namespace std;

int n;

struct Record
{
	string name, phoneNumber;
	int age, height;
	float weight;
};

Record *SR;

Record* createRecord(void)
{
		Record *SR = new Record[n];
		return SR;
}

void deleteRecord(Record *sR)
{
	delete [] sR;
}

void readInputs(void)
{
	cin >> n;
	
	SR = createRecord();
	
	
	string fileName;
	string temp;
	
	getline(cin, temp);
	
	cout<< "please enter file name: ";
	cin >> fileName;
	
	ifstream iFile;
	iFile.open(fileName.c_str() );
	if(iFile.is_open())
	{
		while(!iFile.eof())
			{
				for (int i=0; i<n; i++)
				{
					getline(iFile , SR[i].name);
					getline(iFile , SR[i].phoneNumber);
		
					iFile  >> SR[i].age  >> SR[i].height >> SR[i].weight;
				}
				
			}
		
		iFile.close();
	}
	else
	{
		cout << "File did't open" << endl;
	}
	
}

void printRecords(void)
{
	for (int i=0; i<n; i++)
	{
		cout << SR[i].name << endl
			<< SR[i].phoneNumber << endl
			<< SR[i].age << endl
			<< SR[i].height << endl
			<< SR[i].weight << endl;
	}
}

int main(void)
{
	readInputs();
	
	printRecords();
	
	deleteRecord(SR);
	
	return 0;
}







/*
#include <bits/stdc++.h>

using namespace std;

int n;

struct Record
{
	string name, phoneNumber;
	int age, height;
	float weight;
};

Record *SR;

Record* createRecord(void)
{
		Record *SR = new Record[n];
		return SR;
}

void deleteRecord(Record *sR)
{
	delete [] sR;
}

void readInputs(void)
{
	cin >> n;
	
	SR = createRecord();
	
	for (int i=0; i<n; i++)
	{
		string temp;
		getline(cin, temp);
		
		getline(cin, SR[i].name);
		getline(cin, SR[i].phoneNumber);
		
		cin >> SR[i].age >> SR[i].weight >> SR[i].height;
	}
}

void printRecords(void)
{
	for (int i=0; i<n; i++)
	{
		cout << SR[i].name << endl
			<< SR[i].phoneNumber << endl
			<< SR[i].age << endl
			<< SR[i].weight << endl
			<< SR[i].height << endl;
	}
}

int main(void)
{
	readInputs();
	
	printRecords();
	
	deleteRecord(SR);
	
	return 0;
}
*/
