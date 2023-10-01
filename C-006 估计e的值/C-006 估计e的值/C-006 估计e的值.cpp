// C-006 估计e的值.cpp 
// 另使用到了阶乘计算
// 2023-9-29

#include <stdio.h>

int 阶乘(int n)
{
    int rus = 1;
    for (int i = 1; i <= n; i++)
    {
        rus *= i;
    }
    return rus;
}

int main()
{
    double e = 1.0;
    // 加10次
    for (int i = 1; i <= 10; i++)
    {
        e += (double)1 / 阶乘(i);
    }
    printf("自然常数e的估计值为：%f", e);
    // 输出了2.71828
    // e的高精度值：2.718281828459045 还是非常接近的
}

