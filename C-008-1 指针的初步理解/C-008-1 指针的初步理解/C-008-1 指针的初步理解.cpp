﻿// 2023-9-30
//

#include <stdio.h>

int main()
{
    int *a;// 定义一个变量名为a的 类型为整形指针的 变量
    int b;// 定义一个变量名为b的 类型为整形的 变量
    b = 1;// 将 1 这个值以二进制00000001的形式存入
    //（b变量所代表的内存空间）即b变量本身就指代d1那个内存空间中
    a = &b;//将b变量的内存地址作为值赋给类型为 整形指针 的变量a
    printf("a 的值为：%d ; b 的值为：%d\n", a, b);
    printf("a 的值 取值 为：%d ; b 的值为：%d\n", *a, b);
    int **c;//定义一个变量名为c的 类型为整形指针的指针的 变量，
    // 它可以储存指针变量所在的内存地址，即有：
    c = &a;// 将a变量的地址给了c存储起来
    printf("c 的值为：%d ; a 的值为：%d\n", c, a);
    printf("c 的值 取值 为：%d ; a 的值为：%d\n", *c, a);
    printf("c 的值 取值 的 取值 为：%d ; a 的值为：%d\n", **c, a);


}

