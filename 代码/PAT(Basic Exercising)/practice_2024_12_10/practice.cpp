#define _CRT_SECURE_NO_WARNINGS 1
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
///* ��Ĵ��뽫��Ƕ������ */
//int IsTheNumber(const int N)
//{
//    int x = (int)sqrt(N);
//    int m = x * x;
//    if (m == N)
//    {
//        int i = 0;
//        int num[10] = { 0 };
//        while (m > 0)
//        {
//            for (i = 0; i < 10; i++)
//            {
//                if (m % 10 == i)
//                {
//                    num[i] = num[i] + 1;
//                    if (num[i] == 2)
//                    {
//                        return 1;
//                    }
//                }
//            }
//            m /= 10;
//        }
//    }
//    return 0;
//}



////����Ҫ��ʵ��һ����������ͳ����һ������ĳ��λ�����ֵĴ�����
////���� - 21252�У�2������3�Σ���ú���Ӧ�÷���3��
//#include <stdio.h>
//#include <stdlib.h>
//int Count_Digit(const int N, const int D);
//
//int main()
//{
//    int N, D;
//
//    scanf("%d %d", &N, &D);
//    printf("%d\n", Count_Digit(N, D));
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//int Count_Digit(const int N, const int D)
//{
//    int n = abs(N);
//    if (n == 0)
//    {
//        return 1;
//    }
//    int i = 0;
//    int num[10] = { 0 };
//    while (n)
//    {
//        if (D == n % 10)
//        {
//            num[D] = num[D] + 1;
//        }
//        n /= 10;
//    }
//    return num[D];
//}

////����Ҫ��ʵ��һ����ӡ�Ǹ������׳˵ĺ�����
////����N���û�����Ĳ�������ֵ������1000��
////���N�ǷǸ���������ú���������һ���д�ӡ��N!��ֵ��
////�����ӡ��Invalid input����
//
//#include <stdio.h>
//
//void Print_Factorial(const int N);
//
//int main()
//{
//    int N;
//
//    scanf("%d", &N);
//    Print_Factorial(N);
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//void Print_Factorial(const int N)
//{
//    if (N < 0)
//    {
//        printf("Invalid input\n");
//        return;
//    }
//    else
//    {
//        int i = 1;
//        long long ret = 1;
//        for (i = 1; i < N; i++)
//            ret *= i;
//        printf("%lld\n", ret);
//    }
//
//}



//struct ListNode
//{
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
// 
//
//class Solution
//{
//    ListNode* Mid(ListNode* head)
//    {
//        ListNode* fast = head;
//        ListNode* slow = head;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow;
//    }
//    ListNode* Reverse(ListNode* head)
//    {
//        ListNode* pre = nullptr;
//        ListNode* cur = head;
//        while (cur)
//        {
//            ListNode* nxt = cur->next;
//            cur->next = pre;
//            pre = cur;
//            cur = nxt;
//        }
//        return pre;
//    }
//public:
//    bool isPalindrome(ListNode* head)
//    {
//        ListNode* mid = Mid(head);
//        ListNode* head2 = Reverse(mid);
//        while (head2)
//        {
//            if (head->val != head2->val)
//                return false;
//            head = head->next;
//            head2 = head2->next;
//        }
//        return true;
//    }
//};


