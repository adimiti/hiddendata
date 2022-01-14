#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>



int main()
{

	struct stat buff;

	/* A notorious example where even C++ needs the struct keyword is the POSIX stat system call that uses a struct
	 * of the same name in its arguments: 
	 */
	int x = stat("stat.c", &buff);
	return 0;
}
