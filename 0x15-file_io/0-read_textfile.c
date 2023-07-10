#include "main.h"

/**
 * read_textfile - elboudelaly elmahdi
 * @filename: idhemseven7
 * @letters: anuubis
 *
 * Return: to me
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int me;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	me = open(filename, O_RDONLY);

	if (me == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(me, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(me);

	free(buf);

	return (nwr);
}
