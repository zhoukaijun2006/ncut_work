/*�������������ַ����ȽϹ��̶Ը����������ַ������бȽϣ����������Ϊ0������������Ϊ��Ӧ�����ַ��Ĳ��Ҫ��ʵ�ֶԸ����ַ����ıȽϡ�Ҫ��������ú���ʵ�������ַ����ıȽϡ�int stringcmp(char* str1, char* str2)
��������ʽ����һ��Ϊһ������N����ʾ�������ݵ���������������N����ÿ�а��������ַ������ַ���֮���ɿո�ָ���
�������ʽ�������N�У�ÿ��Ϊ��Ӧ����һ�е������ַ����ıȽϽ����
���������롿3
Happy Help
Help Help
Help Happy
����������� - 4
0
4
������˵��������3���ַ�������1��Ϊ"Happy"��"Help", ��2��Ϊ"Help"��"Help"����3��Ϊ"Help"��"Happy"; ���ȽϽ���ֱ�Ϊ - 4��0��4��
�����ֱ�׼�����⹲2�����Ե㣬ÿ�����Ե�1.0�֣���2.0�֡�*/


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int stringcmp (char* str1, char* str2)
//{
//	int i = 0;
//	while (1)
//	{
//		//if (str1[i] != str2[i])
//		//{
//		//	return str1[i] - str2[i];
//		//}
//		//else
//		//{
//		//	if (str1[i] == '\0' && str2[i] == '\0')
//		//	{
//		//		return 0;
//		//	}
//		//	else
//		//	{
//		//		i++;
//		//	}
//		if (str1[i] == str2[i])
//		{
//			if (str1[i] == '\0' && str2[i] == '\0')
//			{
//				return 0;
//			}
//			else
//			{
//				i++;
//			}
//		}
//		else
//		{
//			return str1[i] - str2[i];
//		}
//	}
//}
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
//	char a[100] = { '\0' }, b[100] = { '\0' };
//	int* c = (int*)malloc(n * sizeof(int));
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s", a, b);
//		c[i] = stringcmp(a, b);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", c[i]);
//	}
//	return 0;
//}