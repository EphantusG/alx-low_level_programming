#include"main.h"

/**
 * append_text_to_file.c - a function that appends text at the end of a file
 * @flename : filename pointer
 * @text_content : text to add at end of filenane
 *
 * Return : 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_d, written, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
		num++;
	}
	f_d = open(filename, O_WRONLY | O_APPEND);
	written = write(f_d, text_content, num);

	if (f_d == -1 || written == -1)
		return (-1);

	close(f_d);

	return (1);
		
}
