#include <stdio.h>
// 23 jan 2015
// 27 September 2016 after learning about indent
// indent throws an error 

int
max (int x, int y)
{
  int temp;

  if (x > y)
    temp = x;
  else
    temp = y;
  //temp = if (x>y) x else y;
  return temp;
}

int
main ()
{
  printf ("hi Mike1\n");
  int newTemp = max (11, 3);
  printf ("func %d\n", max (6, 17));
  printf ("hi Mike2a\n");
  printf ("newTemp  %d\n", newTemp);
  return (9);

}
