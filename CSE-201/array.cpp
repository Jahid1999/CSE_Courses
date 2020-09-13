#include<bits/stdc++.h>

using namespace std;

int s=0;

void print(int a[])
{

	for(int i=0;i<s;i++)
		cout << a[i]<<' ';
	
	cout << endl;

}

void prepend(int a[])
{
	s++;
	for(int i=s-1;i>=1;i--)
		a[i]=a[i-1];
	
	int p;
	
	cout <<"enter the value for the first position!"<< endl;
	
	cin>>p;
	a[0]=p;
	
}

void append(int a[] )
{
	
	s++;
	int p;
	
	cout <<"enter the value for the last position!"<< endl;
	
	cin>>p;
	a[s-1]=p;
	
}

void searchPosition(int a[])
{
	int r;
	cout <<"enter the value ,which position u need!\n"<< endl;
	
	cin>>r;
	
	int l=0;
	for(int i=0;i<s;i++)
	{
		if(a[i]==r)
		{
			cout << i+1<< endl;
			l=1;
			break;
		
		}
	}
	cout << endl;
	
	if(l==0)
		cout << "not found!!!"<< endl;
	
}

void insertAtPosition(int a[])
{
	int p,r;
	cout <<"in which position?"<< endl;
	cin>>r;
	cout <<"which value?"<<endl;
	cin>>p;
	
	s++;
	for(int i=s-1;i>=r;i--)
	{
		a[i]=a[i-1];
	}
	
	a[r-1]=p;      
	
}

void sort(int a[])
{
	
	for(int i=0;i<s-1;i++)
	{
		for(int j=0;j<s-i-1;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		
		}
	
	}
}

void numberOfOccurance(int a[]){

	int l=0,p;
	cout <<"enter your number"<< endl;
	cin>>p;
	for(int i=0;i<s;i++)
	{
		if(a[i]==p)
			l++;
		
	}
	
	cout <<p<<" occurs "<< l <<" times. "<< endl;

}

void replaceByValue(int a[])
{
	int p,q;
	cout << "which value u want to replace?"<<endl;
	cin>>p;
	
	cout << "by which value u want to replace?"<<endl;
	cin>>q;
	for(int i=0;i<s;i++)
	{
		
		if(a[i]==p)
			a[i]=q;
		
	}

}

void replaceByPosition(int a[])
{
	int p,q;
	cout << "in which position u want to replace?"<<endl;
	cin>>p;
	
	cout << "which value u want to put by replace?"<<endl;
	cin>>q;
	
	
	a[p-1]=q;

}

void insertBeforeValue(int a[])
{
		int p,q;
		cout << "enter value before which u want to insert" << endl;
		
		cin>>p;
		
		cout <<"enter your value" << endl;
		cin>>q;
		for(int i=0;i<s;i++)
		{		
			if(a[i]==p)
			{
				
				s++;
				for(int j=s-1;j>=i+1;j--)
					a[j]=a[j-1];
				
				a[i]=q;
			
			}
			break;
		
		}
	
}

void insertAfterValue(int a[])
{
		int p,q;
		cout << "enter value ,after which u want to insert" << endl;
		
		cin>>p;
		
		cout <<"enter your value" << endl;
		
		cin>>q;
		for(int i=0;i<s;i++)
		{		
			if(a[i]==p)
			{
				
				s++;
				for(int j=s-1;j>=i+2;j--)
					a[j]=a[j-1];
				
				a[i+1]=q;
			
			}
	
			break;
		}
	
}

void deleteFirstElement(int a[])
{
	for(int i=0;i<s-1;i++)
		a[i]=a[i+1];
		
	s--;
}

void deleteLastElement(int a[])
{		
	s--;

}

void deleteSomeIndex(int a[])
{
	int p,q;
	cout <<"enter index from which u want to start and end delete."<< endl;
	
	cin>>p>>q;     

	for(int i=p-1,j=q;j<s;i++,j++)
		a[i]=a[j];
		
	s=s+p-q-1;
	cout << s << endl;
}

void deleteAllValue(int a[])
{
	s=s-s;

}

int main(void){
	
	int a[100];
	
	char c;
	
	cout <<"enter 10 numbers:"<< endl;
	
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		s++;
	}
	//cout << s<< endl;
	cout <<"what do u want to do? \na)print b)prepend c)append d)search position  e)insert at position  f)insert before value  g)insert after value  h)replace  i)number of occurance  j)sort  k)delete  l)exit\n"<< endl;
	
	cin>>c;
	
	while(true)
	{
		if(c=='a')
		{
			print(a);
		
		}
		
		else if(c=='b')
		{
			prepend(a);
		
		}
		
		else if(c=='c')
		{
			append(a);
		
		}
		
		else if(c=='d')
		{
			searchPosition(a);
		
		}
		
		else if(c=='e')
		{
			insertAtPosition(a);
		
		}
		
		else if(c=='f')
		{
			insertBeforeValue(a);
		
		}
		
		else if(c=='g')
		{
			insertAfterValue(a);
		
		}
		
		else if(c=='h')
		{
			
			cout <<"what do u want? \na)replace by value \nb)replace by position\n"<<endl;
			char y;
			cin>>y;
			if(y=='a')
			{
				replaceByValue(a);
			
			}
			else if(y=='b')
			{
				replaceByPosition(a);
			}
			
		}
		
		else if(c=='i')
		{
			numberOfOccurance(a);
		
		}
		// 2 4 5 67 39 32 76 54 3 25 
		else if(c=='j')
		{
			sort(a);
		
		}
		
		else if(c=='k')
		{
			cout << "enter your choice: \n  a)delete first element \n  b)delete last element \n  c)delete some element \n  d)delete all element\n"<< endl;
			char w;
			
			cin>>w;
			if(w=='a')
			{
				deleteFirstElement(a);
			
			}
			
			else if(w=='b')
			{
				deleteLastElement(a);

			
			}
			
			else if(w=='c')
			{
				deleteSomeIndex(a);
			
			}
			
			else if(w=='d')
			{
				deleteAllValue(a);
			
			}
			
		}
		
		else if(c=='l')
			break;
		
		cout <<"what do u want to do? \na)print b)prepend c)append d)search position  e)insert at position  f)insert before value  g)insert after value  h)replace  i)number of occurance  j)sort  k)delete  l)exit\n"<< endl;
	
		cin>>c;
		
	}	
		
	return 0;
}


