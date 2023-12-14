#include "main.h"
/**
 *_memcpy - function to copy memory areas
 *@dest: memory is saved here.
 *@src: memory is copied from here.
 *@n:  the number of memory bytes
 *Return:  has to copy the memory with the n byted that changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
                int y = 0;
                int z = n;

                for (; y < z; y++)
                {
                            dest[y] = src[y];
                            n--;
                }
                return (dest);
}
