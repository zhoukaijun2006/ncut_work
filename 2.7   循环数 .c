//��������
//
//n λ��һ��������ѭ������cyclic���������ǣ�����һ�� 1 �� n ֮�������ȥ����ʱ����õ�һ����ԭ��������β���ѭ���ƶ�������������ĳ���Ͽ����õ������֣������ֳ��ȴ���nλʱ��ȡ��nλ����Ҳ����˵�������ԭ�������ֺ��µ����ֶ���β��ӣ����ǵõ��Ļ�����ͬ�ġ�ֻ������������ʼ���ֲ�һ����ͬ�����磬���� 142857 ��ѭ��������Ϊ��
//
//142857 * 1 = 142857
//
//142857 * 2 = 285714
//
//142857 * 3 = 428571
//
//142857 * 4 = 571428
//
//142857 * 5 = 714285
//
//142857 * 6 = 857142
//
//дһ������ȷ�����������Ƿ���ѭ������
//
//������ʽ
//
//�����һ��Ϊ������������n������n�г���Ϊ 2 λ�� 60 λ��������(ע�⣬�ȵ���0Ҳ�Ǻ�������벻Ӧ�ñ�����, ���� "01"�� 2 λ����"1" �� 1 λ����)
//
//�����ʽ
//
//����ÿһ����������������һ�б������Ƿ���ѭ������

//��������
//
//5
//
//142857
//
//142856
//
//142858
//
//01
//
//0588235294117647
//
//�������
//
//142857 is cyclic
//
//142856 is not cyclic
//
//142858 is not cyclic
//
//01 is not cyclic
//
//0588235294117647 is cyclic

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char str[65];
//	char new[65];
//	int n, m;
//	scanf("%d", &n);
//	for (m = 1; m <= n; m++)
//	{
//		while (scanf("%s", str) != EOF)
//		{ 
//			int flag = 1;
//			int len = (int)strlen(str);
//			int i, j;
//			for (i = 2; i <= len; i++) 
//			{   
//				new[len - 1] = 0;
//				int index;
//				for (j = len - 1; j > 0; j--)
//				{  
//					index = new[j];
//					new[j] = ((str[j] - '0') * i + new[j]) % 10 + '0';
//					new[j - 1] = ((str[j] - '0') * i + index) / 10;
//				}
//				new[0] = ((str[0] - '0') * i + new[0]) % 10 + '0';
//				if (new[0] - '0' >= 10) 
//				{   
//					flag = 0;
//					break;
//				}
//				int l;
//				for (l = 0; l < len; l++) 
//				{   
//					if (new[0] == str[l])
//					{
//						j = (l + 1) % len;
//						int k = 1;
//						while (new[k] == str[j]) 
//						{
//							k++;
//							j++;
//							if (j == len)
//								j = 0;
//							if (k == len)
//							{
//								flag++;
//								break;
//							}
//						}
//					}
//					if (flag == i)
//						break;
//				}
//				if (flag != i)
//					break;
//			}
//			if (flag != len) {
//				printf("%s is not cyclic\n", str);
//			}	
//			else {
//				printf("%s is cyclic\n", str);
//			}
//		}
//	}
//	return 0;
//}
//
////#include<iostream>
////#include<cstring>
////using namespace std;
////int main()
////{
////	int n;
////	cin >> n;
////	char a[99];
////	for (int i = 1; i <= n; i++)
////	{
////		int len = (int)strlen(a);
////		int x = 0, j = 0, f = 0;
////		int k = len + i;
////		for (int j = len - i;; i--)
////		{
////			x += (a[i] - '0') * k;
////			if (x % 10 != 9)
////			{
////				f = 1;
////				break;
////			}
////			x /= 10;
////		}
////		len = (len + 1) / 2;
////		for (int j = 0; j < len; j++)
////		{
////			if (a[i] + a[i + 1] - 2 * '0' != 9)
////			{
////				f = 1;
////				break;
////			}
////		}
////		if (f == 0)
////		{
////			cout << a << "is not cyclic" << endl;
////		}
////		else
////		{
////			cout << a << "is cyclic" << endl;
////		}
////	}
////	return 0;
////}