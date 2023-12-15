#include "shell.h"
/**
 * _getline - mimics the functionality of standard getline function.
 * @lineptr: Pointer to a pointer to a buffer.
 * @n: size of the buffer.
 * @stream: pointer to a stream.
 *
 *Return: number of charecters read.
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t j = 0;/*keeps track of the current character in the buffer*/
	ssize_t bytes_read;

	/*checkin if there is no memory that has been allocated*/
	if ((*lineptr) == NULL)
	{
		*n = 1024;/*creating a buffer*/
		*lineptr = malloc(*n);/*allocating memory for the buffer*/
		if (!(lineptr))/*checking if memory allocation was successfull*/
		{
			return (-1);
		}
	}
	bytes_read = read(fileno(stream), *lineptr, *n);
	if (bytes_read == -1)
	{
		return (-1);
	}
	/*processing the characters read*/
	while (bytes_read != 0 && (*lineptr)[j - 1] != '\n')
	{
		if (j >= *n) /*checking if the size of the buffer is large enoughgh*/
		{
			*n *= 2;/*doubling the size of the buffer*/
			*lineptr = realloc(*lineptr, *n);
			if (!(*lineptr))
			{
				return (-1);
			}
		}
		j++;
	}
	return (j);
}
