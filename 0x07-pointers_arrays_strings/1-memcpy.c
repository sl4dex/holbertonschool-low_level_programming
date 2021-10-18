/**
 * *_memcpy - copies memory area.
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of memory bytes
 *
 * Return: start of copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	/* while n not reached */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
