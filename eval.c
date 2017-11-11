

#include "aigo.h"

extern unsigned char p[19][19];	/* go board */
extern unsigned char l[19][19];	/* liberty of current color */
extern int lib;					/* current stone liberty */
extern int c;

void eval(int color)			/* BLACK or WHITE */
/* evaluate liberty of color pieces */
{
	int i, j;
	if (c == 1)
	{
		/* find liberty of each piece */
		for (i = 0; i < 5; i++)
			for (j = 0; j < 5; j++)
				if (p[i][j] == color)
				{
					lib = 0;
					countlib(i, j, color);
					l[i][j] = lib;
				}
	}

	if (c == 2)
	{
		/* find liberty of each piece */
		for (i = 0; i < 7; i++)
			for (j = 0; j < 7; j++)
				if (p[i][j] == color)
				{
					lib = 0;
					countlib(i, j, color);
					l[i][j] = lib;
				}
	}

	if (c == 3)
	{
		/* find liberty of each piece */
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
				if (p[i][j] == color)
				{
					lib = 0;
					countlib(i, j, color);
					l[i][j] = lib;
				}
	}
	if (c == 4)
	{
		/* find liberty of each piece */
		for (i = 0; i < 13; i++)
			for (j = 0; j < 13; j++)
				if (p[i][j] == color)
				{
					lib = 0;
					countlib(i, j, color);
					l[i][j] = lib;
				}
	}

	if (c == 5)
	{
		/* find liberty of each piece */
		for (i = 0; i < 19; i++)
			for (j = 0; j < 19; j++)
				if (p[i][j] == color)
				{
					lib = 0;
					countlib(i, j, color);
					l[i][j] = lib;
				}
	}
}								/* end eval */
