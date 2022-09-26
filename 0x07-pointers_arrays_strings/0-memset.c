#include "main.h"

/**
 * function -fill the memory witha a constant byte
 *@s: address to memory block
 *@b: charto be used
 *@n: number of bytes to be used
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	while (n)
       	{
	      s[n - 1] = b;
              n--;
          }
          return (s);
}	  
