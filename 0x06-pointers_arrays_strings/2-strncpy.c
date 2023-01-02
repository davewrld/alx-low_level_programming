/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array
	 * if no null byte
	 * among first n bytes of source
	 * string plsced will not be 
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if source length is less than n
	 * write addtitional nullbytes to dest to
	 * ensure thsst s totsl of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++';
	}

	return (dest);
}
