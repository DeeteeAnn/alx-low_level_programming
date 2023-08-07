#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - a new file is created
 * @filename: this points to name of file to create.
 * @text_content: what to be written in the file
 * Return: if successful 1, unsuccessful 0.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *doc;
	size_t len;

	if (filename == NULL)
		return (-1);

	doc = fopen(filename, "w");
	if (doc == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		fwrite(text_content, size of(char), len, doc);
	}
	fclose(doc);
	return (1);
}
