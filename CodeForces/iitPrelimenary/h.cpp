#include <bits/stdc++.h>

#define PI 2*acos(0.0)

using namespace std;

int main()
{
    int T;
    
    double r,Asq,Acir,lsq;
    
    cin >> T;
    
    for(int i=0;i<T;i++)
    {
		cin >> r;
		lsq=2*r;
		
		Asq= lsq*lsq;
		Acir=PI*r*r;
		
		cout << "Case " << i+1 << ": " << setprecision(2) << fixed <<  Asq-Acir << endl;
		
    
    } 
              
    return 0;

}

