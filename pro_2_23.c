#include <stdio.h>
#include<string.h>
//void main()
//{
//	int i,j,n = 29;
//	for(i=2;i<=30;i++)
//		for(j=2;j<=sqrt(1.0*i);j++)
//			if (i % j == 0)
//			{
//				n--;
//				break;
//			}
//	printf("%d\n", n);
//}

//void main()
//{
//	int Num1 = 68, Num2 = 32,tmp;
//	int* Ptr1, * Ptr2;
//	Ptr1 = &Num1, Ptr2 = &Num2;
//	if (*Ptr1 > *Ptr2)
//	{
//		tmp = *Ptr1;
//		*Ptr1 = *Ptr2;
//		*Ptr2 = tmp;
//	}
//	printf("%d,%d", Num1, Num2);
//}

int main()
{
	char str1[20], str2[] = "Programming";
	char* ptr1 = str1, * ptr2 = str2;
	int i = 0, j = 0, k = 0;
	while (i < strlen(str2))
	{
		*(ptr1+i) = str2[i];
		i++;
		j++;
		if (j % 2 == 0)
			*(ptr1 + i) = '#', i++;
	}                      

	printf("%s\n", str1);
	return 0;
}