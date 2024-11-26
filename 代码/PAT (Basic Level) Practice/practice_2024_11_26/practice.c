#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//    char arr[1000];
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count_P = 0;
//    int count_T = 0;
//    int count_A_front = 0;
//    int count_A_middle = 0;
//    int count_A_behind = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s", &arr);
//        int j = 0;
//        int left = 0;
//        int right = 0;
//        int len = strlen(arr);
//        for (j = 0; j < len; j++)
//        {
//            if (arr[j] == 'P')
//            {
//                count_P++;
//                left = j;
//            }
//            else if (arr[j] == 'T')
//            {
//                count_T++;
//                right = j;
//            }
//        }
//        if (count_P == 1 && count_T == 1)
//        {
//            if (len == 3 && arr[0] == '' && arr[1])
//            int k = 0;
//            for (k = 0; k < left; k++)
//            {
//                if (arr[k] == 'A')
//                {
//                    count_A_front++;
//                }
//            }
//            for (k = left; k < right; k++)
//            {
//                if (arr[k] == 'A')
//                {
//                    count_A_middle++;
//                }
//            }
//            for (k = right; k < len; k++)
//            {
//                if (arr[k] == 'A')
//                {
//                    count_A_front++;
//                }
//            }
//            if (count_A_front * count_A_middle == count_A_behind)
//            {
//                printf("YES\n");
//                break;
//            }
//            else
//            {
//                printf("NO\n");
//            }
//            
//        }
//        else
//        {
//            printf("NO\n");
//        }
//
//    }
//    return 0;
//}



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 模拟C++中的map结构来统计字符出现次数
struct Map 
{
    char key;
    int value;
};

// 查找字符在自定义map结构中的位置
int findMap(struct Map* mp, int size, char target) 
{
    for (int i = 0; i < size; i++) 
    {
        if (mp[i].key == target) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        char s[100];
        scanf("%s", s);
        struct Map mp[128];
        int size = 0;
        int flag = 0;
        for (int j = 0; j < strlen(s); j++) 
        {
            int pos = findMap(mp, size, s[j]);
            if (pos == -1)
            {
                mp[size].key = s[j];
                mp[size].value = 1;
                size++;
            }
            else 
            {
                mp[pos].value++;
            }
        }
        int posP = findMap(mp, size, 'P');
        int posT = findMap(mp, size, 'T');
        if (size == 3 && posP != -1 && mp[posP].value == 1 && posT != -1 && mp[posT].value == 1) {
            int l = 0;
            int r = 0;
            for (int k = 0; k < strlen(s); k++) 
            {
                if (s[k] == 'P') 
                {
                    l = k;
                    break;
                }
            }
            for (int k = 0; k < strlen(s); k++) 
            {
                if (s[k] == 'T')
                {
                    r = k;
                    break;
                }
            }
            int len1 = l;
            int len2 = r - l - 1;
            int len3 = strlen(s) - r - 1;
            if (r - l > 1 && len1 * len2 == len3) 
            {
                flag = 1;
            }
        }
        if (flag) 
        {
            printf("YES");
        }
        else 
        {
            printf("NO");
        }
        if (i != n - 1) 
        {
            printf("\n");
        }
    }
    return 0;
}