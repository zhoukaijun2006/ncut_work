//�������������ýṹ���鱣�������Ϣ������N��N < 50����ͼ�飬ÿ��ͼ���������������С��30���ַ���)�������磨����С��15���ַ�����
//     �����������������ۣ�����������Ϣ�������� ����Ϣ�����������ٵ����˳����������������Ϣ��Ȼ�����������Щ����ܷ��á�
// ��������ʽ����һ��Ϊһ������N����ʾͼ����������������N����ÿ�а���һ�������Ϣ���ݣ�����
//    ��֮���ɿո�ָ���
// �������ʽ�����ǰN�У�Ϊ��������������������Ϣ����N + 1��Ϊ������Щ����ܷ��ã�������С�������λ����
//    ���������롿3
//    C - Programming       qinghu                50    25.50
//    DataStruct              jixiegongye         30    31.55
//    OpratingSystem      gaodengjiaoyu     60    18.30
//
//    �����������OpratingSystem      gaodengjiaoyu    60     18.30
//    C - Programming        qinghu               50     25.50
//    DataStruct               jixiegongye        30      31.55
//    3319.50
//    ������˵����(1)��������������Ϣ��Ӣ���Լ�����(�����Ǻ���)��ʾ��
//    (2)���ǰN�еĸ�ʽ�趨Ϊ��"%-30s%-20s%-10d%-.2f\n"��



//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//struct book
//{
//	char name[30];
//	char cbs[15];
//	int num;
//	float price;
//};
//int main()
//{
//	struct book * c;
//	int n, i, j;
//	scanf("%d", &n);
//	while (n >= 50 && n <= 0)
//	{
//		scanf("%d", &n);
//	}
//	c = (struct book*)malloc(n * sizeof(struct book));
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %d %f", c[i].name, c[i].cbs, &c[i].num, &c[i].price);
//	}
//	struct book temp;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (c[j].price > c[j + 1].price)
//			{
//				temp = c[j];
//				c[j] = c[j + 1];
//				c[j + 1] = temp;
//			}
//		}
//	}
//	float sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += c[i].num * c[i].price;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%-30s%-20s%-10d%-.2f\n", c[i].name, c[i].cbs, c[i].num, c[i].price); 
//	}
//	printf("%.2f", sum);
//	return 0;
//}