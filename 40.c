//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, capital_letter = 0, lowercase_letter = 0, number = 0, space = 0,character=0;
//	scanf_s("%d", &n);
//	char arr[81];
//	for (int i = 0; i <= n; i++)//������n��ʱ������󰴻س�����Ϊ������һ��'\n'�����µ�һ��ֱ�ӽ�ch='\n'����һ��ѭ��δ���У�
//	{
//		char ch = '\0';
//		int m = 0;
//		while ((ch = getchar()) && ch != '\n')
//		{
//			arr[m++] = ch;
//		}
//		arr[m] = '\0';
//		for (int j = 0; arr[j] != '\0'; j++)
//		{
//			if (arr[j] >= 'A' && arr[j] <= 'Z')
//			{
//				capital_letter++;
//			}
//			else if (arr[j] >= 'a' && arr[j] <= 'z')
//			{
//				lowercase_letter++;
//			}
//			else if (arr[j] >= '0' && arr[j] <= '9')
//			{
//				number++;
//			}
//			else if (arr[j] == ' ')
//			{
//				space ++;
//			}
//			else
//			{
//				character++;
//			}
//		}
//	}
//	printf("%d %d %d %d %d", captial_letter, lowercase_letter, number, space, character);
//	return 0;
//}