#include <stdio.h>
#include <signal.h>

void intHandler(int dummy)
{
	fprintf(stderr, "bekle...");
}

int main(int argc, char** argv)
{
	signal(SIGINT, intHandler);

	if(argc != 1)
	{
		fprintf(stderr,"Argument count must be 1\n");
		return 123;
	}

	int n;

	fscanf(stdin, "%d", &n);

	return 0;
}
