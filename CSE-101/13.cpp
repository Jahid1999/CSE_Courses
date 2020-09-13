#include <iostream>

using namespace std;

int main(void)
{
	while(true)
	{
		cout << "1.integer arithmetic \n2. fractional arithmetic \n3.exit" << endl;
		cout << "enter your choice:" << endl;
		int choice;
		cin >> choice;
		
		if(choice == 1)
		{
			cout << "1.add \n2.sub \n3.mul \n4.div \n5.mod" << endl;
			cout << "your choice:" << endl;
			int operation;
			cin >> operation;
			
			if(operation !=1 || operation !=2 || operation !=3 || operation !=4 || operation !=5)
			{
				cout << "wrong choice" << endl;
				continue;
			}
			
			int result, a,b;
			cout << "please input two integers" << endl;
			cin >> a >> b;
			if(operation == 1)
			{
				result = a+b;
			}
			else if(operation == 2)
			{
				result = a-b;
			}
			else if(operation == 3)
			{
				result = a*b;
			}
			else if(operation == 4)
			{
				result = a/b;
			}
			else if(operation == 5)
			{
				result = a%b;
			}
			else 
			{
				
			}
			cout << result << endl;
		}
		else if (choice == 2)
		{
			cout << "1.add \n2.sub \n3.mul \n4.div" << endl;
			cout << "your choice:" << endl;
			int operation;
			cin >> operation;
			
			if(operation !=1 || operation !=2 || operation !=3 || operation !=4)
			{
				cout << "wrong choice" << endl;
				continue;
			}
			
			double result, a,b;
			cout << "please input two numbers" << endl;
			cin >> a >> b;
			if(operation == 1)
			{
				result = a+b;
			}
			else if(operation == 2)
			{
				result = a-b;
			}
			else if(operation == 3)
			{
				result = a*b;
			}
			else if(operation == 4)
			{
				result = a/b;
			}
			else 
			{
				cout << "wrong choice, no result" << endl;
			}
			cout << result << endl;
		}
		else if(choice == 3)
		{
			break;
		}
		else
		{
			cout << "wrong choice, enter your choice again" << endl;
		}
	}
	return 0;
}
