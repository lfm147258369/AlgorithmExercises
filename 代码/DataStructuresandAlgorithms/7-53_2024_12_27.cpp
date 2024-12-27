// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     long long N = 0;
//     cin >> N;
//     vector<int> s1;
//     vector<int> s2;
//     for (long long i = 0; i < N; i++)
//     {
//         int tmp = 0;
//         cin >> tmp;
//         s1.push_back(tmp);
//     }
//     for (long long i = 0; i < N; i++)
//     {
//         int tmp = 0;
//         cin >> tmp;
//         s2.push_back(tmp);
//     }
//     long long j = 0;
//     long long k = 0;
//     vector<int> s3;
//     while (j < s1.size() && k < s2.size())
//     { 
//         if (s1[j] < s2[k])
//         {
//             s3.push_back(s1[j]);
//             j++;
//         }
//         else if (s2[k] < s1[j])
//         {
//             s3.push_back(s2[k]);
//             k++;
//         }
//         else
//         {
//             s3.push_back(s2[k]);
//             j++;
//             k++;
//         }
//     }
//     while (j < s1.size())
//     {
//         s3.push_back(s1[j]);
//         j++;
//     }
//     while (k < s2.size())
//     {
//         s3.push_back(s2[k]);
//         k++;
//     }
//     long long mid = s3.size() / 2 - 1;
//     cout << s3[mid];
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    vector<int> s1(N * 2);
    for (int i = 0; i < N; i++)
        cin >> s1[i];
    for (int i = N; i < 2 * N; i++)
        cin >> s1[i];
    sort(s1.begin(), s1.end());
    cout << s1[(s1.size() - 1) / 2];
    return 0;
}