// C-Learn01.cpp  
// C 语言 程序设计基础 01 I/O控制输出流 猜数字游戏

// 导入标准库
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// 循环是否继续进行
    bool isGoing = true;
	// 输出程序信息
	printf("猜数字游戏 V1.0\nAuthor:Frank\nTime:2023-9-26\n");

	while (isGoing)
	{
		printf("正在生成随机数...\n");
		// 生成随时间而来的种子.以确保该游戏的真（伪）随机性
		unsigned int sort = time(NULL);
		srand(sort);
		// 生成一个范围为1-100随机数
		int randomNumber = rand()%100+1;
		// 记录玩家猜测的数字
		int playerNumber = 0;
		// Prompt
		printf("请输入一个1-100的数字：\n");
		bool isGuessing = true;
		while (isGuessing)
		{
			// 接受玩家的输入
			scanf_s("%d", &playerNumber);
			// 进行数字大小判断，获得结果
			if (playerNumber > randomNumber)
			{
				printf("数字大了哦，再猜一次吧！\n");
			}
			else if(playerNumber < randomNumber)
			{
				printf("数字小了哦，再猜一次吧！\n");
			}
			else
			{
				printf("恭喜你，猜对了！\n");
				printf("还要继续玩吗？继续请输入 1，停止请输入 0\n");
				// 接受玩家输入，控制程序是否继续进行
				int IsOK = 0;
				scanf_s("%d", &IsOK);
				if (IsOK == 0)
				{
					isGoing = false;
				}
				// 终止继续猜数字（已经猜中了）
				isGuessing = false;
			}
		}
		
	}
}
