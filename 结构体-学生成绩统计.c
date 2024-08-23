//【问题描述】某班有N(N <= 30)个学生，共开设5门课程，分别用三个函数实现如下功能：
//
//（1）求第一门课程的平均分；
//（2）找出有2门及2门以上不及格的学生，并输出其学号；
//（3）找出平均成绩在90分以上的学生，输出他们的学号。
//【输入形式】第一行为一个整数N，表示本班共N个人，接下来的N行中每行包含一个学生的信息，包括学号(长度小于11的字符串)、课程1成绩、课程2成绩、课程3成绩、课程4成绩、课程5成绩。成绩均为整数。
//【输出形式】输出共三行：
//
//第一行为本班第一门课程的平均成绩。(保留小数点后两位)
//
//第二行为有2门及2门以上不及格的学生的学号，各学号之间用一个空格分隔。若不存在，则打印"no"。
//
//第三行为平均成绩在90分及以上的学生的学号, 各学号之间用一个空格分隔。若不存在，则打印"no"。
//【样例输入】3
//070001 90 80 85 50 42
//070002 93 95 90 88 92
//070003 98 92 84 90 91
//【样例输出】93.67
//070001
//070002 070003
//【样例说明】本班有3个学生。
//
//第1个学生学号为 : 070001, 5门课程的成绩分别为 : 90、80、85、50、42;
//
//第2个学生学号为: 070002, 5门课程的成绩分别为 : 93、95、90、88、92;
//
//第3个学生学号为: 070003, 5门课程的成绩分别为 : 98、92、84、90、91。
//
//本班第1门课程的平均成绩为 : 93.67; 有2门及2门以上不及格的学生的学号为 : 070001; 平均成绩在90分以上的学生的学号为: 070002、070003。
 


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//struct score
//{
//	char xh[11];
//	int df[5];
//};
//int main()
//{
//	struct score * p;
//	int N, i, j;
//	scanf("%d", &N);
//	while (N > 30 && N <= 0)
//	{
//		scanf("%d", &N);
//	}
//	p = (struct score*)malloc(N * sizeof(struct score));
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s", p[i].xh);
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &p[i].df[j]);
//		}
//	}
//	float ave, sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		sum+= p[i].df[0];
//	}
//	ave = sum / N;
//	printf("%.2f\n", ave);
//	int have = 0;
//	for (i = 0; i < N; i++)
//	{
//		int count = 0;
//		for (j = 0; j < 5; j++)
//		{
//			if (p[i].df[j] < 60)
//			{
//				count++;
//			}
//		}
//		if (count >= 2)
//		{
//			printf("%s ", p[i].xh);
//			have = 1;
//		}
//	}
//	if (have == 0)
//	{
//		printf("no\n");
//	}
//	else
//	{
//		printf("\n");
//	}
//	float* ave1 = (float*)malloc(N * sizeof(float));
//	for (i = 0; i < N; i++)
//	{
//		sum = 0;
//		for (j = 0; j < 5; j++)
//		{
//			sum += p[i].df[j];
//		}
//		ave1[i] = sum / 5.0;
//	}
//	have = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (ave1[i] >= 90)
//		{
//			printf("%s ", p[i].xh);
//			have = 1;
//		}
//	}
//	if (have == 0)
//	{
//		printf("no");
//	}
//	return 0;	
//}