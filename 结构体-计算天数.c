//��������
//
//����һ���ṹ������������ꡢ�¡��գ�������ĳ��ĳ��ĳ�գ���������ڱ������ǵڼ��죬ע���������⡣
//
//������ʽ
//
//����һ�У�������������������ʾĳ��ĳ��ĳ�ա�
// 
//�����ʽ
// 
//���һ�У������һ������һ��ĵڼ��졣
//��������
//2013 3 5
//�������
//64


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	struct date date1 = { 0,0,0 };
//	scanf("%d %d %d", &date1.year, &date1.month, &date1.day);
//	int month1[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
//	int i, sum1 = 0;
//	if ((date1.year % 4 == 0 && date1.year % 100 != 0) || date1.year % 400 == 0)
//	{
//		month1[2] = 29;
//	}
//	for (i = 0; i < date1.month; i++)
//	{
//		sum1 += month1[i];
//	}
//	int num = sum1 + date1.day; 
//	//if (((date1.year % 4 == 0 && date1.year % 100 != 0) || date1.year % 400 == 0) && date1.month > 2)
//	//{
//	//	num++;
//	//}
//	printf("%d", num);
//	return 0;
//}