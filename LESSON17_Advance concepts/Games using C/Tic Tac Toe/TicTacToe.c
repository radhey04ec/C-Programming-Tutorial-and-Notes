/*
Game: TIC TAC TOE
Date: 7 May 2025
Author : Jaydeep Shah
*/


/*
Steps:
1>> TWO PLAYER 1(X) and PLAYER 2(O)
2>> 3 X 3 Grid
3>> Player take turn and placing marks
4>> GAME end with WIN or DRAW
*/


#include<stdio.h>
#include<stdlib.h>


//3 X 3 board size
#define NUMBER_OF_ROW						3
#define NUMBER_OF_COL						3


//Possible game state
typedef enum
{
	IN_PROGRESS  					=		0,		//If game is in progressive state
	WIN								=		1,		//If any player win
	DRAW							=		2,		//No one win
}GAME_STATE_T;



//Define board
char board[NUMBER_OF_ROW][NUMBER_OF_COL];

//To Track - Which player is playing
char 			CurrentPlayer		=		'X';				//Either 'X' or 'O' will play
char			WinnerName			=		'N';				//initially N = No one win
GAME_STATE_T    GAME_STATUS			=		IN_PROGRESS;		//In progress - default


//Functions declarations
void InitBoard();												//Initialize board
void PrintBoard();												//print board
void MakeMove();												//Move and handle player inputs
void CheckGameStatus();											//Check GAME Status


int main()
{
	InitBoard();												//Init Board - Function call
	PrintBoard();
	
	while(1)
	{
		if(GAME_STATUS == IN_PROGRESS)
		{
		//Select Player
		MakeMove();
		
		
		//Print Current Board	
		PrintBoard();
		
		//Check game status
		CheckGameStatus();
		}
		
		if(GAME_STATUS == WIN)
		{
		 printf("\n Congratulations - !!!!");
		 printf("\n Winner is Player ->  %c",WinnerName);
		 break;
		}
		if(GAME_STATUS == DRAW)
		{
		 printf("\n\n GAME is DRAW !!!! ");
		 printf("\n Game OVER --> <--");
		 break;
		}
		
	}
	return 0;
}



//-------------------------------------------------------------------------------------------------
//Function = Initialize board
void InitBoard()
{
	int x = 0, y = 0;
	
	//ROW access one by one
	for(x=0;	x < NUMBER_OF_ROW;	x++)
	{
		//COL access of individual ROW - one by one
		for(y=0;	y<NUMBER_OF_COL;	y++)
		{
			//Fill Board with 1 to 9
			board[x][y]		= 	('1' + (x*3) + y); //How it works ??
			
		}
	}
	
}

//-------------------------------------------------------------------------------------------------




//-------------------------------------------------------------------------------------------------
//Function : PrintBoard()
//For printing board
void PrintBoard()
{
	
	//Clear screen
	system("cls");
	
	int x = 0;
	for(x=0;	x<NUMBER_OF_COL;	x++)
	{
		printf("	%c	|	%c	|	%c	\n",board[x][0],board[x][1],board[x][2]);
		if(x < 2)
		{
		 	printf("----------------|---------------|----------------\n");
		}
	}
	
}
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//Function: MakeMove()
void MakeMove()
{
	//<<1>> Display which player's turn
	//<<2>> Check input should not out of range
	//<<3>> Check cell already filled previously ??
	//<<4>> Store entry
	
	int position = 0;		//default pos
	
	//<<1>> Display which player's turn
	printf("\n\n");
	printf("Player Name = %c \n\n",CurrentPlayer);
	printf("Enter Box location = ");
	scanf("%d",&position);
	
	//<<2>> Check input should not out of range
	if(position < 0  || position > 9)
	{
		printf("\n Error - Box value out of range !!!");
		printf("\n Retry .....");
		getchar();
		getchar();
		return;
	}
	
	//<<3>> Check cell already filled previously ??
	//Using POS - we will have to find ROW and COL
	int x_ROW		= (position - 1) / 3;
	int x_COL		= (position - 1) % 3;
	
	printf("\n\n>> Player choose R = %d, C = %d",x_ROW,x_COL);
	if(board[x_ROW][x_COL] == 'X' || board[x_ROW][x_COL] == 'O')
	{
		//Bard already filled ..
		printf("\nError - Already Filled !!!");
		printf("\nRetry ...");
		getchar();
		getchar();
		return;
	}
	//<<4>> Store entry
	board[x_ROW][x_COL]	= CurrentPlayer;
	printf("\nPress Enter for Next player's' Move");
	getchar();
	getchar();
	
	//Change the Player
	if(CurrentPlayer == 'O')
	{
		CurrentPlayer = 'X';
	}
	else
	{
		CurrentPlayer = 'O';
	}

	
	
}
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//Function:CheckGameStatus
void CheckGameStatus()
{
	//Check Any one Win ??
	int x_track = 0;
	
	for(x_track = 0;	x_track < 2;	x_track++)
	{
		
	//Check ROW
	if((board[x_track][0] == board[x_track][1]) && (board[x_track][1] == board[x_track][2]))
	{
		GAME_STATUS = WIN;
		WinnerName  = board[x_track][0];
		break;
	}
	
	//Check COL
	if((board[0][x_track] == board[1][x_track]) && (board[1][x_track] == board[2][x_track]))
	{
		GAME_STATUS = WIN;
		WinnerName  = board[0][x_track];
		break;
	}
	
	}
	
	//Check DIAGONAL value
	if((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
	{
		GAME_STATUS = WIN;
		WinnerName  = board[0][0];
	}
	if((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))
	{
		GAME_STATUS = WIN;
		WinnerName  = board[0][2];
	}
	
	//Check Game draw?
	int R_track  = 0;
	int C_track  = 0;
	for(R_track = 0; R_track < 2; R_track++)
	{
		for(C_track = 0; C_track < 2; C_track++)
		{
			if((board[R_track][C_track] != 'O' )&& (board[R_track][C_track] != 'X'))
			{
				GAME_STATUS = IN_PROGRESS;  //Still empty cell...
				return;
			}
		}
	}
	
	//No empty cell avaialble -- Now game draw
	GAME_STATUS		= DRAW;
}
