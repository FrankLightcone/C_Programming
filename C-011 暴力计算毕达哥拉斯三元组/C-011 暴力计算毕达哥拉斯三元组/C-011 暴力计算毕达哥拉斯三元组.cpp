// C-011 暴力计算毕达哥拉斯三元组.cpp 
// 2023-10-4

#include <stdio.h>
#include <math.h>

int main()
{
	// 方法一、暴力枚举法
	// 原理：直接暴力计算所有组合
	int a, b, c; a = b = c = 1;
	int size = 10;
	printf("请输入想要计算的范围：\n");
	scanf_s("%d", &size);
	printf("a\tb\tc\n");
	//for (int i = 1; i <= size; i++) {
	//	for (int o = i; o <= size; o++) { // 避免重复计算
	//		for (int n = o; n <= size; n++) { // 避免掉不可能的c
	//			if (i * i + o * o == n * n) {
	//				if (n - o == 1 || o - i == 1) {
	//					printf("%d\t%d\t%d\t%d\n", i, o, n, n * n);
	//				}
	//				else {
	//					// printf("%d\t%d\t%d\t%d\n", i, o, n, n * n);
	//				}
	//			}
	//		}
	//	}
	//}
	// 方法二、求值判断法 实测快了许多！！！时间复杂度的原因，但是越到后面也会越慢
	double v = 1;
	for (int i = 1; i <= size; i++) {
		for (int o = i; o <= size; o++) { // 避免重复计算
			v = pow(pow(i, 2) + pow(o, 2), 0.5);
			if (v - (int)v == 0) {
				printf("%d\t%d\t%d\n", i, o, (int)v);
			}
		}
	}

}
