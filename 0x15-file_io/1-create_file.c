#include"main.h"

/**
 * create_file - a function that creates a file
 * @filename : name of the file to create
 * @text_content : string to write to the file pointer
 * Return : 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	/*Initialise f_d, written, num*/
	int f_d;
	int written;
	int num;

	f_d = 0;
       	written = 0;
	num = 0;

	/*check if the file is blank*/
	if (filename == NULL)
		return (-1);
	if (text_content!= NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}
		f_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		written = write(f_d, text_content, num);

		if (f_d == -1 || written == -1)
			return (-1);

		close (f_d);
		return (1);
}
