////问题描述
////
////输入4行全部由大写字母组成的文本，输出一个垂直直方图，给出每个字符出现的次数。注意：只用输出字符的出现次数，不用输出空白字符，数字或者标点符号的输出次数。
////
////输入形式
////
////输入包括4行由大写字母组成的文本，每行上字符的数目不超过80个。
////
////输出形式
////
////输出包括若干行。其中最后一行给出26个大写英文字母，这些字母之间用空格隔开。前面的几行包括空格和星号，每个字母出现几次，就在这个字母的上方输出一个星号。注意：输出的第一行不能是空行。
////
////样例输入
////
////
////THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG.
////
////THIS IS AN EXAMPLE TO TEST FOR YOUR
////
////HISTOGRAM PROGRAM.
////
////HELLO!
////
////样例输出
////
////*
////
////*
////
////**
////
////****
////
////****
////
////******
////
////**********
////
////*************
////
////******************
////
////**************************
////
////A B C D E F G H I J K L M N O P Q R S T U V W X Y Z


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	char arr[81];
//	int b[26] = { 0 };
//	int max = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		gets(arr);
//		for (j = 0; arr[j] != '\0'; j++)
//		{
//			if (arr[j] >= 'A' && arr[j] <= 'Z')
//			{
//				b[arr[j] - 'A']++;
//			}
//		}
//	}
//	for (i = 0; i < 26; i++)
//	{
//		max = max > b[i] ? max : b[i];
//	}
//	int p = max;
//	for (j = 1; j <= max; j++)
//	{
//		for (i = 0; i < 26; i++)
//		{
//			if (b[i] == p)
//			{
//				printf("%c ", '*');
//				b[i]--;
//			}
//			else
//			{
//				printf("%c ", ' ');
//			}
//		}
//		p--;
//		printf("\n");
//	}
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c ",'A' + i);
//	}
//	return 0;
//}
