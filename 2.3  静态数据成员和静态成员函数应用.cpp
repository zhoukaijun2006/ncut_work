////������������ĳ��Ʒ����Ϊ30Ԫ�������̵��ڸ�������������Ʒ�����й̶����ۿۣ������ۿ۵�������������3������Ա������Ʒ��
//// ��������۵�������������մ���Ʒ�������۶ƽ���ۼۡ�
//// ���main()���������Գ��򡣱�����֪��3������Ա�Ĺ��ż����۴���Ʒ������Ϊ��1001��5��1002��20��1003��75��
////��������ʽ������ռһ�У�Ϊ�����ۿۡ�
////�������ʽ�����ռһ�У�������������1����Ϊ���մ���Ʒ�������۶��2����Ϊƽ���ۼۡ�������λС�����������ÿո�����
////���������롿8
////�����������2760.00  27.60
////������˵���������ۿ�Ϊ8 % ������ԭ��92 % ���ۡ����մ���Ʒ�������۶�Ϊ2760.00��ƽ���ۼ�Ϊ27.60��
////�����ֱ�׼�����⹲20�֣�2�����Ե㣬ÿ�����Ե�10�֡�
////
////�����˵�����������ʹ���࣬��main()�����а��ո�������ֵ��������ͨ�����ú������������㡣
//// ����Ʒ�۸��ۿۡ������ۿ����Ʒ�����ܼ�������Ϊ��̬���ݳ�Ա���ʵ�ʹ�þ�̬��Ա�������ǻ��ڶ���ĳ��򲻵÷֡�

//#include<iostream>
//#include<iomanip>
//#include<vector>
//using namespace std;
//class Commondity
//{
//public:
//	static double price;
//	static double discount;
//	static double totalsales;
//	static int totalquantity;
//	static void Discount(double Discount)
//	{
//		discount = Discount / 100;
//	}
//	static void Price(double Price)
//	{
//		price = Price * (1 - discount);
//	}
//	static void Sales(int Totalquantity)
//	{
//		totalsales += Totalquantity * price;
//		totalquantity += Totalquantity;
//	}
//	static void coutcommondity()
//	{
//		double averageprice = totalsales / totalquantity;
//		cout << setiosflags(ios::fixed) << setprecision(2) << totalsales << " " << setiosflags(ios::fixed) << setprecision(2) << averageprice << endl;
//	}
//};
//double Commondity::price = 30.0;
//double Commondity::discount = 0.0;
//double Commondity::totalsales = 0.0;
//int Commondity::totalquantity = 0;
//int main()
//{
//	cin >> Commondity::discount;
//	Commondity::Discount(Commondity::discount);
//	Commondity::Price(30.0);
//	vector<vector<int>>sale = { {1001,5},{1002,20},{1003,75} };
//	for (int i = 0; i < 3; i++)
//	{
//		Commondity::Sales(sale[i][1]);
//	}
//	Commondity::coutcommondity();
//	return 0;
//}