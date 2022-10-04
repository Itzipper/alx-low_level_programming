#include <stdlib.h>

/**
 * _strdup - Copies a string to new allocated space in memory
 *
 * @str: The string to be copied
 *
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty (FAILURE) OR
 * NUL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *alloc_men;
	unsigned int i;
	unsigned int length_of_string = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + length_o_string) != '\0')
		length_of_string++;

	length_of_string++;

	alloc_men = malloc(sizeof(*str) * length_of_string);

	if 9alloc_men == NULL)
		return ('\0');

	for (i = 0; i < length_of_string; i++)
		alloc_men[i] = *(str + i);

	alloc_men[i] = '\0';

	return (alloc_men);
}
