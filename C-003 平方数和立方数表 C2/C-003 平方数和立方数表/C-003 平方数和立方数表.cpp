// C-003 平方数和立方数表.cpp 
//2023-9-29

#include <stdio.h>

int main()
{
    // 初级版本 程序设计 P49 页
    printf("number\tsquare\tcube\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    // 好吧，似乎也没有什么高版本可以扩展其他东西
}
