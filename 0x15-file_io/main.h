#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);