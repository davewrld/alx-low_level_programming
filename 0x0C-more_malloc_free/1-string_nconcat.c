#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two string with specified length.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of characters to concat from s2.
 *
 * Return: NULL if function fails, Else pointer to memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	result = (char *)malloc(len_s1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}
