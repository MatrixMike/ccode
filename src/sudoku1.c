/*
 * sudoku1.c
 * 
 * Copyright 2016 Michael Hewitt <mikeh@electroteach.com>
 * 
 * 27.03.2016 10:44:21
 * see www.programiz.com
 * see www.cprogramming.com
 */

#include <stdio.h>
#include <stdbool.h>
// 20.05.2017 14:57:50
// 
int main(int argc, char **argv)
{
	int zone1;		//  = 0x01d3;
	int zone2;
	int zone3;
	int mask;
	mask = 0x0f;

	zone1 = 0b0111010011;
	zone2 = 0b100;		// 4
	zone2 = ~zone2;		// compliment {NOT} 
	// repeated use of zone3 to demo compilation but lint 
	// picks up that zone3 is re-assigned before being used
	zone3 = zone1 | zone2;	// OR
	zone3 = zone1 & zone2;	// AND
	zone3 = zone1 ^ zone2;	// XOR
	zone3 = zone1 ^ zone2;	// XOR  
	zone3 = (zone1 & mask) | 0b01000000;	// mask

//      bool keep_going ;
//      keep_going = true;
//      keep_going = false;
	printf(" test value : %d: %d: %d\n", zone1, zone2, zone3);
	printf(" test value : %04x: %04x: %04x\n", zone1, zone2, zone3);
	printf(" test value : %04x: %04x: %04x: %04x\n", 192,168,0,10);
	printf(" test value : %04x: %04x: %04x: %04x\n", 10,0,0,138);
	return 0;
}
