// C-005 测试计算机速度.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <time.h>

int main()
{
	clock_t st, et;
	st = clock();
	int i = 0;
	while (true)
	{
		i++;
		if (i > 1000000000)
		{
			break;
		}
	}
	et = clock();
	printf("%f", ((double)(et - st)) / CLK_TCK);
	// 电脑运行速度还是非常快的！
	// 0.676秒就完成了 i9-13900 太六了
}

