//��������
//дһ����������һ���ַ��������ַ�������ĵ���������������������������ַ�����
//������ʽ
//����һ�У�����һ��������80���ַ�����
//�����ʽ
//���һ�У�����ַ���������ʣ������������ͬ�ĵ��ʣ������һ�����ֵ��ʡ�
//��������
//There is a nice mouse.
//�������
//There

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void charge(char a[], char b[])
//{
//	int i;
//	for (i = 0; b[i] != '\0'; i++)
//	{
//		b[i] = a[i];
//	}
//}
//void maxword(char* arr)
//{
//	int i = 0, j;
//	char a[80];
//	char b[80];
//	int c1 = 0;
//	while (arr[i] != '\0')
//	{
//		int count = 0;
//		for (j = i; (arr[j]>='a'&&arr[j]<='z')||(arr[j]>='A'&&arr[j]<='Z'); j++)
//		{
//			b[j] = arr[j];
//			count++;
//		}
//		if (count > c1)
//			{
//				for (j = 0; j < 80; j++)
//				{
//					a[j] = '\0';
//				}
//				charge(a, b);
//			}
//		c1 = c1 > count ? c1 : count;
//		for (j = 0; j < 80; j++)
//		{
//			b[j] = '\0';
//		}
//	}
//	printf("%s", a);
//	return;
//}
//int main()
//{
//	char arr[80] = { '\0' };
//	gets(arr);
//	maxword(arr);
//	return 0;
//}