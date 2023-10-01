// C-004 星号正方形.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
    // 初等版本
    //// 初始化正方形的边长
    //int a = 0;
    //printf("请输入正方形的边长：");
    ////获得用户输入
    //scanf_s("%d", &a);
    //for (int i = 1; i <= a; i++)
    //{
    //    for (int m = 1; m <= a; m++)
    //    {
    //        printf("☆ ");
    //    }
    //    printf("\n");
    //}
    // 
    // 中级版本
    //int a,b = 0;
    //printf("请输入长方形的两条边长：（中间使用空格分开）");
    ////获得用户输入
    //scanf_s("%d %d", &a, &b);
    //for (int i = 1; i <= a; i++)
    //{
    //    for (int m = 1; m <= b; m++)
    //    {
    //        printf("☆ ");
    //    }
    //    printf("\n");

    //}

    //空心长方形
    int a,b = 0;
    printf("请输入长方形的两条边长：（中间使用空格分开）");
    //获得用户输入
    scanf_s("%d %d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        for (int m = 1; m <= b; m++)
        {
            if (m == 1 || m == b || i == 1 || i == a)
            {
                printf("☆ ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");

    }
    

}
