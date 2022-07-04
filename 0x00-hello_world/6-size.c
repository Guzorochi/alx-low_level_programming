#include <stdio.h>
/**
 * Description: print the different byte sizes of 
 * int, float, double and char
 *
 * Return: 0 always (successful)
 */
int main(void)
{
	printf("int: %ld \n", sizeof(int));
	printf("float: %ld \n", sizeof(float));
	printf("double: %ld \n", sizeof(double));
	printf("char: %ld \n", sizeof(char));
	return 0;
}
