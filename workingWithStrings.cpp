#include <iostream>
#include <string.h>

int main()
{
	// ============================ #1 Get second element of string

	char str[100] = {};
	printf("input first string ");
	gets_s(str);
	printf("second element of string: %c\n", str[1]);

	//============================ #2 Get last element of string and swap

	//create and write to string
	char str2[100] = {};
	printf("input second string ");
	gets_s(str2);
	//get las element of string
	int leng2 = strlen(str2);
	printf("last element of string: %c", str2[leng2 - 1]);
	//swap
	int buf = str2[0];
	str2[0] = str2[leng2 - 1];
	str2[leng2 - 1] = buf;
	printf("\nswapped string ");
	puts(str2);

	//============================ #3 Delete specific element from string

	//create and write to string
	char str3[100] = {};
	printf("input string ");
	gets_s(str3);
	int leng3 = strlen(str3), target = 0;
	//delete user specified element from string	
	printf("\ninput position to delete");
	scanf_s("%i", &target);

	for (int i = target - 1; i < leng3; i++) {
		str3[i] = str3[i + 1];
	}
	puts(str3);
}