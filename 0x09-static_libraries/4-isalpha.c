#include "main.h"
/**
 * _isalpha - a funtion that checks for alphabet character
 * @c: our character that will be checked
 * Return: 1 if c is a letter, if it's not 0
 */
int _isalpha(int c)
{
                return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
