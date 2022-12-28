#include <stdio.h>

/*Sizeof data types*/
int main(void) 
{
	int intType;
	long int LongintType;
	long long int longLongintType;
	float floatType;
	char charType;

	/*sizeof evaluates the size of a variable*/
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s) \n", sizeof(LongintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
