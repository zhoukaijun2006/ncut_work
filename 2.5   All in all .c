////��������
////
////You have devised a new encryption technique which encodes a message by inserting between its characters randomly generated strings in a clever way.Because of pending patent issues we will not discuss in detail how the strings are generated and inserted into the original message.To validate your method�� however�� it is necessary to write a program that checks if the message is really encoded in the final string.
////
////Given two strings s and t�� you have to decide whether s is a subsequence of t��i.e. if you can remove characters from t such that the concatenation of the remaining characters is s.
////
////������ʽ
////
////The input contains several test cases.Each is specified by two strings s, t of alphanumeric ASCII characters separated by white space.The length of s and t will no more than 100000.
////
////�����ʽ
////
////For each test case output "Yes"�� if s is a subsequence of t��otherwise output "No".
////
////��������
////
////4
////
////sequence subsequence
////
////person compression
////
////VERDI vivaVittorioEmanueleReDiItalia
////
////caseDoesMatter CaseDoesMatter
////
////�������
////
////Yes
////
////No
////
////Yes
////
////No
//
////�������һ���µļ��ܼ������ü���ͨ�����ַ�֮�����������ɵ��ַ���������Ϣ���б��롣����δ����ר�����⣬
//// ���ǲ�����ϸ������������ַ�����������뵽ԭʼ��Ϣ�С����ǣ�Ҫ��֤���ķ�����
//// �б�Ҫ��дһ�������������Ϣ�Ƿ���ı����������ַ����С�
////
////���������ַ��� s �� t��������ȷ�� s �Ƿ��� t �������У���������Դ� T ��ɾ���ַ����Ա�ʣ���ַ��Ĵ���Ϊ S��
////
////������ʽ
////
////��������������������ÿ���ַ��������ַ��� s��t ָ������Щ�ַ����ɿո�ָ�����ĸ���� ASCII �ַ���
//// s �� t �ĳ��Ȳ��ᳬ�� 100000��
////
////�����ʽ
////
////����ÿ������������������ǡ������ s �� t �������У����������
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[100] = { '\0' }, t[100] = { '\0' };
//	int n, i, j, q = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%s %s", s, t);
//		int len1 = (int)strlen(s);
//		int len2 = (int)strlen(t);
//		q = 0;
//		for (j = 0; j < len2; j++)
//		{
//			if (s[q] == t[j])
//			{
//				q++;
//			}
//		}
//		if (q == len1)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}
