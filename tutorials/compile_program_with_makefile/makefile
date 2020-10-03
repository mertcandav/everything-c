#
#	Direcory Tree:
#   include/
#			list.h
# 	src/
#			list.c
#			main.c
#
#	

# VARIABLES
GCC = gcc
GCC_COMPILE = -c
GCC_OUT = -o
DIR_INCLUDE = ./include
DIR_SRC = ./src

# Workflows
works: includes compile
includes: list.h

list.h: $(DIR_SRC)/list.c # ./src/list.c
	$(GCC) $(GCC_COMPILE) $< $(GCC_OUT) list.o
# gcc -c ./src/list.c -o list.o

compile: $(DIR_SRC)/main.c # ./src/main.c
	$(GCC) $< list.o $(GCC_OUT) program
# gcc ./src/main.c list.o -o program
