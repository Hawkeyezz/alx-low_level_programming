#include "main.h"
/**
 * _strstr - our main entry point
 * @haystack: first input value
 * @needle: second input value
 * Return: Must be 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
                for (; *haystack != '\0'; haystack++)
                {
                            char *l = haystack;
                            char *p = needle;

                            while (*l == *p && *p != '\0')
                            {
                                        l++;
                                        p++;
                            } 
                            if (*p == '\0')
                                        return (haystack);
                }
                return (0);
}
