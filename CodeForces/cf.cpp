#include <bits/stdc++.h>
 
#define f1(x,y,z)  (6+y-2*z)/10
#define f2(x,y,z)  (22+x-z)/11
#define f3(x,y,z)  (-10-2*x+y)/10

using namespace std;

/* Main function */
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int step=1;

 /* Setting precision and writing floating point values in fixed-point notation. */
 cout<< setprecision(6)<< fixed;

 /* Input */
 /* Reading tolerable error */
 cout<<"Enter tolerable error: ";
 cin>>e;

 do
 {
  /* Calculation */
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
 

  /* Error */
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);

  step++;

  /* Set value for next iteration */
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }while(e1>e && e2>e && e3>e);

 cout << "Solution: x = " << x1 << ", y = " << y1 << " and z = " << z1 << endl;
 return 0;
}
