#include <stdio.h>
#include <unistd.h>


int main()
{
	char hostname[128];

	gethostname(hostname, 128);

	printf("Hostname: %s\n", hostname);
}
