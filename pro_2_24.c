#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char str1[20], str2[] = "Programming";
	char* ptr = str1;
	int i = 0;
	while (i < sizeof(str2) - 1)
	{
		*(ptr + i) = str2[i];
		*(ptr + i + 1) = str2[i + 1];
		if (str2[i] == '\0' || str2[i + 1] == '\0')
			break;
		*(ptr + i + 2) = '#';
		i += 2;
		ptr++;
	}
	printf("%s", str1);
	return 0;
}

//void main()
//{
//	char s[5][10];
//	char** p = s;
//	printf("%p,%p,%p,%p", p+1,s+1,s,p);
//}


//int main() {
//	int x[3][3], i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &x[i][j]);
//			if (x[i][j] %2 == 1)
//				x[i][j]++;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", x[i][j]);
//		printf("\n");
//	}
// return 0;
//}
