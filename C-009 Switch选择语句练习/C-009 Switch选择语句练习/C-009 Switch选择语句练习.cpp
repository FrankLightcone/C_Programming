// C-009 Switch选择语句练习.cpp 
//

#include <stdio.h>
int a = 0;

int main()
{
    printf("请选择《三体》中你最喜欢的角色（请输入序号）：\n1、章北海\n2、罗辑\n3、\
维德\n4、大史\n5、云天明\n6、程心\n7、艾AA\n8、叶文洁\n9、汪淼\n");
    scanf_s("%d", &a);
    switch (a)
    {
    case 1:
        printf("没事的，都一样 成为军人的那一刻起，我就准备好了去往任何地方\n");
        break;
    case 2:
        printf("人类不感谢罗辑，但我，面壁者罗辑，现在对三体世界说话\n");
        break;
    case 3:
        printf("前进！不择手段的前进！\n");
        break;
    case 4:
        printf("邪乎到家必有鬼\n");
        break;
    case 5:
        printf("来了，爱了，送了她一颗星星，走了\n");
        break;
    case 6:
        printf("我在攀爬责任的阶梯\n");
        break;
    case 7:
        printf("我们度过了幸福的一生\n");
        break;
    case 8:
        printf("不管怎样，我都尽了责任\n");
        break;
    case 9:
        printf("虫子从来没有被真正战胜过！\n");
        break;
    }
    if (a != 0) {
        main();
    }
}
