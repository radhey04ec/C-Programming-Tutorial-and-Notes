/*

Author : Jaydeep Shah
Game   : Walk through maze
Date   : 7 MAY 2025
*/


/*
1) Player move through MAZE where space avaialble
2) '*' act as WALL , act as barrier
3) Goal is Exit point E
*/ 

#include<stdio.h>
#include<stdlib.h>


#define MAZE_HEIGHT				10
#define MAZE_WIDTH              10

char MAZE[MAZE_HEIGHT][MAZE_WIDTH]= {
									"##########",	
									"#........#",
									"#####...##",
									"#......###",
									"##..######",
									"#.......##",
									"###...####",
									"###....###",
									"#...##..##",								 

									 };
