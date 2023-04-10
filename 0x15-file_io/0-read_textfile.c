#include "main.h"
#include<stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename : 
 * @letters : the number of letters it should read and print
 * Return : actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t written_letters;/*bytes written*/
	ssize_t read_letters;/*bytes read*/
	ssize_t f_d; /*file descriptor*/
	char *buff;/*characters pointer*/

	f_d = open(filename, O_RDONLY);/*Open read only file descriptor*/
	if (f_d == -1)/*check if the f/d can be opened*/
		return (0);
	/*Allocate memory for the buff*/
	buff = malloc(sizeof(char) * letters);
	read_letters = read(f_d, buff, letters);
	written_letters = write(STDOUT_FILENO, buff, read_letters);

	close(f_d);
	free(buff);
	return(written_letters);
}
