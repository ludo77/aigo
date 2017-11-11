

/* definitions */

#define EMPTY 0
#define WHITE 1
#define BLACK 2

/* public functions */

extern void count(int i,
                  int j,
                  int color);

extern void countlib(int m,
                     int n,
                     int color);

extern void eval(int color);

extern void examboard(int color);

extern int getij(char move[],
                 int *i,
                 int *j);

extern void getmove(char move[],
                    int *i,
                    int *j);


extern void showboard(int c);


extern int suicide(int i,
                   int j);
