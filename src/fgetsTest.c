#include<stdio.h>

int
main ()
{

  char str[10]; // reading more than array size does not crash - chars are ignored
  fgets (str, sizeof (str), stdin);	// safe to use
  puts (str);
  return 0;
}
