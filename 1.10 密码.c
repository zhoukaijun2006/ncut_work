////问题描述
////
////Bob 和 Alice 开始使用一种全新的编码系统。它是一种基于一组私有钥匙的。他们选择了n个不同的数a1 ， . ..，an，它们都大于0小于等于n。机密过程如下：待加密的信息放置在这组加密钥匙下，信息中的字符和密钥中的数字一一对应起来。信息中位于i位置的字母将被写到加密信息的第ai个位置， ai 是位于i位置的密钥。加密信息如此反复加密，一共加密 k 次。
////
////信息长度小于等于n。如果信息比 n 短，后面的位置用空格填补直到信息长度为n。
////
////请你帮助 Alice 和 Bob 写一个程序，读入密钥，然后读入加密次数 k 和要加密的信息，按加密规则将信息加密。
////
////输入形式
////
////输入包括几块。每块第一行有一个数字n， 0 < n <= 200. 接下来的行包含n个不同的数字。数字都是大于0小于等于n的。下面每行包含一个k和一个信息字符串，它们之间用空格格开。每行以换行符结束，换行符不是要加密的信息。每个块的最后一行只有一个0。最后一个块后有一行，该行只有一个0。
////
////	输出形式
////
////	输出有多个块，每个块对应一个输入块。每个块包含输入中的信息经过加密后的字符串，顺序与输入顺序相同。所有加密后的字符串的长度都是 n。每一个块后有一个空行。
////
////	样例输入
////
////	10
////
////	4 5 3 7 2 8 1 6 10 9
////
////	1 Hello Bob
////
////	1995 CERC
////
////	0
////
////	0
////
////	样例输出
////
////	BolHeol  b
////	C RCE

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int n, i, j;
//	char arr[100];
//	char arrr[100];
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n == 0)
//		{
//			break;
//		}
//		int* a = (int*)malloc(n * sizeof(int));
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		while (1)
//		{
//			int k;
//			scanf("%d ", &k);
//			if (k == 0)
//			{
//				break;
//			}
//			gets(arr);
//			if (strlen(arr) < n)
//			{
//				for (i = strlen(arr); i < n; i++)
//				{
//					arr[i] = ' ';
//				}
//			}
//			arr[n] = '\0';
//			for (i = 1; i <= k; i++)
//			{
//				for (j = 0; j < n; j++)
//				{
//					arrr[a[j] - 1] = arr[j];
//				}
//				arrr[n] = '\0';
//				strcpy(arr, arrr);
//			}
//			printf("%s\n", arr);
//		}
//	}
//	return 0;
//}

