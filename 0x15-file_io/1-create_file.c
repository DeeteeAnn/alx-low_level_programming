#include "main.h"

/**
 * _strlen- length of string is returned
 * @s: length of string to check
 * Return: figure of the string length
 */
int _strlen(char *s)
{
	int ab = 0;

	if (s == 0)
		return (0);
	while (*s++)
		ab++;
	return (ab);
}

/**
 * create_file - a new file is created
 * @filename: this points to name of file to create.
 * @text_content: what to be written in the file
 * Return: if successful 1, unsuccessful 0.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes = 0, len = _strlen(text_content);
	int doc;

	if (filename == NULL)
		return (-1);

	doc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (doc == -1)
		return (-1);

	if (len)
		bytes = write(doc, text_content, len);
	close(doc);
	return (bytes == len ? 1 : -1);
}
