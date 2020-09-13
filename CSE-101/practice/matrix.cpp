#include <iostream>

using namespace std;

int main(void)
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}































#include<iostream>
 
using namespace std;
 
int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    cout<<"Enter rows and columns of first matrix:";
    cin>>m>>n;
    cout<<"Enter rows and columns of second matrix:";
    cin>>p>>q;
 
    if(n==p)
    {
        cout<<"\nEnter first matrix:\n";
        for(i=0;i<m;++i)
            for(j=0;j<n;++j)
                cin>>a[i][j];
 
        cout<<"\nEnter second matrix:\n";
        for(i=0;i<p;++i)
            for(j=0;j<q;++j)
                cin>>b[i][j];
 
        cout<<"\nThe new matrix is:\n";
        for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
                c[i][j]=0;
                for(k=0;k<n;++k)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                cout<<c[i][j]<<" ";
        }
            cout<<"\n";
        }
    }
    else
        cout<<"\nSorry!!!! Matrix multiplication can't be done";
 
    return 0;
}
