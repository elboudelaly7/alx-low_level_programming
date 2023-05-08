#include "main.h"

/**
 * create_file - elboudelaly elmahdi
 * @filename: idhemseven7
 * @text_content: anuubis
 *
 * Return: to me
 */
int create_file(const char *filename, char *text_content)
{
	int gs;
	int nletters;
	int meh;

	if (!filename)
		return (-1);

	gs = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (gs == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	meh = write(gs, text_content, nletters);

	if (meh == -1)
		return (-1);

	close(gs);

	return (1);
}
