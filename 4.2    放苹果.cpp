////��������
////��M��ͬ����ƻ������N��ͬ��������������е����ӿ��Ų��ţ��ʹ��ж����ֲ�ͬ�ķַ�������K��ʾ��5��1��1��1��5��1 ��ͬһ�ַַ���
////������ʽ
////��һ���ǲ������ݵ���Ŀt��0 <= t <= 20��������ÿ�о�������������M��N���Կո�ֿ���1 <= M��N <= 10��
////�����ʽ
////�������ÿ������M��N����һ�������Ӧ��K��
////��������
////1
////7 3
////�������
////8


//#include<iostream>
//using namespace std;
//int placeapple(int M, int N)
//{
//	if (N == 1)
//	{
//		return 1;
//	}
//	if (M == 0)
//	{
//		return 1;
//	}
//	if (M < N)
//	{
//		return placeapple(M, M);
//	}
//	else
//	{
//		return placeapple(M, N - 1) + placeapple(M - N, N);
//	}
//}
//int main()
//{
//	int t, M, N;
//	cin >> t;
//	for (int i = 1; i <= t; i++)
//	{
//		cin >> M >> N;
//		cout << placeapple(M, N) << endl;
//	}
//	return 0;
//}