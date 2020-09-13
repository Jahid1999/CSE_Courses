#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	int a,b,c;
	
	for(a=1;a<=3;a++){
	
		for(b=1;b<=3;b++){
		
			for(c=1;c<=3;c++){
				if(b!=a && c!=a && c!=b){
			
				cout << a << "," << b << "," << c <<endl;
				
			 	}
			}
		}
	}
		return 0;
		
}	
