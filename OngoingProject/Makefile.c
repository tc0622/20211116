# -*- Makefile -*-

# target: dependencies
#         action

20211005: 20211005.o
	gcc 20211005.o -o 20211005
20211005.o: 20211005.c
	gcc -c 20211005.c
