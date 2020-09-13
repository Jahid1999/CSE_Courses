#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	string s;
	int arr[5]={0};
	
	cin >> s;
	
	for(int i=0;i<s.size();i++)
	{
	    
	    
	    if(s[i]=='1') arr[0]++;
	  	if(s[i]=='2') arr[1]++; 
		if(s[i]=='3') arr[2]++;
	}
	
	for(int i=0 ;i<arr[0];)
	{
		cout << "1" ;
		i++;
		if(i<arr[0] ||arr[1]!=0 ||arr[2]!=0)
			cout << "+";
		else
		{
			if((arr[1]==0 && arr[2]==0))
			{
				cout << endl;	
				return 0;
			}
		}
	}
	
	for(int i=0 ;i<arr[1];)
	{
		cout << "2" ;
		i++;
		if(i<arr[1] ||arr[2]!=0)
			cout << "+";
		else
		{
			if(arr[2]==0)
			{
				cout << endl;	
				return 0;
			}
		}
	}
	
	for(int i=0 ;i<arr[2];)
	{
		cout << "3" ;
		i++;
		if(i<arr[2])
			cout << "+";
		else
		{
			cout << endl;	
			return 0;
		}
	}
	
	
	
	
}


