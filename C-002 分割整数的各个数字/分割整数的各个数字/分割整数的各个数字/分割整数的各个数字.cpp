// 分割整数的各个数字.cpp
// 2023-9-29

#include <stdio.h>
#include <math.h>

int main()
{
    // 初级版本
    //int number = 10000;
    //printf("Please enter a 5 位 number:");
    //scanf_s("%d", &number);
    //printf("%d\t%d\t%d\t%d\t%d", number / 10000, (number % 10000) / 1000, (number % 1000) / 100, (number % 100) / 10, (number % 10));
    // 输入任意位均可输出
    int number = 1;
    printf("Please Enter A Number:");
    scanf_s("%d", &number);
    // 判断数字有多少位
    int weishu = 1;
    int num1 = number;
    while (true)
    {
        num1 /= 10;
        if (num1 != 0)
        {
            weishu += 1;
        }
        else
        {
            printf("这个数字有%d位！拆解后为：\n", weishu);
            break;
        }
    }
    for (int i= 0;i < weishu; i++) 
    {
        int a = pow(10, (weishu - i));
        int b = pow(10 , (weishu - i - 1));
        //printf("a = %d,b = %d", a, b);
        printf("%d\t", (number % a) / b);
    }


    // 这个程序还有一个问题，当输入的数字太大而超出了int的范围时会溢出而产生错误结果
    // 整体效果还可以，待下一步完善
}

