////���ͣ�Test temp[2]���ڴ����������� Test ��������飬ÿ���������ͷ�ʱ����һ������������
////�� Test* p[2]ֻ���������� Test ����ָ������飬��û�д��� Test �������Բ�����ù���
////����������������
//
//#include <iostream>
//using namespace std;
//class Test
//{
//public:
//	Test() { cout << "*"; }
//	~Test() { cout << "#"; }
//};
//int main()
//{
//	Test temp[2], * p[2];
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	virtual void study() { cout << "Student::study()" << endl; } //study()���麯��
//	void study1() { cout << "Student::study1()" << endl; } //study1()�����麯��
//protected:
//	int num;
//};
//class Student1 : public Student
//{
//public:
//	virtual void study() { cout << "Student1::study()" << endl; }
//	void study1() { cout << "Student1::study1()" << endl; }
//protected:
//	int score;
//};
//class Student2 : public Student
//{
//public:
//	virtual void study() { cout << "Student2::study()" << endl; }
//	void study1() { cout << "Student2::study1()" << endl; }
//protected:
//	int score;
//};
////void f2()
////{
////	Student* p; //p Ϊ����ָ��
////	Student s;
////	Student1 s1;
////	Student2 s2;
////	p = &s;
////	p->study1();
////	p = &s1;
////	p->study1();
////	p = &s2;
////	p->study1();
////}
////void f3()
////{
////	Student s;
////	Student1 s1;
////	Student2 s2;
////	Student&r = s; //r Ϊ�����������
////	r.study1();
////	Student& r1 = s1; //r1 Ϊ�����������
////	r1.study1();
////	Student& r2 = s2; //r2 Ϊ�����������
////	r2.study1();
////}
//void f4()
//{
//	Student* p; //p Ϊ����ָ��
//	Student s;
//	Student1 s1;
//	p = &s;
//	p->study();
//	p = &s1;
//	p->study();
//	p = new Student2;
//	p->study();
//}
//void study(Student& s)
//{
//	s.study();
//}
//void f5()
//{
//	Student s;
//	Student1 s1;
//	Student2 s2;
//	study(s);
//	study(s1);
//	study(s2);
//}
//int main()
//{
//	//f2();
//	//f3();
//	f4();
//	cout << endl;
//	f5();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		n += 2;
//	}
//	~Test()
//	{
//		n -= 3;
//	}
//	static int getNum()
//	{
//		return n;
//	}
//private:
//	static int n;
//};
//int Test::n = 1;
//int main()
//{
//	Test* p = new Test;
//	delete p;
//	cout << "n = " << Test::getNum() << endl;
//	return 0;
//}
//

////1��˵��������һ����������CRectangle�������ݳ�Ա����Ϊ˽�У��������½ǵ�����x��y��x���򳤶�a��y���򳤶�b��
////���幫�г�Ա������ΪCRectangle���ⲿ�ӿڣ�����������޸ĳ����ε����ꣻ����ó��������ꡢ�����ܳ�����������ɸ���
////����������º�����
////�ٴ������Ĺ��캯����ʵ���ڶ���Ĵ���ʱ��ɳ�����������ߴ�ĳ�ʼ����
////������������ʹ�����ڱ����������ʱ���û�������Ӧ��ʾ��Ϣ��
////��length()���������㳤�����ܳ���
////��area()���������㳤���������
////���󳤷���������ԭ�㣨0, 0������ĺ���distance()���ú�������Ϊ��CRectangle����Ԫ����ͨ�����øú������㳤������Ķ����������ԭ����롣
////������������� << ���ĺ����������CRectangle��������Ϣ��
//
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//class CRectangle
//{
//	friend double distance(CRectangle& crectangle);
//public:
//	CRectangle(double m_x, double m_y, double m_a, double m_b) :x(m_x), y(m_y), a(m_a), b(m_b) {}
//	double length()
//	{
//		return 2 * (a + b);
//	}
//	double area()
//	{
//		return a * b;
//	}
//	~CRectangle(){}
//private:
//	double a, b;
//	double x, y;
//};
//double distance(CRectangle& crectangle)
//{
//	return sqrt(pow(crectangle.x + crectangle.a / 2, 2) + pow(crectangle.y + crectangle.b / 2, 2));
//}
//const ostream& operator << (ostream& cout, CRectangle& p)
//{
//	cout << "length = " << setiosflags(ios::fixed) << setprecision(2) << p.length() << endl << "area = " << p.area() << endl << "distance = " << distance(p) << endl;
//	return cout;
//}
//int main()
//{
//	CRectangle crectangle(200, 150, 2000, 800);
//	cout << crectangle;
//}
////2������CRectangle�Ķ���rect�����½ǵ㣨200, 150����a��2000��b��800��������ĳ�Ա��������Ԫ������þ����ܳ������������������ԭ�����