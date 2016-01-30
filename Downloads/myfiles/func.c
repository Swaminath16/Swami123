#include "myheader.h"

char reverse_string(char *str, int length)
{
	int i;
	char temp;

	if(str == NULL || length == 0)
	{
		return (char)1;
	}

	for(i = 0;i < (length / 2);i++)
	{
		temp = str[i];
		str[i] = str[(length - i) - 1];
		str[(length - i) - 1] = temp;
	}

	return (char)0;
}