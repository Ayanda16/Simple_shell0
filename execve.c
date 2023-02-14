#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;
    	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	pid = fork();

	if (pid == -1)
	return (-1);

	if (pid == 0) /** Child process */
	{
		printf("Before execve\n");
    		if (execve(argv[0], argv, NULL) == -1)
   			perror("Error:");
    	}
	else
	{
		wait(NULL);
    		printf("After execve\n");
	}
    	return (0);
}
