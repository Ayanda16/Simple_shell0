#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	size_t n = 10;
	char *buf = NULL; /** malloc(sizeof(char) * buf) */

	printf("enter name ");
	getline(&buf,&n, stdin);

	printf("name is %sbuffer size is %ld\n", buf, n);
	free(buf);
	
		return (0);
}
