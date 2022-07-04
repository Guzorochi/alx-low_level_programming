#include <stdio.h>
/**
 * Description: print the different byte sizes of 
 * int, float, double and char
 *
 * Return: 0 always (successful)
 */
int main(void)
{
	int a;
	long int b;
	long long int c; 
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return 0;
}
