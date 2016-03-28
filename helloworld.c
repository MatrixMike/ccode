/*
 * helloworld.c
 * 
 * Copyright 2016 Michael Hewitt <mikeh@electroteach.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x;
	double v = 3.7;
	for (x=1; x<6; x++){
		printf("Voltage of %d cells = %5.2f\n", x, x * v);
	}
	return 0;
}
//  could add test for >1 to select 's' in printf

