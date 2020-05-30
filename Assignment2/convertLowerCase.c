#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 * Program Name: convertLowerCase
 * Author(s): Tina Tissington
 * Purpose: Convert all upper case letters to lower case.
 */ 

int convertLowerCase ( char *line ) {
	int lineLength;
	int character;
	int i;
	int total = 0;

	lineLength = strlen ( line );
	for ( i=0; i<lineLength; i++) {
		character = (line[i]);
		if (character >= 65 && character <= 90) {
			(line[i]) = character + 32;
			total++;
		}
	}
	return( total );
}
