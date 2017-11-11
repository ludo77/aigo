#include <stdio.h>
#include <string.h>
#include "aigo.h"


extern unsigned char p[19][19];
unsigned char move[3];
extern int c;
extern int p1move, p2move;
extern int p1k, p2k;			/* piece captured */

void getmove(char move[],		/* move string */
			 int *i,			/* row number of next move */
			 int *j)			/* column number of next move */
/* interpret response of human move to board position */
{
	/* move[0] from A to T, move[1] move[2] from 1 to 19 */
	/* convert move to coordinate */
	if (c == 1)
	{
		if (!getij(move, i, j) || (p[*i][*j] != EMPTY) || suicide(*i, *j))
		{
			printf("illegal move !\n");
			printf("your move? ");
			scanf("%s", move);
			getmove(move, i, j);
		}
	}

	if (c == 2)
	{
		if (!getij(move, i, j) || (p[*i][*j] != EMPTY) || suicide(*i, *j))
		{
			printf("illegal move !\n");
			printf("your move? ");
			scanf("%s", move);
			getmove(move, i, j);
		}
	}

	if (c == 3)
	{
		if (!getij(move, i, j) || (p[*i][*j] != EMPTY) || suicide(*i, *j))
		{
			printf("illegal move !\n");
			printf("your move? ");
			scanf("%s", move);
			getmove(move, i, j);
		}
	}

	if (c == 4)
	{
		if (!getij(move, i, j) || (p[*i][*j] != EMPTY) || suicide(*i, *j))
		{
			printf("illegal move !\n");
			printf("your move? ");
			scanf("%s", move);
			getmove(move, i, j);
		}
	}

	if (c == 5)
	{
		if (!getij(move, i, j) || (p[*i][*j] != EMPTY) || suicide(*i, *j))
		{
			printf("illegal move !\n");
			printf("your move? ");
			scanf("%s", move);
			getmove(move, i, j);
		}
	}
}								/* end getmove */
