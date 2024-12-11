#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;


//旧的思路
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int k = 0;
//	int i = 0;
//	int sum = 0;
//	vector<int> apple;
//
//	while (scanf("%d", &k) == 1)
//	{
//		if (k == 0)
//		{
//			break;
//		}
//		apple.clear();
//		sum = 0;
//		for (i = 1; sum < k; i++)
//		{
//			sum += i * i;
//			apple.push_back(sum);
//		}
//		int left = 0;
//		int right = apple.size();
//		int mid = 0;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			if (apple[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (apple[mid] >= k)
//			{
//				printf("%d\n", mid + 1);
//				break;
//			}
//		}
//	}
//
//
//	return 0;
//}
 
//新思路1
//#define MAX 19900000
//int main()
//{
//	long long k = 0;
//	//预处理天数
//	vector <long long> days(MAX);
//	days[0] = 0;
//	long long i = 0;
//	for (i = 1; i < MAX; i++)
//	{
//		days[i] = days[i - 1] + i * i;
//	}
//
//	while (1)
//	{
//		cin >> k;
//		if (k == 0)
//		{
//			break;
//		}
//		//查找
//		int left = 0;
//		int right = MAX - 1;
//		int mid = 0;
//		while (left <= right)
//		{
//			mid = left + (right - left) / 2;
//			if (days[mid] >= k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				left = mid + 1;
//			}
//		}
//		cout << left << endl;
//	}
//	return 0;
//}


//using namespace std;
//
//#define ll long long
//
//int main() 
//{
//    int day = 1442252;
//    vector<ll> days(day);
//    days[0] = 0;
//    for (ll i = 1; i < day; i++)
//    {
//        days[i] = days[i - 1] + i * i;
//    }
//
//    while (1)
//    {
//        ll k;
//        cin >> k;
//        if (!k) 
//        {
//            break;
//        }
//
//        int l = 0, r = day - 1;
//        while (l <= r) 
//        {
//            int mid = l + (r - l) / 2;
//            if (k <= days[mid]) 
//            {
//                r = mid - 1;
//            }
//            else
//            {
//                l = mid + 1;
//            }
//        }
//        cout << l << endl;
//    }
//}


//新思路2
//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main()
//{
//	long long k = 0;
//	long long apple = 0;
//	vector <long long>ans;
//	vector <long long>ASum(1,0);
//	//预处理部分
//	long long day = 10;
//	long long i = 0;
//	for (i = 1; i <= day; i++)
//	{
//		apple += i * i;
//		ASum.push_back(apple);
//	}
//	while (1)
//	{
//		cin >> k;
//
//		if (k == 0)
//		{
//			break;
//		}
//		//查找部分
//		int left = 0;
//		int right = day - 1;
//		while (left <= right)
//		{
//			int mid = left + (right - left) / 2;
//			if (ASum[mid] >= k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				left = mid + 1;
//
//			}
//		}
//		if (left == ASum.size() - 1)
//		{
//			while (1)
//			{
//				day++;
//				apple += day * day;
//				ASum.push_back(apple);
//				if (apple >= k)
//				{
//					left = day;
//					break;
//				}
//			}
//
//		}
//		ans.push_back(left);
//
//	}
//	for (int i = 0; i < ans.size(); i++)
//	{
//		cout << ans[i] << endl;
//	}
//}