//#include<stdio.h>
//#include<string.h>
//void main() {
//	char*tmp,* str[5] = { "C","Java","A","Python","Buthorware" };
//	int i,k,j;
//	for ( i = 0; i < 4; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 5; j++)
//			if (strcmp(str[k], str[j]) > 0)
//				k = j;
//		if (k != i)
//			tmp = str[i], str[i] = str[k], str[k] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//		puts(str[i]);
//}
//int main()
//{
//	/*char* str[5] = { "Python","Math","Java","C","Javascript" };
//	printf("%s\n%p", str[0], str[0]);
//	printf("\n%s\n%c", *(str + 0), *str[0]);
//	char Str[5][11] = { "Python","Math","Java","C","Javascript" };
//	printf("\n%s\n%p", str[0],str[0]);
//	printf("\n%s\n%c", *(str + 0), *str[0]);
//	return 0;*/
//}

//数字各位之和排序问题
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int Numsum(int num) {
//	if (num / 10 != 0)
//		return num % 10 + Numsum(num / 10);
//	else
//		return num % 10;
//}
//
//int main() {
//	int* num1, * num2, n, i,j,tmp1,tmp2;
//	scanf("%d", &n);
//	num1 = (int*)malloc(sizeof(int) * n);
//	num2 = (int*)malloc(sizeof(int) * n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", num1 + i);
//		*(num2 + i) = Numsum(*(num1 + i));
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//			if (*(num2 + j) < *(num2 + j + 1)) {
//				tmp2 = *(num2 + j), * (num2 + j) = *(num2 + j + 1), * (num2 + j + 1) = tmp2;
//				tmp1 = *(num1 + j), * (num1 + j) = *(num1 + j + 1), * (num1 + j + 1) = tmp1;
//			}
//			else if (*(num2 + j) == *(num2 + j + 1)) {
//				if (*(num1 + j) > *(num1 + j + 1))
//					tmp1 = *(num1 + j), * (num1 + j) = *(num1 + j + 1), * (num1 + j + 1) = tmp1;
//			}
//	}
//	for (i = 0; i < n; i++)
//		printf("%d %d\n", *(num1 + i), *(num2 + i));
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int a, b, c, d;
//	a = b = 5;
//	c = (a++) + (a--) - (a++);
//	d = (b++) - (++b) + (--a);
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//Description:输入n个单词，将其按字母顺序输出，n从键盘输入;
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxLenght 31//单词最大长度
void main(){
	char tmp[MaxLenght], ** words;
	int i, j, k, n = 5;
	printf("请输入n：\n");
	scanf("%d", &n);
	if ((words = (char**)malloc(sizeof(char*) * n)) == NULL)
	{
		printf("内存分配失败\n");
		return ;
	}
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个单词：", i + 1);
		scanf("%s", tmp);
		if ((words[i] = (char*)malloc(sizeof(char) * (strlen(tmp) + 1))) == NULL)
		{
			printf("第%d个单词内存分配失败\n", i + 1);
			return;
		}
		strcpy(words[i], tmp);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
			if (strcmp(words[j], words[j + 1]) > 0)
			{
				char* tmp;
				tmp = words[j], words[j] = words[j + 1], words[j + 1] = tmp;
			}
	 }
	printf("排序结果为：\n");
	for (i = 0; i < n; i++)
		puts(words[i]);
	free(words);
 }