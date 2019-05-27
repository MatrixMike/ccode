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
// https://www.programmingsimplified.com/c/source-code/c-program-remove-vowels-from-string
// https://stackoverflow.com/questions/30890696/why-gets-is-deprecated)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <ctype.h>

#include <stdbool.h>		//, one can use the more intuitive name bool
#include <assert.h>
/*
 * int main(int argc, char **argv)
{
	
	return 0;
}
*/

#include <stdio.h>
#include <string.h>
int check_for_vowel(char c);
 
//int check_vowel(char);
// char check_vowel(char);
 char check_vowel[100];
int main()
{
  char s[100], t[100];
  int i, j = 0;
 
  printf("Enter a string to delete vowels\n");
  fgets(check_vowel, sizeof(check_vowel), stdin);  // better use fgets

/*   while(s[i]) {
      putchar (toupper(s[i]));
      i++;
   }
*/

  for(i = 0; s[i] != '\0'; i++) {
    if(check_for_vowel(toupper(s[i])) == 0) {       //not a vowel
      t[j] = s[i];
      j++;
    }
  }
 
  t[j] = '\0';
 
  strcpy(s, t);    //We are changing initial string
 
  printf("String after deleting vowels: %s\n", s);
 
  return 0;
}
 
 
int check_for_vowel(char c)
{
  switch(c) {
//    case 'a':
    case 'A':
//    case 'e':
    case 'E':
//    case 'i':
    case 'I':
//   case 'o':
    case 'O':
//    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
  }
}
