#include<iostream>

using namespace std;

int main(void)
{
	while(1)
	
	{
	
	int n1,n2,choice;
	double n3,n4;
	
	cout << "1.Intiger Calculator" << endl << "2.Fraction Calculator" << endl << "3.exit" << endl;
	
	cin >> choice; 
	
	if(choice == 1)
	{
		cout << "1.Addition" << endl << "2.Subtraction" << endl << "3.Devide" << endl << "4.Multiplication" << endl << "5.Modulas" << endl;
		
		cin >> choice;
		
		if(choice == 1)
		{
			cout << "Enter first number" << endl;
			cin >> n1;
			
			cout << "Enter second number" << endl;
			cin >> n2;
			
			cout << n1+n2 << endl;
		}
		
		else if(choice == 2)
		{
			cout << "Enter first number" << endl;
			cin >> n1;
			
			cout << "Enter second number" << endl;
			cin >> n2;
			
			cout << n1-n2 << endl;
		}
		
		else if(choice == 3)
		{
			cout << "Enter first number" << endl;
			cin >> n1;
			
			cout << "Enter second number" << endl;
			cin >> n2;
			
			cout << n1/n2 << endl;
		}
		
		else if(choice == 4)
		{
			cout << "Enter first number" << endl;
			cin >> n1;
			
			cout << "Enter second number" << endl;
			cin >> n2;
			
			cout << n1*n2 << endl;
		}	
		
		else if(choice == 5)
		{
			cout << "Enter first number" << endl;
			cin >> n1;
			
			cout << "Enter second number" << endl;
			cin >> n2;
			
			cout << n1%n2 << endl;
		}
		
		else
			cout << "Wrong Input" << endl;
		}
		
	else if(choice == 2)
	{
		cout << "1.Addition" << endl << "2.Subtraction" << endl << "3.Multiplication" << endl << "4.Divition"  << endl;
		
		cin >> choice;
		
		if(choice == 1)
		{
			cout << "Enter first number" << endl;
			cin >> n3;
			
			cout << "Enter second number" << endl;
			cin >> n4;
			
			cout << n4+n3 << endl;
		}
		
		else if(choice == 2)
		{
			cout << "Enter first number" << endl;
			cin >> n3;
			
			cout << "Enter second number" << endl;
			cin >> n4;
			
			cout << n4-n3 << endl;
		}
		
		else if(choice == 3)
		{
			cout << "Enter first number" << endl;
			cin >> n3;
			
			cout << "Enter second number" << endl;
			cin >> n4;
			
			cout << n4*n3 << endl;
		}
		
		else if(choice == 4)
		{
			cout << "Enter first number" << endl;
			cin >> n3;
			
			cout << "Enter second number" << endl;
			cin >> n4;
			
			cout << n4/n3 << endl;
		}
		
		else
			cout << "Wrong Input" << endl;
	}
	
	else if(choice == 3)
	break;
	
	else
	cout << "Wrong Input" << endl;
	}
	
	else
		cout << "Wrong Input" << endl;

	return 0;
}
