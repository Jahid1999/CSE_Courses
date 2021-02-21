#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

#define size 10


void makeTempMatrix(double a[size][size], double tem[size][size], int rowNumber, int columnNumber, int n)
{
    int rowOfTem=0,columnOfTem=0;
    for(int row=0;row<n;row++)
    {
        if(row == rowNumber) continue;
        for(int column=0;column<n;column++)
        {
            if(column == columnNumber) continue;
            tem[rowOfTem][columnOfTem++]=a[row][column];
            if(columnOfTem == n -1)
            {
                columnOfTem = 0;
                rowOfTem++;
            }
        }
    }
}

int getDeterminants(double a[size][size],int n)
{
    if(n==0) return 1;
    double temp[size][size];
    int sign;
    int determinant = 0;
    for(int i=0;i<n;i++)
    {
        if(i%2) sign = -1;
        else sign = 1;
        makeTempMatrix(a,temp,0,i,n);
        determinant += sign*a[0][i]*getDeterminants(temp,n-1);
    }
    return determinant;
}

void getAdjoint(double a[size][size], int adjoint[size][size],int n)
{
    double tem[size][size];
    int sign;
    for(int row = 0; row<n; row++)
    {
        for(int column = 0; column<n; column++)
        {
            if((row+column)%2) sign = -1;
            else sign = 1;
            makeTempMatrix(a,tem,row,column,n);
            int adjointValue = getDeterminants(tem,n-1);
            adjoint[row][column] = sign*adjointValue;
        }
    }
    //transpose
    int adjoint2[size][size];
    for(int row = 0; row<n; row++)
    {
        for(int column = 0; column<n; column++)
        {
            adjoint2[row][column]=adjoint[column][row];
        }
    }
    for(int row = 0; row<n; row++)
    {
        for(int column = 0; column<n; column++)
        {
            adjoint[row][column]=adjoint2[row][column];
        }
    }
}

void makeInverse(double inverse[size][size], int adjoint[size][size], int determinant, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            inverse[i][j] = adjoint[i][j]/ (double) determinant;
        }
    }
}

void calculateResult(double inverse[size][size], double result[],double a[size][size],int n)
{
    for(int i=0;i<n;i++)
    {
        result[i]=0;
        for(int j=0;j<n;j++)
        {
            result[i] += inverse[i][j]*a[j][n];
        }
    }
}
int main()
{
    ifstream iFile;
    ofstream oFile;
    
    int n;
    int count=1;
    
    iFile.open("input.txt");
    oFile.open("output.txt", ofstream::app);
    
    if(iFile.is_open() && oFile.is_open())
    {
    	while(!iFile.eof())
		{
		    double coEffs[size][size];
		    double result[size]={0.0};
		    int adjoint[size][size];
		    double inverse[size][size];
		    
		    iFile >> n;
		    
		    oFile << "********** Test:" << count++ << " **********" << endl << endl;
		    oFile<< "Matrix elimination method--->"<<endl;
		    
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<=n;j++)
		        {
		            iFile>>coEffs[i][j];
		        }
		    }
		    
		    int determinant = getDeterminants(coEffs,n);

		    if(determinant == 0)
		    {
		        oFile << "Impossible inversion! Please give a non zero matrix." << endl;
		        return 0;
		    }

		    getAdjoint(coEffs,adjoint,n);

		    makeInverse(inverse,adjoint,determinant,size);
		    calculateResult(inverse, result,coEffs,n);
		    
		    for(int i=0;i<n;i++)
		    {
		        oFile << result[i] << " ";
		    }
		    
		    oFile << endl << endl;

		    oFile << "Gauss-Jordan Method--->" << endl;
		    
		    for(int j=0;j<n;j++)
		    {
		        for(int i=0;i<n;i++)
		        {
		            if(i==j) continue;
		            double div = coEffs[i][j]/coEffs[j][j];
		            for(int k=0;k<=n;k++)
		            {
		                coEffs[i][k] = coEffs[i][k] - div*coEffs[j][k];
		            }
		        }
		    }
		    
		    for(int i=0;i<n;i++)
		    {
		        coEffs[i][n]= coEffs[i][n]/coEffs[i][i];
		    }
		    for(int i=0;i<n;i++)
		    {
		        oFile << coEffs[i][n] << " ";
		    }
		    oFile << endl << endl << "--------------O--------------" << endl << endl;
		}
    
    }
    
    else
    {
    	cout << "Error while opening file." << endl;
    }
    
    
}
