#include <iostream>

using namespace std;

int filledTo = 0;
int size = 0;



void enlarge (int *arr)
{  	
   	int *newArr = new int [size*2];
   	
   	for(int i=0;i<size;i++)
   	{
  	 	newArr [i] = arr [i];
 	}
 	
 	arr = newArr;
 	delete [] arr;
 	
   	size = size * 2;
}

void newArray (int *arr)
{  	
   	int *newArr = new int [size*2];
 	delete [] arr;
 	arr = newArr;
   	size = size * 2;
}

void initialize (int *arr, int b)
{
   	for(int i=0;i<b;i++)
   	{
  	 	cin >> arr [i];
 	}
}

void shrink (int *arr)
{
	int *newArr = new int [size/2];
   	
   	for(int i=0;i<=filledTo;i++)
   	{
  	 	newArr [i] = arr [i];
 	}
 	
 	arr = newArr;
 	delete [] arr;
 	
   	size = size / 2;
}

void input (int *arr)
{
    cout << "How many data do you want to input? ";
    
    int b;
    cin >> b;
    
    if(b<=size/2) 
    {
    	shrink(arr);
    	cout << "MESSAGE: Array size halved!" << endl;
    }
    
    if(b>0&&b<=size)
    {
   		initialize(arr,b);
 	}
 	else if(b>0&&b>size) 
 	{
 		newArray(arr);
 		cout << "MESSAGE: Array size doubled!" << endl;
 		initialize(arr,b);
 	}
 	else cout << "ERROR!" << endl;

    filledTo = b-1;
}

void makeSpaceAT(int *arr,int index)
{
    for(int i=filledTo+1;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    filledTo++;
    arr[index]=0;
}

void print(int *arr)
{
    cout << "Printing:" <<endl;
    for(int i=0;i<=filledTo;i++)
    {
        cout << arr[i] << endl;
    }
    cout <<endl << "Size: " << size << endl << "Filled To: " << filledTo <<endl;
}

void insertAtTheBeginning(int *arr)
{
	cout << "Enter value: ";
	
	int d;
	cin >> d;
	
    if(filledTo>=size-1) 
    {
    	enlarge(arr);
    	cout << "MESSAGE: Array size doubled!" << endl;
    	makeSpaceAT(arr,0);
    	arr [0] = d;
    }
    else 
    {
    	makeSpaceAT(arr,0);
    	arr [0] = d;
    }
}

void insertAtTheEnd(int *arr)
{
    cout << "Enter value: ";
	
	int d;
	cin >> d;
	
    if(filledTo>=size-1) 
    {
    	enlarge(arr);
    	cout << "MESSAGE: Array size doubled!" << endl;
    	arr [filledTo+1] = d;
    	filledTo++;
    }
    else 
    {
    	arr [filledTo+1] = d;
    	filledTo++;
    }
}

void insertAtAnIndex(int *arr)
{
    cout << "Enter index: ";
    int e;
    cin >> e;
    if(e<0) cout << "ERROR!" << endl;
    if(filledTo==size-1) 
    {
    	enlarge(arr);
    	cout << "MESSAGE: Array size doubled!" << endl;
    	
    	if(e<=filledTo)
    	{
    		makeSpaceAT(arr,e);
    	}
    	else filledTo++;
    }
    else if(e<=filledTo)
    {
    	makeSpaceAT(arr,e);
    }
    else filledTo++;
    
    cout << "Enter value: ";
    int f;
    cin >> f;
    arr [e] = f;
}

int search(int *arr)
{
	cout << "Enter the value you want to search: ";
	int g;
	cin >> g;
    for(int i=0;i<=filledTo;i++)
    {
        if(arr[i]==g)
        {
        	cout << g << " is found in the array!" << endl;
        	return i;
        }
    }
    cout << "Not found in the array!" << endl;
    return -1;
}

void insertBeforeValue(int *arr)
{
    int index=search(arr);
    if(index==-1) 
    {
    	cout << "NOT FOUND!" << endl;
        return;
    }
	else if(filledTo==size-1) 
    {
    	enlarge(arr);
    	cout << "MESSAGE: Array size doubled!" << endl;
    	makeSpaceAT(arr,index);
    	cout << "Enter value you want to insert: ";
    	int h;
    	cin >> h;
    	arr[index]=h;
    }
    else
    {
    	makeSpaceAT(arr,index);
    	cout << "Enter value you want to insert: ";
    	int h;
    	cin >> h;
    	arr[index]=h;
    }
}

void insertAfterValue(int *arr)
{
    int index=search(arr);
    if(index==-1) 
    {
    	cout << "NOT FOUND!" << endl;
        return;
    }
	else if(filledTo==size-1) 
    {
    	enlarge(arr);
    	cout << "MESSAGE: Array size doubled!" << endl;
    	makeSpaceAT(arr,index+1);
    	cout << "Enter value you want to insert: ";
    	int h;
    	cin >> h;
    	arr[index+1]=h;
    }
    else
    {
    	makeSpaceAT(arr,index+1);
    	cout << "Enter value you want to insert: ";
    	int h;
    	cin >> h;
    	arr[index+1]=h;
    }
}

void insert (int *arr)
{
	cout << "1.Insert at the beginning\n2.Insert at the end\n3.Insert at an index\n4.Insert before a value\n5.Insert after a value" << endl;
	
	int c;
	cin >> c;
	
	if(c==1) insertAtTheBeginning(arr);
	else if(c==2) insertAtTheEnd(arr);
	else if(c==3) insertAtAnIndex(arr);
	else if(c==4) insertBeforeValue(arr);
	else if(c==5) insertAfterValue(arr);

}

void update (int *arr)
{
	cout << "1.Update by searching index\n2.Update by searching value" << endl;
	
	int a;
	cin >> a;
	
	if(a==1)
	{
		cout << "Enter searching index: ";
		int b;
		cin >> b;
		cout << "Enter new value: ";
		int c;
		cin >> c;
		arr [b] = c;
	}
	else if(a==2)
	{
		cout << "Enter searching value: ";
		int a;
		cin >> a;
		cout << "Enter new value: ";
		int b;
		cin >> b;
		
		for(int i=0;i<=filledTo;i++)
 	    {
			if(arr[i]==a) arr [i] = b;
 	    }
	}
}

void sort (int *arr)
{
	cout << "1.Ascending\t2.Descending" << endl;
	int a;
	cin >> a;
	if(a==1)
	{
		for(int i=0;i<=filledTo;i++)
		{
			for(int j=i+1;j<=filledTo;j++)
			{
				if(arr[j]<arr[i])
				{
					int temp;
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
	else if(a==2)
	{
		for(int i=0;i<=filledTo;i++)
		{
			for(int j=i+1;j<=filledTo;j++)
			{
				if(arr[j]>arr[i])
				{
					int temp;
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
	}
}



void eraser (int *arr, int j)
{
	for(int i=j;i<=filledTo;i++)
	{
		arr [i] = arr [i+1];
	}
	filledTo--;
}

void eraseAtAnIndex(int *arr)
{
	cout << "Enter the index: ";
	int a;
	cin >> a;
	eraser(arr,a);
}
void eraseAllCertainValue(int *arr)
{
	cout << "Enter the value to delete: ";
	int a;
	cin >> a;
	
	for(int i=0;i<=filledTo;i++)
	{
		while(arr [i]==a)
		{
			eraser(arr,i);
		}
	}
}

void erase (int *arr)
{
	cout << "1.Delete at the beginning\n2.Delete at the end\n3.Delete at an index\n4.Delete all of a certain value" << endl;
	int a;
	cin >> a;
	
	if(a==1) eraser(arr,0);
	else if(a==2) eraser(arr,filledTo);
	else if(a==3) eraseAtAnIndex(arr);
	else if(a==4) eraseAllCertainValue(arr);
	
	if(filledTo<size/2) 
	{
		shrink(arr);
		cout << "MESSAGE: Array size is halved!" << endl;
	}
}

void menu(int *arr)
{
	while(true)
	{
		cout << "What do you want to do?\n1.Input Data\t2.Insert Data\n3.Update Data\t4.Delete Data\n5.Sort Data\t6.Search Data\n7.Print Data\t8.Exit" << endl;
		
		int a;
		cin >> a;
		
		if(a==8) break;
		else if(a==1) input(arr);
		else if(a==2) insert(arr);
		else if(a==3) update(arr);
		else if(a==4) erase(arr);
		else if(a==5) sort(arr);
		else if(a==6) search(arr);
		else if(a==7) print(arr);
	}	
}


int main (void)
{
	cout << "Enter array size: ";
		
	cin >> size;
	
	int *arr;
	arr = new int [size];	
		
	menu(arr);
	
	delete [] arr;
	
	return 0;
}
