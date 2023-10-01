// C-007 期望心率计算器 C3.cpp : 
// 2023-9-29

#include <stdio.h>
#include <math.h>

int main()
{
	int age = 0;
	int HighestHeartRate = 220;
	int birthYear = 1990;
	int birthMonth = 1;
	int birthDay = 1;
	int ToYear, ToMonth, ToDay;
	printf("请输入您的出生年月日（用空格分开，例如1990年1月1日：1990 1 1）：\n");
	scanf_s("%d %d %d", &birthYear, &birthMonth, &birthDay);
	printf("请输入现在的年月日（用空格分开，例如2023年1月1日：2023 1 1）：\n");
	scanf_s("%d %d %d", &ToYear, &ToMonth, &ToDay);

	// 下面将计算周岁年龄
	// 基准年龄
	int baseAge = ToYear - birthYear;
	// 若现在月份大于了出生月份，则已满周岁
	if (ToMonth > birthMonth)
	{
		age = baseAge;
	} // 若小于，则未满
	else if (ToMonth < birthMonth)
	{
		age = baseAge - 1;
	} // 若等于，判断日期的大小
	else
	{
		if (ToDay >= birthDay) // 已满
		{
			age = baseAge;
		}
		else // 未满
		{
			age = baseAge - 1;
		}
	}
	// 得到当前年龄的最大心率
	HighestHeartRate -= age;
	// 计算期望心率的范围
	float UExpectHeartRate = 0.85 * HighestHeartRate;
	float DExpectHeartRate = 0.5 * HighestHeartRate;
	// 输出结果
	printf("你现在的年龄为：%d\n", age);
	printf("你的最高心率为：%d\n", HighestHeartRate);
	printf("你的期望心率位于：%d到%d之间", (int)(DExpectHeartRate), (int)(UExpectHeartRate));
	// 如何将float的小数部分去除 使用库中的floor函数 
}
