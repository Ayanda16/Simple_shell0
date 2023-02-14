#include<stdio.h>
#include<stdlib.h>

int main(int ac, char *av[])
{
	printf("ac: %d\n", ac);

	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
