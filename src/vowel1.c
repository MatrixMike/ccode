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
/*
// https://www.programmingsimplified.com/c/source-code/c-program-remove-vowels-from-string
// https://stackoverflow.com/questions/30890696/why-gets-is-deprecated)


*/
 


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
// Test string with UPPER and LOWER upper AND and lower characters in IN
#include <stdio.h>
#include <string.h>
int check_for_vowel (char c);

//int check_vowel(char);
// char check_vowel(char);
char check_vowel[100];
int
main ()
{
  char s[100], t[100];
  int i, j = 0;
  //int check_vowel(char);
// char check_vowel(char);
  char check_vowel[100];

  printf ("Enter a string to delete vowels\n");
  fgets (check_vowel, sizeof (check_vowel), stdin);	// better use fgets

/*   while(s[i]) {
      putchar (toupper(s[i]));
      i++;
   }
*/

  for (i = 0; check_vowel[i] != '\0'; i++)	// loop through the input string
    {
//      printf ("\n1  %x  ", check_vowel[i]); // print each char
      // check each incoming char in string 
      if (check_for_vowel (toupper (check_vowel[i])) == 0)	// if char is a vowel  
	{			//not a vowel
//        printf ("\n2  %x  ", check_vowel[i]); // print it
	  t[j] = check_vowel[i];	// copy to out put array
	  j++;			// incr output pointer
	}
    }

  t[j] = '\0';

  strcpy (s, t);		//We are changing initial string. copy rhs to lhs ! 

  printf ("\nString after deleting vowels:\n%s\n", s);

  return 0;
}


int
check_for_vowel (char c)
{
  switch (c)
    {
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
