// C-010 计算PI并使用表格输出.cpp 
// 2023-10-4

#include <stdio.h>

int main()
{
    int sgn = -1; // 定义符号变量
    int oddNumber = 3; // 定义奇数变量
    double PI = 4; // 定义PI的近似值
    int precise = 2; // 循环次数
    printf("请问想使用几次循环来估计PI的值呢？\n");
    scanf_s("%d", &precise);
    printf("项数\t 近似值\n");
    printf("第1项\t 4.000000\n");
    for (int i = 1; i <= precise; i++) {
        PI += (double)sgn * 4 / oddNumber;
        oddNumber += 2;
        sgn *= -1;
        //printf("第%d项\t %f\n", i+1, PI);
    }
    printf("%.9f", PI);
    /*
    第10000项        3.141493
    第10001项        3.141693
    */
    //感觉收敛比较慢...
    /*
    第100000项       3.141583
    第100001项       3.141603
    */
    // 取消反复的输出，计算1 000 000 、 10 000 000 、100 000 000次
    // 第1 000 000 项   3.141593654
    // 第10 000 000 项    3.141592754
    // 第100 000 000 项    3.141592664
}
