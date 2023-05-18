#include "main.h"
/**
* append_text_to_file - appends text to file.
* @filename: name of the file.
* @text_content: string to add to file.
* Return: 1 successful or -1 failed.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int q, k, ln = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}
q = open(filename, O_WRONLY | O_APPEND);
k = write(q, text_content, ln);
if (q == -1 || k == -1)
return (-1);
close(q);
return (1);
}
