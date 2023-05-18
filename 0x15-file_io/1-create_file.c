#include "main.h"
/**
* create_file - creates file.
* @filename: name of file
* @text_content: string to write to file.
* Return: 1 if successful and -1 if failed
*/
int create_file(const char *filename, char *text_content)
{
int j, k, ln = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}
j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
k = write(j, text_content, ln);
if (j == -1 || k == -1)
return (-1);
close(j);
return (1);
}
