#include <stdio.h>
// 12 jun  2015

// testing modulus arithmetic 

int main ()  {
	int i,r,m;

	for (i=0; i<10; i++) {
		r = i / 3;
		m = i % 3;
		printf(" i=  %d  %d   %d   \n", i , r, m);
	}

	return(0);
}
