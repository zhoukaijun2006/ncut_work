//��������
//
//There is a rectangular room��covered with square tiles.Each tile is colored either red or black.A man is standing on a black tile.From a tile�� he can move to one of four adjacent tiles.But he can't move on red tiles�� he can move only on black tiles.
//
//Write a program to count the number of black tiles which he can reach by repeating the moves described above.
//
//������ʽ
//
//The input consists of multiple data sets.A data set starts with a line containing two positive integers W and H; W and H are the numbers of tiles in the x - and y - directions�� respectively.W and H are not more than 20.
//
//There are H more lines in the data set, each of which includes W characters.Each character represents the color of a tile as follows.
//
//'.' - a black tile
//
//'#' - a red tile
//
//'@' - a man on a black tile(appears exactly once in a data set)
//
//The end of the input is indicated by a line consisting of two zeros.
//
//�����ʽ
//
//For each data set�� your program should output a line which contains the number of tiles he can reach from the initial tile(including itself).
//
//��������
//
//6 9
//
//....#.
//
//.....#
//
//......
//
//......
//
//......
//
//......
//
//......
//
//#@...#
//
//.#..#.
//
//0 0
//
//�������
//
//45
//
//���ķ��룺
//
//��������
//
//��һ�������εķ��䣬�÷���ש���ǵ��档��ש����ɫ�Ǻ�ɫ���ɫ��һ����վ��һ����ɫ�Ĵ�ש�ϡ���һ����ש�����ƶ������ڵ��ĸ���ש�ϡ����������ƶ�����ɫ��ש�ϣ����������ں�ɫ�Ĵ�ש���ƶ���
//
//��дһ�����������������Ե���ĺڴ�ש������
//
//������ʽ
//
//�����ɶ���������ɡ�һ��������һ����������������W��H��ʼ��W��H�ֱ�����x��y����Ĵ�ש����W��H������20��
//
//��H�е����ݣ�����ÿ�а���W���ַ���ÿ���ַ�����һ����ש����ɫ��
//
//'.' - ��ɫ��ש
//
//'#' - ��ɫ��ש
//
//'@' - ��ɫ��ש��һ���ˣ���������ֻ����һ�Σ�
//
//������� : ����������ɵ�����ʾ��
//
//�����ʽ
//
//����ÿ�����ݣ���ĳ���Ӧ�����һ�У������˴�����Ĵ�ש��ʼ���Դﵽ�Ĵ�ש��������������Ĵ�ש����

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int dx[] = { 1, 0, -1, 0 };
//int dy[] = { 0, 1, 0, -1 };
//int redandblack(int x, int y, int W, int H, vector<vector<char>>& v1)
//{
//	if (x < 0 || y < 0 || x >= W || y >= H) return 0;
//	if (v1[x][y] == '#') return 0;
//
//	v1[x][y] = '#';
//
//	int rst = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		rst += redandblack(x + dx[i], y + dy[i], W, H, v1);
//	}
//	return rst;
//}
//
//int main()
//{
//	int H, W, x = 0, y = 0;
//
//	vector<vector<char>> v1;
//
//	while (cin >> H >> W)
//	{
//		if (H == 0 && W == 0) break;
//
//		v1.resize(W, vector<char>(H));
//
//		for (int i = 0; i < W; i++)
//		{
//			for (int j = 0; j < H; j++)
//			{
//				cin >> v1[i][j];
//				if (v1[i][j] == '@')
//				{
//					x = i;
//					y = j;
//				}
//			}
//		}
//		cout << redandblack(x, y, W, H, v1) << endl;
//	}
//
//	return 0;
//}