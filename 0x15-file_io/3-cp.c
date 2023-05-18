#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
* create_buffer - creates and allocates bytes to buffer.
* @file: name of file.
* Return: buffer.
*/
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
* close_file - closes descriptors of file.
* @fd: file descriptor.
*/
void close_file(int fd)
{
int n;
n = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
* main - copy content of a file.
* @argc: argument.
* @argv: array of arguments.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
int f, g, h, i;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
h = read(f, buffer, 1024);
g = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (f == -1 || g == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
i = write(g, buffer, h);
if (g == -1 || i == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
h = read(f, buffer, 1024);
g = open(argv[2], O_WRONLY | O_APPEND);
} while (h > 0);
free(buffer);
close_file(f);
close_file(g);
return (0);
}
