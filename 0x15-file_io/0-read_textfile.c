#include "main.h"
#include <stdlib.h>
/**
* read_textfile- reads file and prints to STDOUT.
* @filename: text file
* @letters: number of letters
* Return: w- number of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t j;
ssize_t k;
ssize_t l;
j = open(filename, O_RDONLY);
if (j == -1)
return (0);
buf = malloc(sizeof(char) * letters);
l = read(j, buf, letters);
k = write(STDOUT_FILENO, buf, l);
free(buf);
close(j);
return (k);
}
