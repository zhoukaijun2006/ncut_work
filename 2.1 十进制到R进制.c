//��������
//
//��һ��ʮ����������ת����R����
//
//������ʽ
//
//����ֻ��һ�У�������������a��R��a��ʾʮ����������R��ʾ��Ҫת���Ľ��ơ�1 < R <= 16��
//
//	�����ʽ
//
//	�������һ�У�Ϊת�����R�������������ʱ�ַ���ȫ���ô�д��ʾ������0 ��1��...��9��A��B��C��D��E��F����
//
//	��������
//
//	12 16
//
//	�������
//
//	C



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void convert(int a, int b)
//{
//	if (a < b)
//	{
//		if (a <= 9)
//		{
//			printf("%d", a);
//		}
//		else
//		{
//			printf("%c", a + 'A' - 10);
//		}
//	}
//	else
//	{
//		convert(a / b, b);
//		if (a % b <= 9)
//		{
//			printf("%d", a % b);
//		}
//		else
//		{
//			printf("%c", a % b + 'A' - 10);
//		}
//	}
//}
//int main()
//{
//	int a, R;
//	scanf("%d %d", &a, &R);
//	convert(a, R);
//	return 0;
//}

/*int main()
{
	int a, R, i = 0;
	scanf("%d %d", &a, &R);
	int digit = 0;
	char arr[100] = { '\0' };
	while (a != 0)
	{
		if (a % R <= 9)
		{
			arr[i++] = '0' + a % R;
		}
		else
		{
			arr[i++] = 'A' + a % R - 10;
		}
		digit++;
		a /= R;
	}
	for (i = digit - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
*/