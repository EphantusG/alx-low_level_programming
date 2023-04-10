#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/*Call prototypes*/

void close_file(int f_d);
char *create_buff(char *file);

/**
 * create_buff(char *filename);
 * @filename : file to store chars
 *
 * Return : pointer to buffer file
 */

char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char)*1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",filename);
	       	exit(99);
	}
	return (buff);
}

/**
 * close_file - Closes f_d
 * @f_d : file descriptor to be closed
 */

void close_file(int f_d)
{
int to_close;

to_close = close(f_d);

if (to_close == -1)
{
dprintf(STDERR_FILENO,"Error: Can't close f_d %d\n",f_d);
exit(100);
}
}

/**
 * main - copies the content of a file to another file
 * @argc : no. of arguments
 * @argv :pointers array
 *
 * Return : On success 0
 * Exit Code : 97 when arguments count is incorrec, 
 * Exit Code : 98 whe from_file cannot be read
 * Exit Code : 99 when to_file cannot be written
 * Exit Code : 100 when from_file and to_file cannot be closed
 */
int main(int argc, char *argv[])
{
int from_file, to_file, read_from, written;
char *buff;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = create_buff(argv[2]);
from_file = open(argv[1], O_RDONLY);
read_from = read(from_file, buff, 1024);
to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from_file == -1 || read_from == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
written = write(to_file, buff, read_from);
if (to_file == -1 || written == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
read_from = read(from_file, buff, 1024);
to_file = open(argv[2], O_WRONLY | O_APPEND);
} while (read_from > 0);
free(buff);
close_file(from_file);
close_file(to_file);
return (0);
}

