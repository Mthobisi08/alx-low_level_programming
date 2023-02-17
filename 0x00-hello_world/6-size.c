#include <stdio.h>
/**
 * main - checking for sizes of variable on the computer
 *
 * Return: Always 0.
 */

int main(void)
{
	char s;
	int i;
	long int h;
	long long int l;
	float e;
print("size of a char: %zu byte(s)\n", sizeof(char));
print("size of an int: %zu byt(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)\n", sizeof(long int));
printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("size of a float %zu byte(s)\n", sizeof(float));
return 0;
}
