#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 * Program Name: reduceSpace.c
 * Author(s): Tina Tissington
 * Purpose: Redude white space (blank characters and tabs) to a single white space
 */ 

int reduceSpace ( char *line ) {
	int lineLength;
	int character;
	int i;
	int total = 0;

	lineLength = strlen ( line );
	for ( i=0; i<lineLength; i++) {
		character = (line[i]);
		if (character == 32 && character+1 == 32) {
			(line[i]) = '\0';
			total++;
		}
		else if (character == 9) {
			(line[i]) = 32;
			total++;
		}	
	}
	return( total );
}
