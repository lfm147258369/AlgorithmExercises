#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
//int main()
//{
//	int n = 0;
//	printf("������ɼ�:>\n");
//	int count_peo[4] = { 0 };
//	while (scanf("%d", &n) != 1)
//	{
//		switch (n)
//		{
//		case 20:
//			printf("�ȼ�ΪE\n");
//			count_peo[0]++;
//			break;
//
//		case 40:
//			printf("�ȼ�ΪE\n");
//			count_peo[0]++;
//			break;
//
//		case 60:
//			printf("�ȼ�ΪD\n");
//			count_peo[1]++;
//			break;
//
//			break;
//		case 80:
//			printf("�ȼ�Ϊc\n");
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
//			printf("��ͬѧ�ȼ�Ϊ%c\n", rank[9 - grade / 10]);
//			count_rank[9 - grade / 10]++;
//		}
//		else if (grade == 100)
//		{
//			printf("��ͬѧ�ȼ�ΪA\n");
//
//			count_rank[0]++;
//		}
//		else
//		{
//			printf("��ͬѧ�ȼ�ΪE\n");
//			count_rank[4]++;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c��ͬѧ��%d��\n", rank[i], count_rank[i]);
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
//				printf("ΪСд��ĸ\n");
//			}
//			else
//			{
//				printf("Ϊ��д��ĸ\n");
//			}
//		}
//		else
//		{
//			printf("������ĸ\n");
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
//	int x = 0;//��
//	int y = 0;//ĸ
//	int z = 0;//С
//	int count = 0;//������
//	for (x = 0; x <= 20; x++)
//	{
//		y = (100 - 7 * x) / 4;
//		z = 100 - x - y;
//		if (y >= 0 && z >= 0 && (7*x)+ (4*y) == 100)
//		{
//			printf("������%dֻ��ĸ����%dֻ��С����%dֻ\n", x, y, z);
//			count++;
//		}
//	}
//	printf("����%d�ַ���\n", count);
//}


//int main()
//{
//	int grade[5][3] = { 0 };
//	double sum[5] = { 0 };
//	int i = 0;
//	printf("������>\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d%d%d", &grade[i][0], &grade[i][1], &grade[i][2]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum[i] = (grade[i][0] + grade[i][1] + grade[i][2]) / 3.0;
//	}
//	printf("��ѧ\t�����\tӢ��\tƽ����\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\t%d\t%d\t%.2lf\n", grade[i][0], grade[i][1], grade[i][2],sum[i]);
//	}
//	return 0;
//}
//
