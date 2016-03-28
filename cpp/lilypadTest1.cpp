/*
 * lilypadTest1.cpp
 * 
 * Copyright 2015 Michael Hewitt <mikeh@electroteach.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */



#include <iostream>

int main(int argc, char **argv)
{
	
	int LEDarray[4] ; int length =4;
	
	for (int z=0; z<length ; z++) {
	//	cout << z;
	// printf(" z %d ", z);
	LEDarray[z] = z*z;
	// cout << LEDarray[z];
	cout << length << 5;
	}
	
	return 0;
}

