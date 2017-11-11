
#include <stdio.h>
#include "aigo.h"
extern unsigned char p[19][19];
extern int p1move, p2move;		/* p1 color, p2 color */
extern int lib;					/* current stone liberty */
extern int p1ik, p1jk;			/* location of p1 stone captured */
extern int p2ik, p2jk;			/* location of p2 stone captured */
extern int p1k, p2k;			/* no. of stones captured by p1 and p2 */
int ii = 0;
int i = 0;
int j = 0;
void showboard(int c)
{

	if (c == 1)
	{							/* goban 5x5 */
		printf("   A B C D E\n");
		for (i = 0; i < 5; i++)
		{
			ii = 5 - i;
			printf("%2d", ii);

			for (j = 0; j < 5; j++)
				if (p[i][j] == 0)
					printf(" -");
				else if (p[i][j] == 1)
					printf(" O");
				else
					printf(" X");

			printf("%2d", ii);
			printf("\n");

		}
		printf("   A B C D E\n");
	}

	if (c == 2)
	{							/* goban 7x7 */
		printf("   A B C D E F G\n");
		for (i = 0; i < 7; i++)
		{
			ii = 7 - i;
			printf("%2d", ii);

			for (j = 0; j < 7; j++)
				if (p[i][j] == 0)
					printf(" -");
				else if (p[i][j] == 1)
					printf(" O");
				else
					printf(" X");

			printf("%2d", ii);
			printf("\n");

		}
		printf("   A B C D E F G\n");
	}

	if (c == 3)
	{							/* goban 9x9 */
		printf("   A B C D E F G H J\n");
		for (i = 0; i < 9; i++)
		{
			ii = 9 - i;
			printf("%2d", ii);

			for (j = 0; j < 9; j++)
				if (p[i][j] == 0)
					printf(" -");
				else if (p[i][j] == 1)
					printf(" O");
				else
					printf(" X");

			printf("%2d", ii);
			printf("\n");

		}
		printf("   A B C D E F G H J\n");
	}

	if (c == 4)
	{							/* goban 13x13 */
		printf("   A B C D E F G H J K L M N\n");
		for (i = 0; i < 13; i++)
		{
			ii = 13 - i;
			printf("%2d", ii);

			for (j = 0; j < 13; j++)
				if (p[i][j] == 0)
					printf(" -");
				else if (p[i][j] == 1)
					printf(" O");
				else
					printf(" X");

			printf("%2d", ii);
			printf("\n");

		}
		printf("   A B C D E F G H J K L M N\n");
	}

	if (c == 5)
	{							/* goban19x19 */
		printf("   A B C D E F G H J K L M N O P Q R S T\n");
		for (i = 0; i < 19; i++)
		{
			ii = 19 - i;
			printf("%2d", ii);

			for (j = 0; j < 19; j++)
				if (p[i][j] == 0)
					printf(" -");
				else if (p[i][j] == 1)
					printf(" O");
				else
					printf(" X");

			printf("%2d", ii);
			printf("\n");

		}
		printf("   A B C D E F G H J K L M N O P Q R S T\n");
	}
	if (p1move == 1)
		printf("Player 1 color: White O\n");
	else if (p1move == 2)
		printf("Player 1 color: Black X\n");
	else
		printf("\n");
	if (p2move == 1)
		printf("Player 2 color: White O\n");
	else if (p2move == 2)
		printf("Player 2 color: Black X\n");
	else
		printf("\n");
}
