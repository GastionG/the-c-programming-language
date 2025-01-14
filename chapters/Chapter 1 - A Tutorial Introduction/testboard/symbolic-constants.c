#include <stdio.h>

// Always in uppercase, without equals symbol and semicolon at the of the line.
#define CONSTANT_A "test"
#define CONSTANT_B 22

int main()
{
  printf(CONSTANT_A "\n");

  printf("%i", CONSTANT_B);

  return 0;
}

/*
It is suposed to be a "symbolic" constant, so a think it behavies
just like a variable (memory space) that cannot be changed.
*/