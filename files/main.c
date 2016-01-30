#include<stdio.h>

//header file contains reverse_string declaration
#include "myheader.h"

int main()
{

	char res;

	//Test Case 2
	char p[] = "This is a string";
	printf("Original string : %s",p);
	res = reverse_string(p,16);

	if(0 == res)
	{
		printf("\nReversed string : %s",p);
	}
	else
	{
		printf("\nTest Case 2 FAIL");
	}

	//Test Case 3
	char a[] = "some NUMmbers12345";
	printf("\nOriginal string : %s",a);
	res = reverse_string(a,18);
	if(0 == res)
	{
		printf("\nReversed string : %s",a);
	}
	else
	{
		printf("\nTest Case 3 FAIL");
	}

	//Test Case 4

	char b[] = "Does it reverse \\n\\0\\t correctly?";
	printf("\nOriginal string : %s",b);
	res = reverse_string(b,33);
	if(0 == res)
	{
		printf("\nReversed string : %s",b);
	}
	else
	{
		printf("\nTest Case 4 FAIL");
	}

	printf("\n");

	return 0;

}
