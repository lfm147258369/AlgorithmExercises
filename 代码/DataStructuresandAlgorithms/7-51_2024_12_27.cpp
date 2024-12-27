#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tmp = 0;
    vector<int> s1;
    vector<int> s2;
    while (tmp != -1)
    {
        cin >> tmp;
        if (tmp != -1)
            s1.push_back(tmp);
    }
    tmp = 0;
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
            s3.push_back(s1[i++]);
        }
        else
        {
            s3.push_back(s2[j++]);
        }
    }
    while (i < s1.size())
    {
        s3.push_back(s1[i++]);
    }
    while (j < s2.size())
    {
        s3.push_back(s2[j++]);
    }
    if (s3.size() == 0)
    {
        cout << "NULL";
    }
    else
    {
        for (int i = 0; i < s3.size(); i++)
        {
            cout << s3[i];
            if (i != s3.size() - 1)
                cout << " ";
        }
    } 

    return 0;
}

