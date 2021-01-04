/*
 * logicAnd.c
 * 
 * Copyright 2020 Mikeh <mikeh@mikeh-Dell-DM051>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * 
 */


#include <stdio.h>
void
NotEq1 ()
{
  printf ("NotEq1\n");
  for (int i = 1; i < 20; i++)
    {
      if ((i != 6) && (i != 10))
	{
	  printf ("value %2d \n", i);
	}
    }
//  return 0;
}

void
NotEq2 ()
{				// not (A or B) = not A and not B
  printf ("NotEq2\n");
  for (int i = 1; i < 20; i++)
    {
      if (!(i == 6 || i == 10))
	{
	  printf ("value %2d \n", i);
	}
    }
//  return 0;
}

int
main (int argc, char **argv)
{
  NotEq1 ();
  NotEq2 ();

}
