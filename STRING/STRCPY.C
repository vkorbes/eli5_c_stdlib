#include <string.h>

// c89 definition:
//
// Description
// The strcpy function copies the string pointed to by src [c89: 's2'] (including the terminating null character) into the array pointed to by dest [c89: 's1']. If copying takes place between objects that overlap, the behavior is undefined.
//
// Returns
// The strcpy function returns the value of dest [c89: 's1']. 

char *(strcpy)(char *dest, const char *src) {
    char *temp = dest;
	while (*src != '\0') {
	    *temp = *src;
	    temp++, src++;
	};
	*temp = '\0';
	return (dest);
}
