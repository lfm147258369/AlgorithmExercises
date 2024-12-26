// 7-1 最大子列和问题
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int ret[100000];
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        cin >> tmp;
        ret[i] = tmp;
    }
    int sum = 0;
    int max = ret[0];
    for (int i = 0; i < n; i++)
    {
        sum += ret[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max << endl;
}