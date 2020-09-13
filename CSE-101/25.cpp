#include <iostream>

using namespace std;

int** makeMatrix(int r, int c)
{
	int **matrix;
	matrix = new int* [r];
	for(int i=0; i<r; i++)
	{
		matrix[i] = new int [c];
	}
	return matrix;
}

void initializeInputs(int **matrix, int r, int c)
{
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cin >> matrix[i][j];
		}
	}

}

void addMatrix(int **pM, int ** dM, int **oM, int r, int c)
{
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			oM[i][j] = pM[i][j] + dM[i][j];
		}
	}
}

void printOutput(int **oM, int r, int c)
{
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout << oM[i][j] << "\t";
		}
		cout << endl;
	}
}

void deleteMatrix(int **matrix, int r)
{
	for(int i=0; i<r; i++)
	{
		delete [] matrix[i];
	}
	delete [] matrix;
}

int main (void)
{
	int **pM;
	int **dM;
	int **oM;

	int r, c;
	
	cin >> r >> c;

	pM = makeMatrix(r,c);
	dM = makeMatrix(r,c);
	oM = makeMatrix(r,c);
	
	initializeInputs(pM, r, c);
	initializeInputs(dM, r, c);
	
	addMatrix(pM, dM, oM, r, c);
	
	printOutput(oM, r, c);
	
	deleteMatrix(pM, r);
	deleteMatrix(dM, r);
	deleteMatrix(oM, r);
	
	return 0;
}

/*
//all in main dynamic

int main (void)
{
	int **pM;
	int **dM;
	int **oM;

	int r, c;
	
	//constractMatrix(pM, dM, oM, r, c);
	cin >> r >> c ;
	
	pM = new int* [r];
	for(int i=0; i<r; i++)
	{
		pM[i] = new int [c];
	}
	
	dM = new int* [r];
	for(int i=0; i<r; i++)
	{
		dM[i] = new int [c];
	}
	
	oM = new int* [r];
	for(int i=0; i<r; i++)
	{
		oM[i] = new int [c];
	}
	
	//initializeInputs(pM, dM, oM, r, c);
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cin >> pM[i][j];
		}
	}
	
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cin >> dM[i][j];
		}
	}
	
	//addMatrix();
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			oM[i][j] = pM[i][j] + dM[i][j];
		}
	}
	
	//printOutput();
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout << oM[i][j] << "\t";
		}
		cout << endl;
	}
	
	//deleteMatrix(pM, dM, oM, r, c);
	for(int i=0; i<r; i++)
	{
		delete [] pM[i];
		delete [] dM[i];
		delete [] oM[i];
	}
	delete [] pM;
	delete [] dM;
	delete [] oM;
	
	return 0;
}
*/


/*
//all matrixpointers are global

int **pM;
int **dM;
int **oM;

int r, c;

void constractMatrix()
{
	cin >> r >> c ;
	
	pM = new int* [r];
	for(int i=0; i<r; i++)
	{
		pM[i] = new int [c];
	}
	
	dM = new int* [r];
	for(int i=0; i<r; i++)
	{
		dM[i] = new int [c];
	}
	
	oM = new int* [r];
	for(int i=0; i<r; i++)
	{
		oM[i] = new int [c];
	}
}

void deleteMatrix()
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
	constractMatrix();
	initializeInputs();
	addMatrix();
	printOutput();
	deleteMatrix();
	
	return 0;
}
*/


/*
//all matrix local
void initializeInputs(int (*pM)[3], int (*dM)[3])
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

void addMatrix(int (*pM)[3], int (*dM)[3], int (*oM)[3])
{
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			oM[i][j] = pM[i][j] + dM[i][j];
		}
	}
}

void printOutput(int (*oM)[3])
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

/*
//all matrix global

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
