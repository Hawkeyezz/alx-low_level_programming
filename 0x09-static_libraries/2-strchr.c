#include "main.h"
/**
 * _strchr - the entry point
 * @s: first input
 * @c: second input
 * Return: Must be 0 (Success)
 */
char *_strchr(char *s, char c)
{
                int y = 0;

                for (; s[y] >= '\0'; y++)
                {
                            if (s[y] == c)
                                        return (&s[y]);
                }
                return (0);
}
