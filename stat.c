#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>



int main()
{

	struct stat buff;
	int x = stat("stat.c", &buff);
	return 0;
}
