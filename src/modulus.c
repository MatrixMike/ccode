#include <stdio.h>
/* 12 jun  2015
 20.05.2017 14:50:57
 changes after running cppcheck (lint)
 testing modulus arithmetic 
 24.05.2019 11:23:51
 * */
int
main ()
{
//      int i,r,m;
#define divisor 4
  for (int i = 0; i < 20; i++)
    {
      int r, m, rx;
      r =  i / divisor;
      m =  i % divisor;
      rx = r;
      // current project seems to require OFF and ON in blocks of four
      // so extra processing on r needed
      // 
      printf (" i=  %2d  %2d  %2d  %2d   ", i, r, rx, m);
          printf(" >%2d \n",(((i % 2)%2 == 0) ? 1 : -1));
    }

  return (0);
}
