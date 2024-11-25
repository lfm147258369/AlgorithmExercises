#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 0;
//    while (n != 1)
//    {
//        if (n % 2 == 0)
//        {
//            n = n / 2;
//
//        }
//        else
//        {
//            n = (3 * n) + 1;
//        }
//		count++;
//	}
//    printf("%d", count);
//    return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ans = 0;
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n = n / 2;
//		}
//		else
//		{
//			n = (3 * n + 1) / 2;
//		}
//		ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int ans = 0;
//	scanf("%d", &n);
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//		}
//		else
//		{
//			n = (n * 3 + 1) / 2;
//		}
//		ans++;
//	}
//	printf("%d", ans);
//	return 0;
//}

//int main()
//{
//	long long n = 0;//long long也不够，要用字符串来处理
//	char* arr[] = { "ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
//	scanf("%lld", &n);
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	int ret = 0;
//	while (sum)
//	{
//		ret = sum % 10;
//		printf("%s ", arr[ret]);//要倒着输出，就不能这样了，要把结果放到数组中来处理
//		sum /= 10;
//	}
//	return 0;
//}


//题解
//// 对应C++中的字符串数组
//const char* a[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
//
//int main() 
//{
//    char s[1000];
//    scanf("%s", s);
//
//    int sum = 0;
//    for (int i = 0; i < strlen(s); i++) 
//    {
//        sum += s[i] - '0';
//    }
//
//    int ve[100];  // 模拟vector
//    int ve_size = 0;
//    while (sum)
//    {
//        ve[ve_size++] = sum % 10;
//        sum = sum / 10;
//    }
//
//    for (int i = ve_size - 1; i >= 0; i--)
//    {
//        printf("%s", a[ve[i]]);
//        if (i != 0) 
//        {
//            printf(" ");
//        }
//    }
//    return 0;
//}

//err
//int main()
//{
//	char arr1[1000] = { 0 };
//	int i = 0;
//	while (scanf("%s", &arr1[i]))
//	{
//		i++;
//		if (getchar() == '\n')
//		{
//			break;
//		}
//	}
//	char* arr2[] = { "ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
//	int sum = 0;
//	while (arr1[i] != '\0')
//	{
//		sum += (int)arr1[i];
//	}
//
//	return 0;
//}


//int main()
//{
//	const char* ans_final[] = { "ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
//	char input[1000] = { 0 };
//	scanf("%s", input);
//	int sum = 0;
//	int i = 0;
//	while (input[i] != '\0')
//	{
//		sum += input[i++] - '0';
//	}
//	int ans[100] = { 0 };
//	int ans_size = 0;
//	while (sum)
//	{
//		ans[ans_size++] = sum % 10;
//		sum /= 10;
//	}
//	int j = 0;
//	for (ans_size = ans_size - 1; ans_size >= 0; ans_size--)
//	{
//		printf("%s", ans_final[ans[ans_size]]);
//		if (ans_size != 0)
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}
