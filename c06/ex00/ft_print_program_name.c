#include <unistd.h>

int main(int argc, char **argv)
{
	(void) argc;
	//char *c;

	//c = argv[0];
	while (**argv)
	{
		write(1, *argv, 1);
		(*argv)++;
	}

	return 0;
}
