#include <iostream>
#include <string.h>

int main()
{
	// ============================ #1 delete first element of string
	char str[100] = {};

	printf("input string ");
	gets_s(str);
	int leng = strlen(str);

	for (int i = 0; i < leng; i++) {
		str[i] = str[i + 1];
	}
	printf("removed first element: ");
	puts(str);

	// ============================ #2 reverse string
	char str2[100] = {}, strbuff[100] = {};
	printf("input second string ");
	gets_s(str2);
	int leng2 = strlen(str2), step = 0;

	for (int i = leng2 - 1; i > -1; i--) {
		strbuff[step] = str2[i];
		step++;
	}
	printf("reversed string: ");
	puts(strbuff);
}