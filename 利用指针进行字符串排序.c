////��������
////
////��������������n�����ַ���������һ������ָ�뷽�������ǰ���ASCII���С�����˳������Ȼ���������������n�����ź�����ַ�������n������10��ÿ���ַ����ĳ��Ȳ�����80��
////
////������ʽ
////
////����n + 1�У���һ����������n���ڶ��е���n + 1����n���ַ�����
////
////�����ʽ
////
////���n�У���������õ�n���ַ�����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int greater(char* a, char* b)
//{
//	while (*a != '\0' && *b != '\0')
//	{
//		if (*a > *b) return 1;
//		if (*a < *b) return -1;
//		a++; b++;
//	}
//
//	if (*a == '\0') return 0;
//	return 0;
//}
//
//void sort(char **arr, int n)
//{
//	int i, j;
//	char * t;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf("%d %d", i, j);
//			if (greater(*arr[j], *arr[j + 1]) > 0)
//			{
//				
//				t = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int n, i, j = 0;
//	scanf("%d", &n);
//	getchar();
//	char arr[10][80] = { {'\0'} };
//	for (i = 0; i < n; i++)
//	{
//		/*while (scanf("%c", &ch) && ch != '\n')
//		{
//			arr[i][j++] = ch;
//		}*/
//		gets(arr[i]);
//	}
//	sort(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%s", arr[i]);
//	}
//	return 0;
//}