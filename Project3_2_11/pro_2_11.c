#include<stdio.h>

/*int main()
{
	char s[3][8] = { "1","21","321" }, *p = *s;
	printf("%c", *(*(s+ 1)+1));
	return 0;
}       */

int main()
{
	int a[][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int(*p)[3] = a;
	printf("%d", *(*(p+1 )+ 1));
	return 0;
}