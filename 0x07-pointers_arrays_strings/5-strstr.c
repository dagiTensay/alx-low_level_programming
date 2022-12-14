#include "main.h"
/**
 * _strstr - find and returns a pointer to the first character
 * of a substring
 * @haystack: string to be scanned
 * @needle: string to be matched for the substring
 * Return: a pointer to the first character of the substring
 * or null if not matched substring
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;

			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					return (0);
				}
				j++;
			}
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
