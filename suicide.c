
#include "aigo.h"

extern unsigned char p[19][19];	/* go board */
extern unsigned char l[19][19];	/* liberty of current color */
extern int p1move, p2move;		/* p1 color, p2 color */
extern int lib;					/* current stone liberty */
extern int c;
int p2ik, p2jk;					/* location of p2 stone captured */

int suicide(int i, int j)
/* check for suicide move of opponent at p[i][j] */
{
	int m, n, k;

	if (c == 1)
	{
		/* check liberty of new move */
		lib = 0;
		countlib(i, j, p2move);
		if (lib == 0)
			/* new move is suicide then check if kill p1 pieces and Ko
			   possibility */
		{
			/* assume alive */
			p[i][j] = p2move;

			/* check p1 pieces */
			eval(p1move);
			k = 0;

			for (m = 0; m < 5; m++)
				for (n = 0; n < 5; n++)
					/* count pieces will be killed */
					if ((p[m][n] == p1move) && !l[m][n])
						++k;

			if ((k == 0) || (k == 1 && ((i == p2ik) && (j == p2jk))))
				/* either no effect on p1 pieces or an illegal Ko take back */
			{
				p[i][j] = EMPTY;	/* restore to open */
				return 1;
			}
			else
				/* good move */
				return 0;
		}
		else
			/* valid move */
			return 0;
	}

	if (c == 2)
	{
		/* check liberty of new move */
		lib = 0;
		countlib(i, j, p2move);
		if (lib == 0)
			/* new move is suicide then check if kill p1 pieces and Ko
			   possibility */
		{
			/* assume alive */
			p[i][j] = p2move;

			/* check p1 pieces */
			eval(p1move);
			k = 0;

			for (m = 0; m < 7; m++)
				for (n = 0; n < 7; n++)
					/* count pieces will be killed */
					if ((p[m][n] == p1move) && !l[m][n])
						++k;

			if ((k == 0) || (k == 1 && ((i == p2ik) && (j == p2jk))))
				/* either no effect on p1 pieces or an illegal Ko take back */
			{
				p[i][j] = EMPTY;	/* restore to open */
				return 1;
			}
			else
				/* good move */
				return 0;
		}
		else
			/* valid move */
			return 0;
	}

	if (c == 3)
	{
		/* check liberty of new move */
		lib = 0;
		countlib(i, j, p2move);
		if (lib == 0)
			/* new move is suicide then check if kill p1 pieces and Ko
			   possibility */
		{
			/* assume alive */
			p[i][j] = p2move;

			/* check p1 pieces */
			eval(p1move);
			k = 0;

			for (m = 0; m < 9; m++)
				for (n = 0; n < 9; n++)
					/* count pieces will be killed */
					if ((p[m][n] == p1move) && !l[m][n])
						++k;

			if ((k == 0) || (k == 1 && ((i == p2ik) && (j == p2jk))))
				/* either no effect on p1 pieces or an illegal Ko take back */
			{
				p[i][j] = EMPTY;	/* restore to open */
				return 1;
			}
			else
				/* good move */
				return 0;
		}
		else
			/* valid move */
			return 0;
	}

	if (c == 4)
	{
		/* check liberty of new move */
		lib = 0;
		countlib(i, j, p2move);
		if (lib == 0)
			/* new move is suicide then check if kill p1 pieces and Ko
			   possibility */
		{
			/* assume alive */
			p[i][j] = p2move;

			/* check p1 pieces */
			eval(p1move);
			k = 0;

			for (m = 0; m < 13; m++)
				for (n = 0; n < 13; n++)
					/* count pieces will be killed */
					if ((p[m][n] == p1move) && !l[m][n])
						++k;

			if ((k == 0) || (k == 1 && ((i == p2ik) && (j == p2jk))))
				/* either no effect on p1 pieces or an illegal Ko take back */
			{
				p[i][j] = EMPTY;	/* restore to open */
				return 1;
			}
			else
				/* good move */
				return 0;
		}
		else
			/* valid move */
			return 0;
	}

	if (c == 5)
	{
		/* check liberty of new move */
		lib = 0;
		countlib(i, j, p2move);
		if (lib == 0)
			/* new move is suicide then check if kill p1 pieces and Ko
			   possibility */
		{
			/* assume alive */
			p[i][j] = p2move;

			/* check p1 pieces */
			eval(p1move);
			k = 0;

			for (m = 0; m < 19; m++)
				for (n = 0; n < 19; n++)
					/* count pieces will be killed */
					if ((p[m][n] == p1move) && !l[m][n])
						++k;

			if ((k == 0) || (k == 1 && ((i == p2ik) && (j == p2jk))))
				/* either no effect on p1 pieces or an illegal Ko take back */
			{
				p[i][j] = EMPTY;	/* restore to open */
				return 1;
			}
			else
				/* good move */
				return 0;
		}
		else
			/* valid move */
			return 0;
	}

}								/* end suicide */
