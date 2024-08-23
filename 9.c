////【问题描述】
////已知可以用下列公式计算π的近似值。给定一个π的近似值e，
//// 编程利用下列公式求得最接近e的近似值π，以及迭代次数n（大于等于1）。
////π / 2 = (2 / 1 x 2 / 3) x(4 / 3 x 4 / 5) x(6 / 5 x 6 / 7) x ...... x[2n / (2n - 1)x2n / (2n + 1)]
////【输入形式】
////从控制台输入e(e大于2.6666667，小于3.14159)的值。
////【输出形式】
////输出最接近e的近似值π，以及迭代次数n（以一个空格分隔，并且输出π时要求小数点后保留9位有效数字）。
////【样例输入1】
////3.1201
////【样例输出1】
////3.120149087 36
////【样例1说明】
//// 输入的π的近似值e为3.1201，当n为35时计算的π值为3.119547206，
//// 与给定e值之差的绝对值为0.000552794。当n为36时，计算的π值为3.120149087，
//// 与给定e值之差的绝对值为0.000049087，可以看出n为36时比n为35时求得的π值更接近给定的e值。
//// 并且n为36时求得的π值已经大于给定的e值，当n继续增大时，求得的π值将递增，
//// 所以利用上述计算公式求得的最接近e的近似值为3.120149087，对应的迭代次数为36。
////【样例输入2】
////3.11955
////【样例输出2】
////3.119547206 35
////【样例2说明】
//// 输入的π的近似值e为3.11955，当n为35时计算的π值为3.119547206，与给定e值之差的绝对值为0.000002794。
//// 当n为36时，计算的π值为3.120149087，与给定e值之差的绝对值为0.000599087，
//// 可以看出n为35时比n为36时求得的π值更接近给定的e值。并且n为36时求得的π值已经大于给定的e值，
//// 当n继续增大时，求得的π值将递增，所以利用上述计算公式求得的最接近e的近似值为3.119547206，对应的迭代次数为35。
//// 【注意】：
//// 为保证计算精度，请使用double数据类型保存计算数据。
////
////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	double e;
//	scanf_s("%lf", &e);
//	double c = 2 * (2.0 / 1.0 * 2.0 / 3.0);
//	for (i=2;;i++)
//	{
//		double d = c * ((2.0 * i) / (2.0 * i - 1) * (2.0 * i) / (2.0 * i + 1));
//		if (fabs(d - e) < fabs(c - e))
//		{
//			c = d;
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%.9lf %d", c, i - 1);
//	return 0;
//}