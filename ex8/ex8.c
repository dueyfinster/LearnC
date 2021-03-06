#include <stdio.h>

int main(int argc, char *argv[]){
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Neil";
	char full_name[] = {
		'N', 'e', 'i', 'l', '\0'
	};

	printf("The size of an int %lu\n", sizeof(int));
	printf("The size of areas (int[]): %lu\n", sizeof(areas));
	printf("The number of ints in areas: %lu\n", sizeof(areas) / sizeof(int));

	printf("The first area is %d, the second is %d.\n", areas[0], areas[1]);

	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars in name: %lu\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars in full_name: %lu\n", sizeof(full_name) / sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n",
            name, full_name);

	return 0;
}