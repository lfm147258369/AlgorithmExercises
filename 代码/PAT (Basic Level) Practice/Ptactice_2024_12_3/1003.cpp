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
//            m[s[j]]++;//ͳ���ַ����������Լ�ÿ���ַ��ĸ���
//            if (s[j] == 'P')
//            {
//                p = j;
//            }
//            if (s[j] == 'T')
//            {
//                t = j;
//            }
//        }
//        if (m['T'] == 1 && //Tֻ��һ��
//            m['P'] == 1 && //Pֻ��һ��
//            m.size() == 3&& //ֻ��P��A��T�����ַ�
//            t - p > 1 && //P��T֮�������A
//            m['A'] != 0 &&//A�ĸ�����Ϊ0
//            p * (t - p - 1) == s.length() - t - 1//Pǰ��A * PT���A == T���A
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