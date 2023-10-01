// C-008-2 数组分配内存与多维数组的初步理解.cpp
// 2023-9-30

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //// 一维数组
    //int a[3] = {1, 2, 3};
    //// 正常读取数值的值
    //printf("a[0] = %d;a[1] = %d;a[2] = %d;\n", a[0], a[1], a[2]);
    //// 取数组a的地址
    //int *aAddress = &a[0];
    //printf("数组a的地址为：%d ; 数组a的第一项的取值为：%d\n", aAddress, *aAddress);
    //printf("数组a的第二项地址为第一项地址加上int类型大小:%d,而真实地址为：%d\n", aAddress + 1, &a[1]);
    //printf("数组a的第二项的取值为: %d\n", *aAddress);
    //// 二维数组
    //int b[2][2] = {{1, 2}, {3, 4}};
    //// 正常读取数值的值
    //printf("b[0][0] = %d;b[0][1] = %d;b[1][0] = %d;b[1][1] = %d\n", b[0][0], b[0][1], b[1][0], b[1][1]);
    //printf("数组b的地址为：%d ; 数组b的第一项的取值为：%d\n", &b[0][0], b[0][0]);
    //printf("数组a的第三项的取值为: %d\n\n", *(&b[0][0] + 2));
    ///*  输出 
    //a[0] = 1;a[1] = 2;a[2] = 3;
    //数组a的地址为：-439354312 ; 数组a的第一项的取值为：1
    //数组a的第二项地址为第一项地址加上int类型大小:-439354308,而真实地址为：-439354308
    //数组a的第二项的取值为: 1
    //b[0][0] = 1;b[0][1] = 2;b[1][0] = 3;b[1][1] = 4
    //数组b的地址为：-439354232 ; 数组b的第一项的取值为：1
    //数组a的第三项的取值为: 3
    //*/

    //// 为一位数组分配内存
    //int n = 100;
    //int *m = (int* )malloc(sizeof(int) * n);
    //for (int i = 0; i < n; i++) {
    //    m[i] = i;
    //}
    //for (int i = 0; i < n; i++) {
    //    printf("数组n中的第%d个元素为：%d\n" , i, m[i]);
    //}
    //
    // 为二维数组分配内存
    // 设定二维数组的大小
    //int n2x = 9, n2y = 12;
    //// 定义一个 **型int变量（整形指针的指针变量），其结构为{{y1...},{y2...},{y3...},...,{yn2y...}}
    //// n2y为行数，其指代一个指针，该指针指向每一行的开头
    //int **matrix = (int**)malloc(sizeof(int*) * n2y);
    //// 这一步却为每一列分配了该列的大小
    //for (int colume = 0; colume < n2y; colume++) {
    //    matrix[colume] = (int*)malloc(sizeof(int)*n2x);
    //}
    //// 为数组赋值
    //for (int i = 0; i < n2y; i++) {
    //    for (int j = 0; j < n2x; j++) {
    //        matrix[i][j] = ' ';
    //    }
    //}

    //matrix[2][2] = 1;
    //for (int i = 0; i < n2y; i++) {
    //    for (int j = 0; j < n2x; j++) {
    //        printf("%2c", matrix[i][j]);
    //    }
    //    printf("\n");
    //}

    //// 另一种实现方法
    //// 直接申请一个y行x列的数组
    //int(*p)[2] = (int(*)[2])malloc(sizeof(int) * n2x * n2y);
    //for (int i = 0; i < n2y; i++) {
    //    for (int j = 0; j < n2x; j++) {
    //        p[i][j] = 0;
    //    }
    //}
    //// 变量指针
    //int (*pzz)[2] = p;
    //// 看是否会更改原始数据
    //p[5][5] = 1;
    //for (int i = 0; i < n2y; i++) {
    //    for (int j = 0; j < n2x; j++) {
    //        printf("%2d", p[i][j]);
    //    }
    //    printf("\n");
    //}


    printf("___________________________\n");
}


