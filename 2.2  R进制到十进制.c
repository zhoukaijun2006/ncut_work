//��������
//
//��һ��R����������ת����ʮ����
//
//������ʽ
//
//һ�У�����һ��R���Ʊ�ʾ��������a�ͽ�����R��a��ʮ���Ʊ�ʾ�ķ�Χ��(0 - 65536)��1 < R <= 9��
//
//	�����ʽ
//
//	һ�У�a��ʮ���Ʊ�ʾ
//
//	��������
//
//	11 2
//
//	�������
//
//	3

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int digit(int x, int n)
//{
//	return x % (int)pow(10, n) / (int)pow(10, n - 1);
//}
//int main()
//{
//	int a, R;
//	scanf("%d %d", &a, &R);
//	int sum = 0;
//	int i;
//	int num = (int)log10(a) + 1;
//	for (i = 1; i <= num; i++)
//	{
//		sum += digit(a, i) * (int)pow(R, i - 1);
//	}
//	printf("%d", sum);
//	return 0;
//}