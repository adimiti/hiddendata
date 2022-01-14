struct data_s 
{
	int a;
	int b;
	int c;
};

struct data_s data;
int processCode(struct data_s *pData)
{
	return pData->a + pData->b + pData->c;
}

int setCode(struct data_s **ppData, int a, int b, int c)
{
	*ppData = &data; /* or malloc */
	(*ppData)->a = a;
	(*ppData)->b = b;
	(*ppData)->c = c;
	return 0;
}

int delCode(struct data_s *pData)
{
	/* free pData */
	return 0;
}
