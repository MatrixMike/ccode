// hex print 
#include<stdio.h>
#include<stdlib.h>
#include "one.h"

// tcc including.c  -vv -run
// gcc including.c  -o including   -MMD  -MF test1.txt
// gcc including.c  -o including   -MMD  -MF test1.txt   -trigraphs   -H

int main (){
	printf("words %02x\n", ONE);
	printf("words %02x\n", TWO);
	printf("words %02x\n", THREE);
	printf("??=  ??-     ??'  ??! \n");		//  use -trigraphs to enable [-Wtrigraphs]
	return 1;
}
