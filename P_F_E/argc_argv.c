#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("argc = %d\n",argc);
	int i = 0;
	while (i < argc)
	{
		printf("argv[%d] = %s\n",i,argv[i]);
		i++;
	}
	return (0);
}
