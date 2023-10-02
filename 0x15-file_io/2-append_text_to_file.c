#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Adds text to file.
 * @filename: Name of file to be given to file created
 * @text_content: The string to write on file
 *
 * Return: Successful = 1, unsuccessful = 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *doc;
	size_t len;

	if (filename == NULL)
		return (-1);

	doc = fopen(filename, "a");
	if (doc == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		fwrite(text_content, sizeof(char), len, doc);
	}
	fclose(doc);
	return (1);
}
