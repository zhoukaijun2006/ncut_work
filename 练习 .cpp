////1����дһ�����ڶ���ĳ��򣺼���Բ���ܳ�������������
////ʵ����ʾ��
////�����ݳ�Ա����Բ�İ뾶 radius��
////�ڳ�Ա�����������캯���������ܳ��� length()�����������area()��
////��main()�������԰뾶ֵ 10.0 ����һ�����󣬷ֱ�����ö�����ܳ��������
// 
//include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//#define Pi acos(-1);
//class Circle
//{
//public:
//	Circle(double radius) :m_radius(radius) {}
//	double length()
//	{
//		return 2 * m_radius * Pi;
//	}
//	double area()
//	{
//		return pow(m_radius, 2) * Pi;
//	}
//private:
//	double m_radius;
//};
//int main()
//{
//	Circle circle(10.0);
//	cout << "area = " << setiosflags(ios::fixed) << setprecision(2) << circle.area() << endl;
//	cout << "length = " << setiosflags(ios::fixed) << setprecision(2) << circle.length() << endl;
//}

////2����Ҫ�� 3 ������������������дһ�����ڶ���ĳ������ݳ�Ա���� length(��)��
////width(��)��height(��)��Ҫ��ʵ�����¹��ܣ�
////�ٹ��캯����
////�ڼ��㳤�����������
////����� 3 ���������������
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//class Cuboid
//{
//public:
//	Cuboid(double l, double w, double h) :length(l), width(w), height(h) {}
//	double volume()
//	{
//		return length * width * height;
//	}
//	void print()
//	{
//		cout << setiosflags(ios::fixed) << setprecision(2) << volume() << endl;
//	}
//private:
//	double length, width, height;
//};
//int main()
//{
//	double a, b, c;
//	for (int i = 1; i <= 3; i++)
//	{
//		cin >> a >> b >> c;
//		Cuboid cuboid(a, b, c);
//		cuboid.print();
//	}
//	return 0;
//}

////3������һ����Ա��(Person)������ 3 �����ݳ�Ա��name(����)��age(����)��sex(�Ա�)��2 ����Ա���������캯������������Ϣ�ĺ��� display()��
////���õ��̳еķ�ʽ����һ��ѧ��(Student)�����࣬�������� 2 �����ݳ�Ա��grade(�꼶)��score(��ѧ��)��3 ����Ա���������캯����������� show()
////������ѧ�ֵĺ��� add()���ڶ������������ʱ������ʼ�������ݣ�Ȼ�������Щ���ݡ�
// 
//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//	Person(string m_name, int m_age, string m_sex) :name(m_name), age(m_age), sex(m_sex) {}
//	void display()
//	{
//		cout << "name = " << name << endl << "age = " << age << endl << "sex = " << sex << endl;
//	}
//private:
//	string name;
//	int age;
//	string sex;
//};
//class Student :public Person
//{
//public:
//	Student(string m_name, int m_age, string m_sex, int m_grade, double m_score,double m_addscore) :Person(m_name, m_age, m_sex), grade(m_grade), score(m_score),addscore(m_addscore) {}
//	void show()
//	{
//		display();
//		cout << "grade = " << grade << endl << "score = " << Addscore() << endl;
//	}
//	double Addscore()
//	{
//		return score += addscore;
//	}
//private:
//	int grade;
//	double score;
//	double addscore;
//};
//
//int main()
//{
//	Student student("XiaoMing", 18, "man", 5, 20, 2.8);
//	student.show();
//	return 0;
//}

////4��дһ�����򣬶��������� Shape������������ 3 �������ࣺCircle(Բ��)��Square(������)��Rectangle(����)��
////����ָ�롢�麯�� printArea()��printLength()�ֱ�����������ߵ�������ܳ�������ͼ�ε������ڶ������ʱ������
//// ����ʵ��һ��ͨ�õĺ������������ܳ���������Ҫ�����Ǻ���ͼ�Ρ�
// 
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//#define Pi acos(-1)
//class Shape
//{
//public:
//	virtual double printArea() = 0;
//	virtual double printLength() = 0;
//	void showArea()
//	{
//		cout << "Area =" << printArea() << endl;
//	}
//	void showLength()
//	{
//		cout << "Length = " << printLength() << endl;
//	}
//};
//class Circle :public Shape
//{
//public:
//	Circle(double m_radius) :radius(m_radius) {}
//	double printArea()
//	{
//		return Pi * pow(radius, 2);
//	}
//	double printLength()
//	{
//		return Pi * 2 * radius;
//	}
//private:
//	double radius;
//};
//class Square :public Shape
//{
//public:
//	Square(double m_radius) :radius(m_radius) {}
//	double printArea()
//	{
//		return pow(radius, 2);
//	}
//	double printLength()
//	{
//		return 4 * radius;
//	}
//private:
//	double radius;
//};
//class Rectangle :public Shape
//{
//public:
//	Rectangle(double m_length, double m_width) :length(m_length), width(m_width) {}
//	double printArea()
//	{
//		return length * width;
//	}
//	double printLength()
//	{
//		return 2 * (length + width);
//	}
//private:
//	double length, width;
//};
//void doWork(Shape *shape)
//{
//	shape->showArea();
//	shape->showLength();
//}
//int main()
//{
//	Shape* circle = new Circle(2);
//	doWork(circle);
//	Shape* square = new Square(3);
//	doWork(square);
//	Shape* rectangle = new Rectangle(4, 6);
//	doWork(rectangle);
//	return 0;
//}

//////5��Ҫ�������塢��Բ���ı���������Գ����һ�������Ļ��� Container Ϊ�����������ж���һ�����������ݳ�Ա radius(�����ݿ�����Ϊ�����εı߳�����İ뾶��Բ�������Բ�뾶)
//////�Լ��������Ĵ��麯�� area()���ɴ˳�����������Ҫ�����������࣬���û���ָ����麯�����ֱ��������ͼ�εı������
//#include<iostream>
//#include<cmath>
//using namespace std;
//#define Pi acos(-1)
//class Container
//{
//public:
//	Container(double m_radius) :radius(m_radius) {}
//	virtual double area() = 0;
//	void printarea()
//	{
//		cout << "Area = " << area() << endl;
//	}
//	double radius;
//};
//class Cube :public Container
//{
//public:
//	Cube(double m_side) :Container(m_side) {}
//	double area()
//	{
//		return 6 * pow(radius, 2);
//	}
//};
//class Global:public Container
//{
//public:
//	Global(double m_r):Container(m_r){}
//	double area()
//	{
//		return 4 * Pi * pow(radius, 2);
//	}
//};
//class Cylinder :public Container
//{
//public:
//	Cylinder(double m_r,double m_height):Container(m_r),height(m_height){}
//	double area()
//	{
//		return 2 * Pi * pow(radius, 2) + 2 * Pi * radius * height;
//	}
//private:
//	double height;
//};
//void doWork(Container* container)
//{
//	container->printarea();
//	return;
//}
//int main()
//{
//	Container* cube = new Cube(2.0);
//	doWork(cube);
//	Container* global = new Global(3.0);
//	doWork(global);
//	Container* cylinder = new Cylinder(4.0, 2.0);
//	doWork(cylinder);
//	return 0;
//}

////6������ Point �������㣬������һ����Ԫ���������������롣���� Point ���������Բ��Circle �࣬����Բ�ģ�Point ��ĵ㣩���뾶��
////   ���캯����ʼ��Բ����Ա�����ж�ĳ���� m �Ƿ���Բ���ϡ���� main()��������(1��2)ΪԲ�ġ�5 Ϊ�뾶��m Ϊ(6��2)���в��ԡ�
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//class Point
//{
//public:
//	Point(int x_Point, int y_Point) :x(x_Point), y(y_Point) {}
//	Point() {};
//	int x, y;
//};
//class Circle :public Point
//{
//public:
//	Circle(Point m_circle, int m_radius) :circle(m_circle), radius(m_radius) {}
//	Point circle;
//	int radius;
//};
//const double operator -(Point& a, Point& b)
//{
//	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
//}
//void isOnCircle(Point &p,Circle &c)
//{
//	if (p - c.circle == c.radius)
//	{
//		cout << "�õ���Բ��" << endl;
//	}
//	else if (p - c.circle > c.radius)
//	{
//		cout << "�õ���Բ��" << endl;
//	}
//	else
//	{
//		cout << "�õ���Բ��" << endl;
//	}
//}
//int main()
//{
//	Circle circle(Point(1, 2), 5);
//	Point point(6, 2);
//	isOnCircle(point, circle);
//	return 0;
//}