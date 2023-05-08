#include "main.h"

/**
 * append_text_to_file - elboudelaly elmahdi
 * @filename: idhemseven7
 * @text_content: anuubis
 *
 * Return: to me
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nu;
	int nletters;
	int reb;

	if (!filename)
		return (-1);

	nu = open(filename, O_WRONLY | O_APPEND);

	if (nu == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		reb = write(nu, text_content, nletters);

		if (reb == -1)
			return (-1);
	}

	close(nu);

	return (1);
}

