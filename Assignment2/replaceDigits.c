#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 * Program Name: replaceDigits
 * Author(s): Tina Tissington
 * Purpose: Replace all digits(0-9) with blanks
 */ 

int replaceDigits ( char *line ) {
	int lineLength;
	int character;
	int i;
	int total = 0;

	lineLength = strlen ( line );
	for ( i=0; i<lineLength; i++) {
		character = (line[i]);
		if (character >= 48 && character <= 57) {
			(line[i]) = 32;
			total++;
		}
	}
	return( total );
}
