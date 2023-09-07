#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reading the text file print, to the STDOUT.
 * @filename: the text file to be read
 * @letters: the number of letters to be read
 * Return: actual number of bytes read and printed, else 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int file_descriptor = -1;
ssize_t output = 0;

if (!filename)
return (0);
file_descriptor = open(filename, 0_RDONLY);
if (file_descriptor < 0)
return (0);
buffer = malloc(sizeof(char) * letters);
if (!buffer)
{
close(file_descriptor);
return (0);
}
output = read(file_descriptor, buffer, letters);
if (output < 0)
{
free(buffer);
close(file_descriptor);
return (0);
}
output = write(STDOUT_FILENO, buffer, output);
free(buffer);
close(file_descriptor);
if (output < 0)
return (0);
return (output);
