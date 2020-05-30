#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 * Program Name: trim.c
 * Author(s): Tina Tissington
 * Purpose: Trim all white space 
 */ 

int trim ( char *line ) {
	int lineLength;
	int i;
	int x = 0;
	int y = 0;

	lineLength = strlen ( line );

	while (	(x = 0) ) {
		
		if (line[y] == 32 || line[y] == 9) {
			line[0] = '\0';
			i = 1;
		}
		if (line[lineLength-y] == 32 || line[lineLength-y] == 9) {
			line[lineLength-y] = '\0';
			i = 1;
		}
		if (line[y] != 32 && line[y] != 9 && line[lineLength-y] != 32 && line[lineLength-y] != 9) {
			x = 1;
		}
		
		y++;
		
	}

	if (i == 1) {
		return(0);
	}	
	else {
		return(-1);
	}
}
