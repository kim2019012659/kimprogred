#include <stdio.h>
#include <string.h>

#define MAXSTRLENGTH 80

int main(void)
{
	char str[MAXSTRLENGTH];
	char res_str[MAXSTRLENGTH];
	char star[MAXSTRLENGTH] = "****************";
	int len;

	printf("input word:");
	gets_s(str);
	len = strlen(str);

	if (len <= 5)
	{
		strcpy_s(res_str, str);

	}
	else
	{
		strncpy_s(res_str, str, 5);
		res_str[5] = '\0';
		strncat_s(res_str, star, len - 5);
	}
	printf("typed word : %s, omitted word : %s\n", str, res_str);
	return 0;
}