//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    string n;
//    int s, i, x, l, m;
//    while (cin >> n >> s)
//    {
//        i = -1, m = 0, x = 0;
//        l = n.length();
//        while (x < s && m == 0)
//        {
//            i++;
//            if (n[i] > n[i + 1])//���ֵݼ�,ɾ���ݼ��������� 
//            {
//                n = n.erase(i, 1);
//                x++;// xͳ��ɾ�����ֵĸ��� 
//                i = -1;//��ͷ��ʼ��ݼ����� 
//            }
//            if (i == l - x - 2 && x < s)
//                m = 1;//�Ѿ��޵ݼ�����,m=1����ѭ�� 
//        }
//        cout << n.substr(0, l - s + x) << endl;//ֻ��ӡʣ�µ����l-(s-x)������ 
//    }
//    return 0;
//}