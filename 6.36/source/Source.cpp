#include<stdio.h>
#include<stdlib.h>

void StringReverse(const char* const s);

int main(void)
{
	char s[];

	printf("Please enter the strings\n");
	getchar(s);

	printf("the inverted strings order is\n");

	StringReverse(s);

	system("pause");
	return 0;
}

void StringReverse(const char* const s)
{
	if (s[0] == '\0')
	{
		return;
	}
	else
	{
		StringReverse(&s[1]);
		printf("%d", s[0]);
	}
}