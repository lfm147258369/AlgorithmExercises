// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> s1;
//     vector<int> s2;
//     int tmp = 0;
//     while (tmp != -1)
//     {
//         cin >> tmp;
//         if (tmp != -1)
//             s1.push_back(tmp);
//     }
//     tmp = 0;
//     while (tmp != -1)
//     {
//         cin >> tmp;
//         if (tmp != -1)
//             s2.push_back(tmp);
//     }
//     vector<int> s3;

//     int i = 0;
//     int j = 0;
//     while (i < s1.size())
//     { 
//         if (s1[i] == s2[j])
//         {
//             s3.push_back(s1[i]);
//             i++;
//             j++;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     i = 0;
//     j = 0;
//     while (j < s2.size())
//     {
//         if (s1[i] == s2[j])
//         {
//             s3.push_back(s2[j]);
//             i++;
//             j++;
//         }
//         else
//         {
//             j++;
//         }
//     }

//     for (int i = 0; i < s3.size(); i++)
//     {
//         cout << s3[i];
//         if (i != s3.size() - 1)
//             cout << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> s1;
    vector<int> s2;
    int tmp = 0;
    // 读入第一个链表序列
    while (tmp != -1)
    {
        cin >> tmp;
        if (tmp != -1)
            s1.push_back(tmp);
    }
    tmp = 0;
    // 读入第二个链表序列
    while (tmp != -1)
    {
        cin >> tmp;
        if (tmp != -1)
            s2.push_back(tmp);
    }

    vector<int> s3;
    int i = 0;
    int j = 0;
    while (i < s1.size() && j < s2.size())
    { 
        if (s1[i] < s2[j])
        {
            i++;
        }
        else if (s1[i] > s2[j])
        {
            j++;
        }
        else
        {
            s3.push_back(s1[i]);
            i++;
            j++;
        }
    }
    if (s3.size() == 0)
    {
        cout << "NULL";
    }
    else
    {
        for (int k = 0; k < s3.size(); k++)
        {
            cout << s3[k];
            if (k != s3.size() - 1)
            {
                cout << " ";
            }
        }
    }
    return 0;
}