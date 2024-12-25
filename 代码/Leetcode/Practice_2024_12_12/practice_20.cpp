#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

class Solution 
//{
//public:
//    bool isValid(string s) 
//    {
//        if (s.length() % 2)
//        {
//            return false;
//        }
//        stack <char> st;
//        for (char c : s)
//        {
//            if (c == '(')
//                st.push(')');
//            else if (c == '[')
//                st.push(']');
//            else if (c == '{')
//                st.push('}');
//            else
//            {
//                if ((st.empty()) || (st.top() != c))
//                {
//                    return false;
//                }
//                st.pop();
//            }
//        }
//        return st.empty();
//    }
//};

//class Solution
//{
//    unordered_map <char, char> mp = { {'(',')'}, {'[',']'}, {'{','}'} };
//public:
//    bool isValid(string s)
//    {
//        if (s.length() % 2)
//        {
//            return false;
//        }
//        stack <char> st;
//        for (char c : s)
//        {
//            if (mp.find(c) != mp.end())
//            {
//                st.push(mp[c]);
//            }
//            else
//            {
//                if (st.empty() || st.top() != c)
//                {
//                    return false;
//                }
//                st.pop();
//            }
//        }
//        return st.empty();
//        //return true;//err
//    }
//};

//class Solution
//{
//    unordered_map<char, char> mp = { {')','('}, {']','['}, {'}','{'} };
//public:
//    bool isValid(string s)
//    {
//        if (s.length() % 2)
//        {
//            return false;
//        }
//        stack <char> st;
//        for (char c : s)
//        {
//            if (mp.find(c) == mp.end())//这个键一个都没有说明是左括号
//            {
//                st.push(c);
//            }
//            else
//            {
//                if (st.empty() || st.top() != mp[c])//知道键就知道值
//                {
//                    return false;
//                }
//                st.pop();
//            }
//        }
//        return st.empty();
//    }
//};
//int main()
//{
//    string s;
//    cin >> s;
//    Solution sol;
//    cout << sol.isValid(s) << endl;
//}