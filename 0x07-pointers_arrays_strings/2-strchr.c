#include <stdio.h>
/**
 *_strchr - searches s for 'c'
 *@c: target search character
 *@s: string to search
 *
 *Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	if (s[0] == '\0')
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		if (s[i] == '\0' && s[i] != c)
			break;
	}
	return (NULL);
}
