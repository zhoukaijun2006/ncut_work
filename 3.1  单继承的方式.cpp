////��������������Ա���ǳ���̶ȸ��ߵ��࣬���������˵Ĺ��Եĳ���������һ����Ա�ࣨPerson ����
//// ����3�����ݳ�Ա��name����������age�����䣩��sex���Ա𣩣�2����Ա���������캯������������Ϣ�ĺ���display()��
//// ���õ��̳еķ�ʽ����һ��ѧ����Student�������࣬��������2�����ݳ�Ա��grade���꼶����score����ѧ�֣���
//// 3����Ա���������캯�����������show()������ѧ�ֵĺ���add()��add()ԭ��Ϊ��void add(float s)�����У�s��ʾĳ�ſε�ѧ�֣�
//// ��s���뵽��ѧ��score�С�Ҫ����main()�ж������������
//// ��ʼ��������Ϊ������"Xu Li"������20���Ա�'f'���꼶2����ѧ��25.4��ĳ�ſε�ѧ��Ϊ2.6������Ҫ�����show()��add()������
////��������ʽ����
////�������ʽ�����������ĸ������ݳ�Ա��ֵ���˴��Կո�����
////
////���������롿��
////�����������Xu Li 20 f 2 28
////
////������˵�����Ը�����ֵ��ʼ����������󣬵���add()��show()������ѧ�ֲ�������������䡢�Ա��꼶����ѧ�֡�
////�����ֱ�׼������50�֣�1�����Ե㡣

//#include<iostream>
//#include<cstring>
//#include<iomanip>
//using namespace std;
//class Person
//{
//public:
//	Person(string name, int age, char sex) :m_Name(name), m_Age(age), m_Sex(sex) {}
//	Person() {}
//	void display()
//	{
//		cout << m_Name << " " << m_Age << " " << m_Sex << " ";
//	}
//	string m_Name;
//	int m_Age;
//	char m_Sex ;
//};
//class Student :public Person
//{
//public:
//	Student(string name,int age,char sex,int grade, float score,float addscore) :Person(name,age,sex),m_Grade(grade), m_Score(score) ,m_AddScore(addscore){}
//	void add()
//	{
//		m_AllScore = m_Score + m_AddScore;
//	}
//	void show()
//	{
//		Person::display();
//		cout << m_Grade << " " << setiosflags(ios::fixed) << setprecision(1) << m_AllScore << " " << endl;
//	}
//	int m_Grade;
//	float m_Score;
//	float m_AllScore;
//	float m_AddScore;
//};
//
//int main()
//{
//	Student student1("Xu Li", 20, 'f', 2, 25.4f, 2.6f);
//	student1.add();
//	student1.show();
//	return 0;
//}