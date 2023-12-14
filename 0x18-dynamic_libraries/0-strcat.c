#include "main.h"
/**
 *  _strcat - the function to concatenates two strings
 *  @dest: first entered value
 *  @src: second entered value
 *  Return: must be void
 */
char *_strcat(char *dest, char *src)
{
                int y;
                int z;

                y = 0;
                while (dest[y] != '\0')
                {
                            y++;
                }
                z = 0;
                while (src[z] != '\0')
                {
                            dest[y] = src[z];
                            y++;
                            z++;
                }
                dest[y] = '\0';
                return (dest);
}
