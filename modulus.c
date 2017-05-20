#include <stdio.h>
// 12 jun  2015
// 20.05.2017 14:50:57
// changes after running cppcheck (lint)
// testing modulus arithmetic 

int main ()  {
//	int i,r,m;

	for (int i=0; i<10; i++) {
		int r,m;
		r = i / 3;
		m = i % 3;
		printf(" i=  %d  %d   %d   \n", i , r, m);
	}

	return(0);
}
