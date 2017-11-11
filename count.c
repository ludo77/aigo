

#include "aigo.h"

extern unsigned char p[19][19];	/* go board */
extern unsigned char ml[19][19];	/* working matrix for marking */
unsigned int lib;				/* current stone liberty */
extern int c;

void count(int i,				/* row number 0 to 18 */
		   int j,				/* column number 0 to 18 */
		   int color)			/* BLACK or WHITE */
/* count liberty of color piece at location i, j and return value in lib */
{
	/* set current piece as marked */
	ml[i][j] = EMPTY;

	if (c == 1)
	{
		/* check North neighbor */
		if (i != EMPTY)
		{
			if ((p[i - 1][j] == EMPTY) && ml[i - 1][j])
			{
				++lib;
				ml[i - 1][j] = EMPTY;
			}
			else if ((p[i - 1][j] == color) && ml[i - 1][j])
				count(i - 1, j, color);
		}
		/* check South neighbor */
		if (i != 4)
		{
			if ((p[i + 1][j] == EMPTY) && ml[i + 1][j])
			{
				++lib;
				ml[i + 1][j] = EMPTY;
			}
			else if ((p[i + 1][j] == color) && ml[i + 1][j])
				count(i + 1, j, color);
		}
		/* check West neighbor */
		if (j != EMPTY)
		{
			if ((p[i][j - 1] == EMPTY) && ml[i][j - 1])
			{
				++lib;
				ml[i][j - 1] = EMPTY;
			}
			else if ((p[i][j - 1] == color) && ml[i][j - 1])
				count(i, j - 1, color);
		}
		/* check East neighbor */
		if (j != 4)
		{
			if ((p[i][j + 1] == EMPTY) && ml[i][j + 1])
			{
				++lib;
				ml[i][j + 1] = EMPTY;
			}
			else if ((p[i][j + 1] == color) && ml[i][j + 1])
				count(i, j + 1, color);
		}
	}

	if (c == 2)
	{
		/* check North neighbor */
		if (i != EMPTY)
		{
			if ((p[i - 1][j] == EMPTY) && ml[i - 1][j])
			{
				++lib;
				ml[i - 1][j] = EMPTY;
			}
			else if ((p[i - 1][j] == color) && ml[i - 1][j])
				count(i - 1, j, color);
		}
		/* check South neighbor */
		if (i != 6)
		{
			if ((p[i + 1][j] == EMPTY) && ml[i + 1][j])
			{
				++lib;
				ml[i + 1][j] = EMPTY;
			}
			else if ((p[i + 1][j] == color) && ml[i + 1][j])
				count(i + 1, j, color);
		}
		/* check West neighbor */
		if (j != EMPTY)
		{
			if ((p[i][j - 1] == EMPTY) && ml[i][j - 1])
			{
				++lib;
				ml[i][j - 1] = EMPTY;
			}
			else if ((p[i][j - 1] == color) && ml[i][j - 1])
				count(i, j - 1, color);
		}
		/* check East neighbor */
		if (j != 6)
		{
			if ((p[i][j + 1] == EMPTY) && ml[i][j + 1])
			{
				++lib;
				ml[i][j + 1] = EMPTY;
			}
			else if ((p[i][j + 1] == color) && ml[i][j + 1])
				count(i, j + 1, color);
		}
	}

	if (c == 3)
	{
		/* check North neighbor */
		if (i != EMPTY)
		{
			if ((p[i - 1][j] == EMPTY) && ml[i - 1][j])
			{
				++lib;
				ml[i - 1][j] = EMPTY;
			}
			else if ((p[i - 1][j] == color) && ml[i - 1][j])
				count(i - 1, j, color);
		}
		/* check South neighbor */
		if (i != 8)
		{
			if ((p[i + 1][j] == EMPTY) && ml[i + 1][j])
			{
				++lib;
				ml[i + 1][j] = EMPTY;
			}
			else if ((p[i + 1][j] == color) && ml[i + 1][j])
				count(i + 1, j, color);
		}
		/* check West neighbor */
		if (j != EMPTY)
		{
			if ((p[i][j - 1] == EMPTY) && ml[i][j - 1])
			{
				++lib;
				ml[i][j - 1] = EMPTY;
			}
			else if ((p[i][j - 1] == color) && ml[i][j - 1])
				count(i, j - 1, color);
		}
		/* check East neighbor */
		if (j != 8)
		{
			if ((p[i][j + 1] == EMPTY) && ml[i][j + 1])
			{
				++lib;
				ml[i][j + 1] = EMPTY;
			}
			else if ((p[i][j + 1] == color) && ml[i][j + 1])
				count(i, j + 1, color);
		}
	}

	if (c == 4)
	{
		/* check North neighbor */
		if (i != EMPTY)
		{
			if ((p[i - 1][j] == EMPTY) && ml[i - 1][j])
			{
				++lib;
				ml[i - 1][j] = EMPTY;
			}
			else if ((p[i - 1][j] == color) && ml[i - 1][j])
				count(i - 1, j, color);
		}
		/* check South neighbor */
		if (i != 12)
		{
			if ((p[i + 1][j] == EMPTY) && ml[i + 1][j])
			{
				++lib;
				ml[i + 1][j] = EMPTY;
			}
			else if ((p[i + 1][j] == color) && ml[i + 1][j])
				count(i + 1, j, color);
		}
		/* check West neighbor */
		if (j != EMPTY)
		{
			if ((p[i][j - 1] == EMPTY) && ml[i][j - 1])
			{
				++lib;
				ml[i][j - 1] = EMPTY;
			}
			else if ((p[i][j - 1] == color) && ml[i][j - 1])
				count(i, j - 1, color);
		}
		/* check East neighbor */
		if (j != 12)
		{
			if ((p[i][j + 1] == EMPTY) && ml[i][j + 1])
			{
				++lib;
				ml[i][j + 1] = EMPTY;
			}
			else if ((p[i][j + 1] == color) && ml[i][j + 1])
				count(i, j + 1, color);
		}
	}

	if (c == 5)
	{
		/* check North neighbor */
		if (i != EMPTY)
		{
			if ((p[i - 1][j] == EMPTY) && ml[i - 1][j])
			{
				++lib;
				ml[i - 1][j] = EMPTY;
			}
			else if ((p[i - 1][j] == color) && ml[i - 1][j])
				count(i - 1, j, color);
		}
		/* check South neighbor */
		if (i != 18)
		{
			if ((p[i + 1][j] == EMPTY) && ml[i + 1][j])
			{
				++lib;
				ml[i + 1][j] = EMPTY;
			}
			else if ((p[i + 1][j] == color) && ml[i + 1][j])
				count(i + 1, j, color);
		}
		/* check West neighbor */
		if (j != EMPTY)
		{
			if ((p[i][j - 1] == EMPTY) && ml[i][j - 1])
			{
				++lib;
				ml[i][j - 1] = EMPTY;
			}
			else if ((p[i][j - 1] == color) && ml[i][j - 1])
				count(i, j - 1, color);
		}
		/* check East neighbor */
		if (j != 18)
		{
			if ((p[i][j + 1] == EMPTY) && ml[i][j + 1])
			{
				++lib;
				ml[i][j + 1] = EMPTY;
			}
			else if ((p[i][j + 1] == color) && ml[i][j + 1])
				count(i, j + 1, color);
		}
	}
}								/* end count */
