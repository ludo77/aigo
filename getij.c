#include "aigo.h"
unsigned char move[3];
extern int c;
int getij(char move[],			/* move string */
		  int *i,				/* move row number */
		  int *j)				/* move column number */
/* convert string input to i, j coordinate */
{
	int k;

	if (c == 1)
	{
		if ((move[0] >= 'A') && (move[0] <= 'E'))
			*j = move[0] - 'A';
		else if ((move[0] >= 'a') && (move[0] <= 'e'))
			*j = move[0] - 'a';

		else
			return 0;
		k = move[1] - '0';
		// if (move[2]) k = k * 10 + move[2] - '0';
		*i = 5 - k;
		if ((*i >= 0) && (*i <= 5))
			return 1;
		else
			return 0;
	}

	if (c == 2)
	{
		if ((move[0] >= 'A') && (move[0] <= 'G'))
			*j = move[0] - 'A';
		else if ((move[0] >= 'a') && (move[0] <= 'g'))
			*j = move[0] - 'a';

		else
			return 0;
		k = move[1] - '0';
		// if (move[2]) k = k * 10 + move[2] - '0';
		*i = 7 - k;
		if ((*i >= 0) && (*i <= 7))
			return 1;
		else
			return 0;
	}

	if (c == 3)
	{
		if ((move[0] >= 'A') && (move[0] <= 'H'))
			*j = move[0] - 'A';
		else if ((move[0] >= 'J') && (move[0] <= 'K'))
			*j = move[0] - 'B';
		else if ((move[0] >= 'a') && (move[0] <= 'h'))
			*j = move[0] - 'a';
		else if ((move[0] >= 'j') && (move[0] <= 'K'))
			*j = move[0] - 'b';
		else
			return 0;
		k = move[1] - '0';
		// if (move[2]) k = k * 10 + move[2] - '0';
		*i = 9 - k;
		if ((*i >= 0) && (*i <= 9))
			return 1;
		else
			return 0;
	}

	if (c == 4)
	{
		if ((move[0] >= 'A') && (move[0] <= 'H'))
			*j = move[0] - 'A';
		else if ((move[0] >= 'J') && (move[0] <= 'N'))
			*j = move[0] - 'B';
		else if ((move[0] >= 'a') && (move[0] <= 'h'))
			*j = move[0] - 'a';
		else if ((move[0] >= 'j') && (move[0] <= 'N'))
			*j = move[0] - 'b';
		else
			return 0;
		k = move[1] - '0';
		if (move[2])
			k = k * 10 + move[2] - '0';
		*i = 13 - k;
		if ((*i >= 0) && (*i <= 13))
			return 1;
		else
			return 0;
	}

	if (c == 5)
	{
		if ((move[0] >= 'A') && (move[0] <= 'H'))
			*j = move[0] - 'A';
		else if ((move[0] >= 'J') && (move[0] <= 'T'))
			*j = move[0] - 'B';
		else if ((move[0] >= 'a') && (move[0] <= 'h'))
			*j = move[0] - 'a';
		else if ((move[0] >= 'j') && (move[0] <= 't'))
			*j = move[0] - 'b';
		else
			return 0;
		k = move[1] - '0';
		if (move[2])
			k = k * 10 + move[2] - '0';
		*i = 19 - k;
		if ((*i >= 0) && (*i <= 18))
			return 1;
		else
			return 0;
	}
}								/* end getij */
