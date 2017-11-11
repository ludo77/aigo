

#include "aigo.h"

extern unsigned char ml[19][19];	/* working matrix for marking */
extern int c;
void countlib(int m,			/* row number 0 to 18 */
			  int n,			/* column number 0 to 18 */
			  int color)		/* BLACK or WHITE */
/* count liberty of color piece at m, n */
{
	int i, j;

	if (c == 1)
	{
		/* set all piece as unmarked */
		for (i = 0; i < 5; i++)
			for (j = 0; j < 5; j++)
				ml[i][j] = 1;
	}
	if (c == 2)
	{
		/* set all piece as unmarked */
		for (i = 0; i < 7; i++)
			for (j = 0; j < 7; j++)
				ml[i][j] = 1;
	}

	if (c == 3)
	{
		/* set all piece as unmarked */
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
				ml[i][j] = 1;
	}

	if (c == 4)
	{
		/* set all piece as unmarked */
		for (i = 0; i < 13; i++)
			for (j = 0; j < 13; j++)
				ml[i][j] = 1;
	}

	if (c == 5)
	{
		/* set all piece as unmarked */
		for (i = 0; i < 19; i++)
			for (j = 0; j < 19; j++)
				ml[i][j] = 1;
	}
	/* count liberty of current piece */
	count(m, n, color);
}								/* end countlib */
