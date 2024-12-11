#include <stdio.h>
#include <math.h>

//int IsTheNumber(const int N);
//
//int main()
//{
//    int n1, n2, i, cnt;
//
//    scanf("%d %d", &n1, &n2);
//    cnt = 0;
//    for (i = n1; i <= n2; i++) {
//        if (IsTheNumber(i))
//            cnt++;
//    }
//    printf("cnt = %d\n", cnt);
//
//    return 0;
//}
//
//
///* 你的代码将被嵌在这里 */
//int IsTheNumber(const int N)
//{
//    int i = 0;
//    int j = 0;
//
//    int sqrt_num[10] = { 0 };
//    for (j = 0; j < 10; j++)
//    {
//        sqrt_num[j] = j * j;
//    }
//    int flag = 1;
//    for (j = 0; j < 10; j++)
//    {
//        if (sqrt_num[j] == N)
//        {
//            flag = 0;
//        }
//    }
//    if (flag == 1)
//    {
//        return 0;
//    }
//    int arr[10] = { 0 };
//    int tmp = N;
//    while (tmp)
//    {
//        arr[i] = tmp % 10;
//        tmp /= 10;
//        i++;
//    }
//    int flag1 = 1;
//    
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i++ < 4;);
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int a = 5, b = 6, c = 7, d = 8, m = 2, n = 2;
//	(m = a > b) && (n = c > d);
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 8;i += 3)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d", --x);
//	} while (!x);
//
//	return 0;
//}