#---------------------------
# Makefile for AIGO on UNIX
#
# Usage: make
#---------------------------

SRC = count.c \
      countlib.c \
      eval.c \
      exambord.c \
      getij.c \
      getmove.c \
      main.c \
      showboard.c \
      suicide.c

PRG = aigo

OBJ = $(SRC:.c=.o)

CFLAGS = -O

$(PRG) : $(OBJ)
	gcc -Wno-unused-result $(OBJ) -o  $@
	/bin/rm -f *.o

$(OBJ) : aigo.h
