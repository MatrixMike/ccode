/*
 * vowel1.c
 * 
 * Copyright 2018 mikeh <mikeh@mikeh-desktop>
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


#include <stdio.h>

/*
 * int main(int argc, char **argv)
{
	
	return 0;
}
*/



//#include <stdio.h>
//#include <string.h>
 
int check_vowel(char);
 
int main()
{
  char s[100], t[100];
  int i, j = 0;
 
  printf("Enter a string to delete vowels\n");
  gets(s);
 
  for(i = 0; s[i] != '\0'; i++) {
    if(check_vowel(s[i]) == 0) {       //not a vowel
      t[j] = s[i];
      j++;
    }
  }
 
  t[j] = '\0';
 
  strcpy(s, t);    //We are changing initial string
 
  printf("String after deleting vowels: %s\n", s);
 
  return 0;
}
 
 
int check_vowel(char c)
{
  switch(c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
  }
}
