#include <stdio.h>

void write_bit(int a,int n)
{
  int c;


  unsigned int bit = (1 << (n - 1));


  for ( c=0; c<n; c++,bit>>=1 ){
  if ( a&bit ){
    putchar('1');
  }
  else{
    putchar('0');
  }}


  putchar(' ');
  return;
}

