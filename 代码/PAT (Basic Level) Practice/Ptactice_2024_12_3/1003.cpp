//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//int main()
//{
//    string s;
//    int n = 0;
//    int t = 0;
//    int p = 0;
//    cin >> n;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        cin >> s;
//        map <char, int> m;
//
//        int j = 0;
//        for (j = 0; j < s.size(); j++)
//        {
//            m[s[j]]++;//统计字符种类数，以及每种字符的个数
//            if (s[j] == 'P')
//            {
//                p = j;
//            }
//            if (s[j] == 'T')
//            {
//                t = j;
//            }
//        }
//        if (m['T'] == 1 && //T只有一个
//            m['P'] == 1 && //P只有一个
//            m.size() == 3&& //只有P，A，T三种字符
//            t - p > 1 && //P和T之间必须有A
//            m['A'] != 0 &&//A的个数不为0
//            p * (t - p - 1) == s.length() - t - 1//P前的A * PT间的A == T后的A
//            )
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}