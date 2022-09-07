
char *ft_strjoin(int size, char **strs, char *sep)
{
	char *ret;
	char *ret_head;
	int siz;
	int sep_zid;
	int i;

	i = 0;
	sep_siz = 0;
	while (sep[i])
	{
		sep_siz++;
	}
	i = 0;
	siz = 0;
	while (i < size)
	{
		while (strs[i]++)
			siz++;
		siz += se
	}

	ret = (char *) malloc(siz);
	ret_head = ret;
	i = 0;
	while (i < size)
	{
		while (str[i])
		{
			*ret++ = strs[i]++;
		}
		*ret++ = sep;
	}
		
	if (size == 0)
		return (char *) ma

}
