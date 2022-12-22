#include <stdio.h>
/**
 **leet - encodes letters with numbers
 *
 *@s: is the string
 *
 *
 *Return: string s
 */
char *leet(char *s)
{
	int i;
	int j;
	char small_letters[5] = {'a', 'e', 'o', 't', 'l'};
	char big_letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char nums[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
			if (s[i] == small_letters[j] || s[i] == big_letters[j])
				s[i] = nums[j];
	}
	return (s);
}
