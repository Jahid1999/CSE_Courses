#include <bits/stdc++.h>

#define PI acos(-1)

using namespace std;

int main()
{
    int n,r1,r2,h,p;
        
    double x,r3,V;

    cin >> n;

    for(int i =0; i<n; i++) 
    {
         cin >> r1 >> r2 >> h >> p;
          
         x=h*r2/(double)(r1-r2);
               
         r3 = r2+ (r1-r2)*((double)(p)/h);
         
                
         V=((PI*r3*r3*(p+x))/3.0) -((PI*r2*r2*x)/3.0);
                
         cout << "Case " << i+1 << ": " <<  setprecision(9) << fixed << V << endl;

    }
                
    return 0;

}


