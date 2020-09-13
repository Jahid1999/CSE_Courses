#include <iostream>

using namespace std;

void createMatrix(int **pM, int **dM, int **oM, int r, int c)
{
	pM = new int*[r];
	for(int i=0; i<r; i++)
		pM[i] = new int [c];
		
	dM = new int*[r];
	for(int i=0; i<r; i++)
		dM[i] = new int [c];
		
	oM = new int*[r];
	for(int i=0; i<r; i++)
		oM[i] = new int [c];
}

void deleteMatrix(int **pM, int **dM, int **oM, int r, int c)
{
	for(int i=0; i<r; i++)
	{
		delete [] pM[i];
		delete [] dM[i];
		delete [] oM[i];
	}
	
	delete [] pM;
	delete [] dM;
	delete [] oM;
}

void initializeInputs(int **pM, int **dM)
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> pM[i][j];
		}
	}
	
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> dM[i][j];
		}
	}
}

void addMatrix(int **pM, int **dM, int **oM)
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			oM[i][j] = pM[i][j] + dM[i][j];
		}
	}
}

void printOutput(int **oM)
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << oM[i][j] << "\t";
		}
		cout << endl;
	}
}

int main (void)
{
	int **pM;
	int **dM;
	int **oM;
	
	createMatrix(pM, dM, oM, 4,3);
	initializeInputs(pM, dM);
	//addMatrix(pM, dM, oM);
	//printOutput(oM);
	//deleteMatrix(pM, dM, oM, 4,3);
	
	return 0;
}

/*
int **pM;
int **dM;
int **oM;

void createMatrix(int r, int c)
{
	pM = new int*[r];
	for(int i=0; i<r; i++)
		pM[i] = new int [c];
		
	dM = new int*[r];
	for(int i=0; i<r; i++)
		dM[i] = new int [c];
		
	oM = new int*[r];
	for(int i=0; i<r; i++)
		oM[i] = new int [c];
}

void deleteMatrix(int r, int c)
{
	for(int i=0; i<r; i++)
	{
		delete [] pM[i];
		delete [] dM[i];
		delete [] oM[i];
	}
	
	delete [] pM;
	delete [] dM;
	delete [] oM;
}

void initializeInputs()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> pM[i][j];
		}
	}
	
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> dM[i][j];
		}
	}
}

void addMatrix()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			oM[i][j] = pM[i][j] + dM[i][j];
		}
	}
}

void printOutput()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << oM[i][j] << "\t";
		}
		cout << endl;
	}
}

int main (void)
{
	createMatrix(4,3);
	initializeInputs();
	addMatrix();
	printOutput();
	//deleteMatrix(4,3);
	
	return 0;
}
*/

/*

int pM[4][3];
int dM[4][3];
int oM[4][3];

void initializeInputs()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> pM[i][j];
		}
	}
	
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> dM[i][j];
		}
	}
}

void addMatrix()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			oM[i][j] = pM[i][j] + dM[i][j];
		}
	}
}

void printOutput()
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << oM[i][j] << "\t";
		}
		cout << endl;
	}
}

int main (void)
{
	initializeInputs();
	addMatrix();
	printOutput();
	
	return 0;
}

*/

/*

void initializeInputs(int **pM, int **dM)
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> pM[i][j];
		}
	}
	
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cin >> dM[i][j];
		}
	}
}

void addMatrix(int **pM, int **dM, int **oM)
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			oM[i][j] = pM[i][j] + dM[i][j];
		}
	}
}

void printOutput(int **oM)
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout << oM[i][j] << "\t";
		}
		cout << endl;
	}
}

int main (void)
{
	
	int pM[4][3];
	int dM[4][3];
	int oM[4][3];
	
	initializeInputs(pM, dM);
	addMatrix(pM, dM, oM);
	printOutput(oM);
	
	return 0;
}
*/
