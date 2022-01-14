#include "code.h"
#include <stdio.h>



int main()
{
	struct data_s *pData;

	int j = setCode(&pData,1, 20, 300);
	int i = processCode(pData) ;
	int k = delCode(pData) ;

	printf("j = %d\n", j);
	printf("i = %d\n", i);
	printf("k = %d\n", k);
	return 0;
}
