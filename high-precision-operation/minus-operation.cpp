#include <iostream>
#include <string>
using namespace std;

// 判断：s1 是否大于等于 s2
bool isBigger(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();

    // 第一步：比较长度
    if (len1 != len2)
    {
        if (len1 > len2)
        {
            // s1位数更多，s1更大
            return true;
        }
        else
        {
            // len1 < len2，s1位数更少，s1更小
            return false;
        }
    }

    // 走到这里说明：长度相等，逐位比较数字
    for (int i = 0; i < len1; i++)
    {
        char c1 = s1[i];
        char c2 = s2[i];
        if (c1 != c2)
        {
            if (c1 > c2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        // c1 == c2，这一位相同，继续看下一位
    }

    // 全部位都对比完，全部一样，两数相等
    return true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int a[210] = { 0 };
    int b[210] = { 0 };
    int res[210] = { 0 };

    // 把s1逆序放进a数组
    for (int i = 0; i < s1.size(); i++)
    {
        int digit = s1[i] - '0';
        int pos = s1.size() - i - 1;
        a[pos] = digit;
    }
    // 把s2逆序放进b数组
    for (int i = 0; i < s2.size(); i++)
    {
        int digit = s2[i] - '0';
        int pos = s2.size() - i - 1;
        b[pos] = digit;
    }


    bool s1_big = isBigger(s1, s2);
    if (s1_big == true)
    {
        // s1 >= s2，s1减去s2
        for (int i = 0; i < 210; i++)
        {
            res[i] = a[i] - b[i];
            if (res[i] < 0)
            {
                res[i] = res[i] + 10;
                a[i + 1] = a[i + 1] - 1;
            }
        }
    }
    else
    {
        // s1 < s2，用s2减去s1，最后输出负号
        cout << "-";
        for (int i = 0; i < 210; i++)
        {
            res[i] = b[i] - a[i];
            if (res[i] < 0)
            {
                res[i] = res[i] + 10;
                b[i + 1] = b[i + 1] - 1;
            }
        }
    }

    // 找到最高位，跳过前面的0
    int p = 209;
    while (p > 0 && res[p] == 0)
    {
        p = p - 1;
    }
    // 逆序输出
    for (int i = p; i >= 0; i--)
    {
        cout << res[i];
    }
    std::cout<<std::endl;
    system("pause");
    return 0;
}

 
