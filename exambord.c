
#include "aigo.h"

extern unsigned char p[19][19];	/* go board */
extern unsigned char l[19][19];	/* liberty of current color */
extern int p1move;				/* computer color */
int p1ik, p1jk;					/* location of p1 stone captured */
int p2ik, p2jk;					/* location of p2 stone captured */
extern int p1k, p2k;			/* no. of stones captured by p1 and p2 */
extern int c;

void examboard(int color)		/* BLACK or WHITE */
/* examine pieces */
{
	int i, j, n;

	if (c == 1)
	{
		/* find liberty of each piece */
		eval(color);

		/* initialize piece captured */
		if (color == p1move)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else
		{
			p2ik = -1;
			p2jk = -1;
		}
		n = 0;					/* The number of captures this move for Ko
								   purposes */

		/* remove all piece of zero liberty */
		for (i = 0; i < 5; i++)
			for (j = 0; j < 5; j++)
				if ((p[i][j] == color) && (l[i][j] == 0))
				{
					p[i][j] = EMPTY;
					/* record piece captured */
					if (color == p1move)
					{
						p1ik = i;
						p1jk = j;
						++p1k;
					}
					else
					{
						p2ik = i;
						p2jk = j;
						++p2k;
					}
					++n;		/* increment number of captures on this move */
				}
		/* reset to -1 if more than one stone captured since no Ko possible */
		if (color == p1move && n > 1)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else if (n > 1)
		{
			p2ik = -1;
			p2jk = -1;
		}
	}

	if (c == 2)
	{
		/* find liberty of each piece */
		eval(color);

		/* initialize piece captured */
		if (color == p1move)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else
		{
			p2ik = -1;
			p2jk = -1;
		}
		n = 0;					/* The number of captures this move for Ko
								   purposes */

		/* remove all piece of zero liberty */
		for (i = 0; i < 7; i++)
			for (j = 0; j < 7; j++)
				if ((p[i][j] == color) && (l[i][j] == 0))
				{
					p[i][j] = EMPTY;
					/* record piece captured */
					if (color == p1move)
					{
						p1ik = i;
						p1jk = j;
						++p1k;
					}
					else
					{
						p2ik = i;
						p2jk = j;
						++p2k;
					}
					++n;		/* increment number of captures on this move */
				}
		/* reset to -1 if more than one stone captured since no Ko possible */
		if (color == p1move && n > 1)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else if (n > 1)
		{
			p2ik = -1;
			p2jk = -1;
		}
	}

	if (c == 3)
	{
		/* find liberty of each piece */
		eval(color);

		/* initialize piece captured */
		if (color == p1move)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else
		{
			p2ik = -1;
			p2jk = -1;
		}
		n = 0;					/* The number of captures this move for Ko
								   purposes */

		/* remove all piece of zero liberty */
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
				if ((p[i][j] == color) && (l[i][j] == 0))
				{
					p[i][j] = EMPTY;
					/* record piece captured */
					if (color == p1move)
					{
						p1ik = i;
						p1jk = j;
						++p1k;
					}
					else
					{
						p2ik = i;
						p2jk = j;
						++p2k;
					}
					++n;		/* increment number of captures on this move */
				}
		/* reset to -1 if more than one stone captured since no Ko possible */
		if (color == p1move && n > 1)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else if (n > 1)
		{
			p2ik = -1;
			p2jk = -1;
		}
	}

	if (c == 4)
	{
		/* find liberty of each piece */
		eval(color);

		/* initialize piece captured */
		if (color == p1move)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else
		{
			p2ik = -1;
			p2jk = -1;
		}
		n = 0;					/* The number of captures this move for Ko
								   purposes */

		/* remove all piece of zero liberty */
		for (i = 0; i < 13; i++)
			for (j = 0; j < 13; j++)
				if ((p[i][j] == color) && (l[i][j] == 0))
				{
					p[i][j] = EMPTY;
					/* record piece captured */
					if (color == p1move)
					{
						p1ik = i;
						p1jk = j;
						++p1k;
					}
					else
					{
						p2ik = i;
						p2jk = j;
						++p2k;
					}
					++n;		/* increment number of captures on this move */
				}
		/* reset to -1 if more than one stone captured since no Ko possible */
		if (color == p1move && n > 1)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else if (n > 1)
		{
			p2ik = -1;
			p2jk = -1;
		}
	}

	if (c == 5)
	{
		/* find liberty of each piece */
		eval(color);

		/* initialize piece captured */
		if (color == p1move)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else
		{
			p2ik = -1;
			p2jk = -1;
		}
		n = 0;					/* The number of captures this move for Ko
								   purposes */

		/* remove all piece of zero liberty */
		for (i = 0; i < 19; i++)
			for (j = 0; j < 19; j++)
				if ((p[i][j] == color) && (l[i][j] == 0))
				{
					p[i][j] = EMPTY;
					/* record piece captured */
					if (color == p1move)
					{
						p1ik = i;
						p1jk = j;
						++p1k;
					}
					else
					{
						p2ik = i;
						p2jk = j;
						++p2k;
					}
					++n;		/* increment number of captures on this move */
				}
		/* reset to -1 if more than one stone captured since no Ko possible */
		if (color == p1move && n > 1)
		{
			p1ik = -1;
			p1jk = -1;
		}
		else if (n > 1)
		{
			p2ik = -1;
			p2jk = -1;
		}
	}
}								/* end examboard */
