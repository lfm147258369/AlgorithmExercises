#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	int n = 0;
//	printf("请输入成绩:>\n");
//	int count_peo[4] = { 0 };
//	while (scanf("%d", &n) != 1)
//	{
//		switch (n)
//		{
//		case 20:
//			printf("等级为E\n");
//			count_peo[0]++;
//			break;
//
//		case 40:
//			printf("等级为E\n");
//			count_peo[0]++;
//			break;
//
//		case 60:
//			printf("等级为D\n");
//			count_peo[1]++;
//			break;
//
//			break;
//		case 80:
//			printf("等级为c\n");
//			count_peo[1]++;
//			break;
//		case 90:
//
//		case 100:
//			break;
//
//		default:
//			break;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	char rank[] = { 'A','B','C','D','E' };
//	int count_rank[5] = { 0 };
//	int grade = 0;
//	while (scanf("%d", &grade) == 1)
//	{
//		if (grade >= 60 && grade < 100)
//		{
//			printf("该同学等级为%c\n", rank[9 - grade / 10]);
//			count_rank[9 - grade / 10]++;
//		}
//		else if (grade == 100)
//		{
//			printf("该同学等级为A\n");
//
//			count_rank[0]++;
//		}
//		else
//		{
//			printf("该同学等级为E\n");
//			count_rank[4]++;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c组同学有%d人\n", rank[i], count_rank[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	while (scanf("%c", &a) == 1)
//	{
//		
//		if (isalpha(a))
//		{
//			if (islower(a))
//			{
//				printf("为小写字母\n");
//			}
//			else
//			{
//				printf("为大写字母\n");
//			}
//		}
//		else
//		{
//			printf("不是字母\n");
//
//		}
//		getchar();
//	}
//}


//int main()
//{
//	char key[50] = { 0 };
//	int new_key[50] = { 0 };
//	scanf("%s", &key);
//	int lenth = strlen(key);
//	int i = 0;
//	while (key[i] != '\0')
//	{
//		new_key[i] = ((key[i] - '0') + 9) % 10;
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int x = 0;//公
//	int y = 0;//母
//	int z = 0;//小
//	int count = 0;//方案数
//	for (x = 0; x <= 20; x++)
//	{
//		y = (100 - 7 * x) / 4;
//		z = 100 - x - y;
//		if (y >= 0 && z >= 0 && (7*x)+ (4*y) == 100)
//		{
//			printf("公鸡买%d只，母鸡买%d只，小鸡买%d只\n", x, y, z);
//			count++;
//		}
//	}
//	printf("共有%d种方案\n", count);
//}


//int main()
//{
//	int grade[5][3] = { 0 };
//	double sum[5] = { 0 };
//	int i = 0;
//	printf("请输入>\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d%d%d", &grade[i][0], &grade[i][1], &grade[i][2]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum[i] = (grade[i][0] + grade[i][1] + grade[i][2]) / 3.0;
//	}
//	printf("数学\t计算机\t英语\t平均分\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\t%d\t%d\t%.2lf\n", grade[i][0], grade[i][1], grade[i][2],sum[i]);
//	}
//	return 0;
//}
//
