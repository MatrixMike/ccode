/*
 * diagonal.c
 * 
 * Copyright 2016 Michael Hewitt <mikeh@electroteach.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * 
 */
// need to link with -lm option to include maths library

#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
	double  t;
	t=19.0;
	
	printf("Diagonal %f\n", sqrt(t));
	return 0;
}

