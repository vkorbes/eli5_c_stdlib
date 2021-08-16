#include <string.h>

// c89 definition:
//
// Description
// The memcpy function copies n characters from the object pointed to by src into the object pointed to by dest. If copying takes place between objects that overlap, the behavior is undefined. 
// Returns
// The memcpy function returns the value of dest. 

void *memcpy(void *dest, const void *src, size_t size) {
	char *tempDest = dest;
	const char *tempSrc = src;
	while (size) {
	    *tempDest = *tempSrc;
	    tempDest++, tempSrc++, size--;
	};
	return (dest);
}
