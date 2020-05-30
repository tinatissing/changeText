#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 * Program Name: chop.c
 * Author(s): Tina Tissington
 * Purpose: Remove '\n' from end of line.
 */ 

int chop ( char *line ) {
	char *p = line;
	if ( p[strlen(p)-1] == '\n' ) {
		p[strlen(p)-1] = '\0';
		return(0);
	}
	else {
		return(-1);
	}	
}
