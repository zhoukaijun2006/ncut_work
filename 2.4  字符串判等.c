//��������
//
//�ж������ɴ�Сд��ĸ�Ϳո���ɵ��ַ����ں��Դ�Сд��ѹ�����ո���Ƿ����
//
//������ʽ
//
//��1���ǲ������ݵ�����n��ÿ���������ռ2�У���1���ǵ�һ���ַ���s1����2���ǵڶ����ַ���s2��
//
//ÿ���������֮����һ�����У�ÿ�����ݲ�����100���ַ���ע���ַ����ĳ��ȿ���Ϊ0��
//
//�����ʽ
//
//n�У���������YES���������NO
//
//��������
//
//3
//
//
//
//
//
//
//
//a A bb BB ccc CCC
//
//Aa BBbb CCCccc
//
//
//
//a              dfadf              fasdf
//
//adasddfsfsaf
//
//�������
//
//YES
//
//YES
//
//NO
//


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i, j, n, len1, len2, k;
//	char a[100] = { '\0' }, b[100] = { '\0' }, c[100] = { '\0' }, d[100] = { '\0' }, space[100] = { '\0' };
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		gets(a);
//		gets(b);
//		len1 = (int)strlen(a);
//		k = 0;
//		for (j = 0; j < len1; j++)
//		{
//			if (a[j] >= 'a' && a[j] <= 'z')
//			{
//				c[k++] = a[j] - 'a' + 'A';
//			}
//			if (a[j] >= 'A' && a[j] <= 'Z')
//			{
//				c[k++] = a[j];
//			}
//		}
//		c[k] = '\0';
//		len2 = (int)strlen(b);
//		k = 0;
//		for (j = 0; j < len2; j++)
//		{
//			if (b[j] >= 'a' && b[j] <= 'z')
//			{
//				d[k++] = b[j] - 'a' + 'A';
//			}
//			if (b[j] >= 'A' && b[j] <= 'Z')
//			{
//				d[k++] = b[j];
//			}
//		}
//		d[k] = '\0';
//		if (strcmp(c, d) == 0)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		if (i < n - 1)
//		{
//			gets(space);
//		}
//	}
//	return 0;
//}