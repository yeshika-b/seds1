final: incbyfun.o
  gcc incbyfun.o -o final

incbyfun.o: incbyfun.c incbyfun.h
  gcc -c incbyfun.c
