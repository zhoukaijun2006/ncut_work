////问题描述
////一天Extense在森林里探险的时候不小心走入了一个迷宫，迷宫可以看成是由n * n的格点组成，每个格点只有2种状态，.和#，
////前者表示可以通行，后者表示不能通行。同时当Extense处在某个格点时，
////他只能移动到东南西北(或者说上下左右)四个方向之一的相邻格点上，
////Extense想要从点A走到点B，问在不走出迷宫的情况下能不能办到。如果起点或者终点有一个不能通行(为#)，则看成无法办到。
//
////输入形式
////第1行是测试数据的组数k，后面跟着k组输入。每组测试数据的第1行是一个正整数n(1 <= n <= 100)，表示迷宫的规模是n* n的。
////接下来是一个n* n的矩阵，矩阵中的元素为.或者#。再接下来一行是4个整数ha， la， hb， lb，描述A处在第ha行，第la列，
////B处在第hb行，第lb列。注意到ha， la， hb， lb全部是从0开始计数的。
//
////输出形式
////k行，每行输出对应一个输入。能办到则输出"YES"，否则输出"NO"。
//
////样例输入
////2
////3
////.##
////..#
////#..
////0 0 2 2
////5
////.....
////###.#
////..#..
////###..
////...#.
////0 0 4 0
//
////样例输出
////YES
////NO

//#include<iostream>
//#include<vector>
//using namespace std;
//static int find(int x, int y, int hb, int lb, int n, vector<vector<char>>v1)
//{
//	if (x < 0 || x >= n || y < 0 || y >= n)
//	{
//		return 0;
//	}
//	if (v1[x][y] == '#')
//	{
//		return 0;
//	}
//	if (x == hb && y == lb)
//	{
//		return 1;
//	}
//	if (v1[x][y] == '.')
//	{
//		v1[x][y] = '#';
//		return  (find(x - 1, y, hb, lb, n, v1) || find(x, y - 1, hb, lb, n, v1) || find(x + 1, y, hb, lb, n, v1) || find(x, y + 1, hb, lb, n, v1));
//	}
//	return 0;
//}
//int main()
//{
//	int K;
//	cin >> K;
//	for (int k = 1; k <= K; k++)
//	{
//		int n;
//		cin >> n;
//		vector<vector<char>>v1(n, vector<char>(n));
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> v1[i][j];
//			}
//		}
//		int ha, la, hb, lb;
//		cin >> ha >> la >> hb >> lb;
//		if (v1[ha][la] == '#' || v1[hb][lb] == '#')
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			if (find(ha, la, hb, lb, n, v1) == 1)
//			{
//				cout << "YES" << endl;
//			}
//			else
//			{
//				cout << "NO" << endl;
//			}
//		}
//	}
//	return 0;
//}