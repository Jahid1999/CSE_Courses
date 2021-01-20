#include<bits/stdc++.h>

using namespace std;

int get_winer(char square[3][3] )
{
	if( (square[0][0] == square[0][1]) && (square[0][1] == square[0][2]))
   	{
   		if(square[0][0] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else if( (square[1][0] == square[1][1]) && (square[1][1] == square[1][2]))
   	{
   		if(square[1][0] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else if( (square[2][0] == square[2][1]) && (square[2][1] == square[2][2]))
   	{
   		if(square[2][0] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else if( (square[0][0] == square[1][0]) && (square[1][0] == square[2][0]))
   	{
   		if(square[0][0] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else if( (square[0][1] == square[1][1]) && (square[1][1] == square[2][1]))
   	{
   		if(square[0][1] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else if( (square[0][2] == square[1][2]) && (square[1][2] == square[2][2]))
   	{
   		if(square[0][2] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else if( (square[0][0] == square[1][1]) && (square[1][1] == square[2][2]))
   	{
   		if(square[0][0] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else if( (square[0][2] == square[1][1]) && (square[1][1] == square[2][0]))
   	{
   		if(square[0][2] = 'O')
   			return 1;
   		else
   			return 2;
   	}
   	
   	else
		return 0;

}

int main(void)
{
	char square[3][3]={ {'X','O', 'O'}, 
						{'X','O', 'X'}, 
						{'O','O', 'X'}
					  };
	int win= get_winer(square);
	if(win == 1)
		printf("O wins\n");
	else if(win == 2)
		printf("X wins\n");
	else
		printf("Draw\n");
   return 0;
   			
}

