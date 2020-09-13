#include <bits/stdc++.h>

using namespace std;

char square[9] = {'0','1','2','3','4','5','6','7','8'};

	
int checkwin()
{
		if (square[0] == square [1]  && square[1] == square[2] )
		{	
		if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}		
		else
		if (square[3] == square [4]  && square[4] == square[5] )
			{	if ( square [3] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[6] == square [7]  && square[7] == square[8] )
			{	if ( square [6] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[0] == square [3]  && square[3] == square[6] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[1] == square [4]  && square[4] == square[7] )
			{	if ( square [1] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[2] == square [5]  && square[5] == square[8] )
			{	if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
else
		if (square[0] == square [4]  && square[4] == square[8] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[2] == square [4]  && square[4] == square[6] )
			{	if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[0] == square [3]  && square[3] == square[6] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else 
		return 0;
}

void mark(int player, int box)
{
	if (player == 1 )
	{

		square[box] = 'X';
	}
	else
		square[box] = 'O';
}

void display()
{
		for(int i=0;i<9;i++)
		{
			cout<< square[i] << "\t" ;
				if (i == 2 || i== 5 || i==8)
					cout<<"\n"; 
		}
		
		cout << endl;
}
int main()
{
	int check[9];

	for(int i=0;i<9;i++)
		check[i]=0;



		cout << "The symbol of player 1 is 'X' and The sumbol of player 2 is 'O'" << endl;
		int player1 = 1, player2 =2 ;
		
		int box, result = 0, flag = 0;
		
		for(int i=1;i<5;i++)
	{

		cout<< "\n Player " << player1 << " Enter the Box ";
		
		cin>> box;
		
		check[box]=1;
		
		mark( player1, box);
		display();

		result =checkwin();	
		
		if (result == 1 )
		
		{	cout<<"\n Congratualtions! player " << player1 << " has Won " << endl;
			flag = 1;			
			break;
		}
		else
		if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2 << " has Won " << endl;
			flag = 1;			
			break;
		}

///
		while(true)
		{
			srand(time(NULL));
	
			box = rand()%8+1;
			
			if(check[box]!=1)
			{
				check[box]=1;
				break;
			}
			
			else continue;
		}
		
	
		mark ( player2, box);
		display();
		
		result =checkwin();	
		if (result == 1 )
		{	cout<<"\n Congratualtions! player " << player1 << " has Won "<< endl;
			flag = 1;
			break;
		}
		else
		if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2 << " has Won "<< endl;
			flag = 1;
			break;
		}
}
		if (flag == 0 )
		cout<<" \n Sorry, The game is a draw "<< endl;
	
	return 0;
}
