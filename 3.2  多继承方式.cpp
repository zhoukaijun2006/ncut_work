////�������������ֱ���Teacher(��ʦ)���Cadre(�ɲ�)�࣬���ö��ؼ̳з�ʽ��������������������Teacher_Cadre(��ʦ��ɲ�)��Ҫ��
////�� �����������ж�������������������(������Date���Ӷ���)���Ա�����ݳ�Ա��
////�� ��Teacher���л��������ݳ�Աtitle(ְ��)����Cadre���л��������ݳ�Աpost(ְ��)�� ��Teacher_Cadre���л��������ݳ�Աwages(����)��
////�� �����������е��������������ڡ��Ա�����ݳ�Ա����ͬ�����֣���������Щ���ݳ�Աʱ��ָ��������
////�� ��������������Ա�����������ⶨ���Ա������
////�� ��������Teacher_Cadre�ĳ�Ա����show()�е���Teacher���е�display()����
////   ����������������ڡ��Ա�ְ�ƣ�Ȼ������cout������ְ���빤�ʡ����main()��ɲ��ԡ�
////��������ʽ����
////�������ʽ�����������ĸ������ݳ�Ա��ֵ���˴��Կո�����
////���������롿��
////�����������LiHong 1967 / 10 / 12 f  professor Header 8000.00
////������˵���������ݣ�"LiHong", 1967, 10, 12, 'f', "professor", "Header", 8000.00��ʼ��Teacher_Cadre�������main()�в���show()��������й����ݡ�
//
//#include<iostream>
//#include<string>
//using namespace std;
//class Date
//{
//public:
//	Date(int year, int month, int day): m_year(year), m_month(month), m_day(day) {}
//	void show()
//	{
//		cout << m_year << "/" << m_month << "/" << m_day;
//	}
//	int m_year;
//	int m_month;
//	int m_day;
//};
//class Teacher
//{
//public:
//	int m_Name;
//	Date date_Teacher;
//	string m_title;
//	void display();
//};
//
//class Cadre
//{
//public:
//	int m_Name;
//	Date date_Cadre;
//	string m_post;
//	void display();
//};
//
//class Teacher_Cadre :public Teacher, public Cadre
//{
//public:
//	Teacher_Cadre();
//	void show()
//	{
//		Teacher display();
//	}
//	double wages;
//};ss
//void Teacher::display()
//{
//	cout << "1" << endl;
//}
//
//void Cadre::display()
//{
//
//}
//
//int main()
//{
//	Teacher_Cadre teacher_cadre;
//	return 0;
//}