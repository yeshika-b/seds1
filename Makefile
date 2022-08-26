final: sumofnatnos.o incbyfun.o
  gcc sumofnatnos.o incbyfun.o -o final

sumofnatnos.o: sumofnatnos.c incbyfun.h
  gcc -c sumofnatnos.c

incbyfun.o: incbyfun.c incbyfun.h
  gcc -c incbyfun.c
