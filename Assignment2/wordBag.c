#include <stdio.h>
#include <string.h>
#include "textProc.h"

#define MAXSIZE  500    /* maximum size of input line */
#define MAXWORDS 1000   /* maximum number of unique words */
/* 
 * Program Name: wordBag.c
 * Author(s): Tina Tissington
 * Purpose: 
 */ 

int main ( int argc, char *argv[] ) {
   char line[MAXSIZE];
   int x = 0;
   int numWords = 1;
   char *newWord;
   char oldWord;

   while ( fgets ( line, MAXSIZE, stdin ) != NULL ) {
	
	newWord = line;
	
	if ( ( x == 0) ) {	
		oldWord = line;
		printf(" word holder %s\n", oldWord);
		x = 1;
	}
	else if ( oldWord == *newWord ) {
		printf("same %s %s\n", oldWord, newWord);
		numWords++;
	}
	else {
		printf ( "%s %d\n", oldWord, numWords);
		numWords = 1;
		oldWord = *newWord;
	}
	
   } 


   return ( 0 );
}
