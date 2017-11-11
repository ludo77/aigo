#include <stdio.h>
#include <stdlib.h>
#include "aigo.h"

int c = 0;
int i, j;
unsigned char p[19][19];		/* go board */
unsigned char l[19][19];		/* liberty of current color */
unsigned char ma[19][19];		/* working matrix for marking */
unsigned char ml[19][19];		/* working matrix for marking */
int p1move, p2move;				/* p1 color, p2 color */
extern int lib;					/* current stone liberty */
extern int p1ik, p1jk;			/* location of p1 stone captured */
extern int p2ik, p2jk;			/* location of p2 stone captured */
int p1k = 0;
int p2k = 0;					/* no. of stones captured by p1 and p2 */
int s;							/* side Black or White */
unsigned char move[3] = "";
int main(int argc, char *argv[])
{

	while ((c != 1) && (c != 2) && (c != 3) && (c != 4) && (c != 5))
	{
		printf
			("Taille du Goban:\n\t1) 5x5\n\t2) 7x7\n\t3) 9x9\n\t4) 13x13\n\t5) 19x19\n\nVotre choix:");
		scanf("%d", &c);
	}

	if ((c == 1))
	{
		/* init board */
		for (i = 0; i < 5; i++)
			for (j = 0; j < 5; j++)
				p[i][j] = 0;
	}
	if ((c == 2))
	{
		/* init board */
		for (i = 0; i < 7; i++)
			for (j = 0; j < 7; j++)
				p[i][j] = 0;
	}
	if ((c == 3))
	{
		/* init board */
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
				p[i][j] = 0;
	}
	if ((c == 4))
	{
		/* init board */
		for (i = 0; i < 13; i++)
			for (j = 0; j < 13; j++)
				p[i][j] = 0;
	}
	if ((c == 5))
	{
		/* init board */
		for (i = 0; i < 19; i++)
			for (j = 0; j < 19; j++)
				p[i][j] = 0;
	}

	showboard(c);
	int new = 0;

	if (!new)					/* new game */
	{
		/* choose color */
		printf("Choisir couleur:\n\t1) Black\n\t2) White\n\nVotre choix:");
		scanf("%d", &s);
		if (s == 1)
		{
			p2move = 1;			/* player2 white */
			p1move = 2;			/* player 1 black */

		}
		else
		{
			p2move = 2;			/* player 2 black */
			p1move = 1;			/* player 1 white */

		}
	}

	showboard(c);

	/* main loop tant que pas capturer de pierres lit mouvement joueur1
	   enleve pierre lit mouvement joueur2 enleve pierre */
	while ((p1k < 1) && (p2k < 1))
	{
		printf("pierre noire: %d\n pierre blanche: %d \n", p1k, p2k);
		printf("Black move? ");
		scanf("%s", move);
		getmove(move, &i, &j);	/* read human move player 1 */
		if (s == 1)
		{
			p[i][j] = p1move;
			examboard(p2move);
		}
		else
		{
			p[i][j] = p2move;
			examboard(p1move);
		}
		showboard(c);
		printf("pierre noire: %d\n pierre blanche: %d \n", p1k, p2k);
		printf("White move? ");
		scanf("%s", move);
		getmove(move, &i, &j);	/* read human move player2 */
		if (s == 1)
		{
			p[i][j] = p2move;
			examboard(p1move);
		}
		else
		{
			p[i][j] = p1move;
			examboard(p2move);
		}
		showboard(c);
	}
	return 0;
}
