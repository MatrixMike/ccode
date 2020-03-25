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

int
main (int argc, char **argv)
{
  for (int i = 1; i < 20; i++)
    {
      if ((i != 6) & (i != 10))
	{
	  printf ("value %2d \n", i);
	}
    }
  return 0;
}
