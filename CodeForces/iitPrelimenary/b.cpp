#include<iostream>

using namespace std;

int main(void)
{
	 int n,u,i;
	 
	 cin >> n;

	 for(i=5;i<=n;i=2*i)
	 {
		if(i<n) n=n-i;

		else 
			break;

	 }
	 
	 if(n>0 && n<=(i/5)) 
	 	cout<<"Sheldon"<<endl;
	 	
	 else if(n>(i/5) && n<=2*(i/5)) 
	 	cout<<"Leonard"<<endl;
	 	
	 else if(n>2*(i/5) && n<=3*(i/5)) 
	 	cout<<"Penny"<<endl;
	 
	 else if(n>3*(i/5) && n<=4*(i/5)) 
	 	cout<<"Rajesh"<<endl;
	 	
	 else if(n>4*(i/5) && n<=5*(i/5)) 
	 	cout<<"Howard"<<endl;

	 return 0;
}
