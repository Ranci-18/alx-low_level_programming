#include <stdio.h>
#include <string.h>
/**
 *_strstr - locates substring
 *@haystack: main string
 *@needle: substring
 *
 *Return: pointer to string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);
	if (haystack[0] == '\0')
		return (NULL);
	if (strlen(needle) > strlen(haystack))
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}
	return (NULL);
}
