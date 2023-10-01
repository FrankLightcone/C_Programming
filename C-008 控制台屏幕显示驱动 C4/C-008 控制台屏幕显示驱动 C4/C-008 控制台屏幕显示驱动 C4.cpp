// C-008 控制台屏幕显示驱动 C4.cpp : 
// 2023-9-30
// 功能1：实现dot点输出 OK！
// 功能2：将显示范围用线圈定出来 OK！
// 功能3：实现线段输出 OK！
// 功能4：改变字体，暂时手动完成吧
// 

#include <stdio.h>
#include <malloc.h>
#include <math.h>


// 设置屏幕矩阵
int **screenMatrix;
// 屏幕矩阵大小
int xSize, ySize;

// 设置屏幕的大小以作为像素矩阵大小方便进行处理
int **setScreenSize(int x, int y) {
    // 定义一个 **型int变量（整形指针的指针变量）
    int** matrix = (int**)malloc(sizeof(int*) * y);
    // 这一步却为每一行分配了该行的大小
    for (int colume = 0; colume < y; colume++) {
        matrix[colume] = (int*)malloc(sizeof(int) * x);
    }
    // 格式化屏幕，即清屏
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            // 将矩阵matrix变量中的每一项替换为‘ ’
            matrix[i][j] = ' ';
        }
    }
    return matrix;
}

// 清空屏幕
int **clearScreen(int x, int y, int** sMatrix) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            // 将矩阵sMatrix变量中的每一项替换为‘ ’
            sMatrix[i][j] = ' ';
        }
    }
    return sMatrix;
}

// 在相应的坐标处画点
int **drawDot(int x, int y, int **sMatrix) {
    sMatrix[y][x] = 'O';
    return sMatrix;
}

// 通过两个点画一条线
int **drawLine(int *dot1, int *dot2, int **sMatrix) {
    // 获得差量
    int dy = dot2[1] - dot1[1];
    int dx = dot2[0] - dot1[0];

    // 判断是否是一条竖线
    if (dx == 0) {
        for (int y = 0; y <= abs(dy); y++) {
            sMatrix = drawDot(dot1[0], dot1[1] + y * (dy / abs(dy)), sMatrix);
        }
        return sMatrix;
    }

    // 计算出“增量”k
    double k = (double)dy / dx;
    // 描点
    // 起始点为dot1的x，y
    double y = (double)dot1[1];
    // 定义约过值的Y的变量
    int roundY = round(y);
    for (int x = 0; x <= abs(dx); x++) {
        // (dx / abs(dx)用于为表达式添加符号
        sMatrix = drawDot(dot1[0] + x * (dx / abs(dx)), roundY, sMatrix);
        // 更新y坐标
        if (dx < 0 && dy < 0) {
            y -= k;
        }
        else {
            y += k;
        }
        
        // 将double类型变量y通过四舍五入转换为整形存入roundY
        roundY = round(y);
    }
    // 返回更新过的矩阵
    return sMatrix;
}


// 显示图像
void displayMatrix(int x, int y, int** sMatrix) {
    // 圈定显示范围,上顶
    for (int i = 0; i < x * 2+3; i++) {
        printf("_");
    }
    printf("\n");
    for (int i = 0; i < y; i++) {
        printf("|");
        for (int j = 0; j < x; j++) {
            printf("%2c", sMatrix[i][j]);
        }
        printf(" |\n");
    }

    // 下顶
    for (int i = 0; i < x * 2+3; i++) {
        printf("-");
    }
}

int main()
{
    // 一个英文字符加一个空格的长度与行与行之间的间隔长度相同 亦可使用%2来保持输出对齐一致
    // 设置标准符号 * ，后期可开发多符号显示

    // 设置屏幕大小
    xSize = 300;
    ySize = 300;
    // 创建屏幕矩阵
    screenMatrix = setScreenSize(xSize, ySize);
    // 在屏幕上画点
    //screenMatrix = drawDot(1, 6, screenMatrix);
    //在屏幕上划线
    int d1[2] = { 21,22 };
    int d2[2] = { 2, 2 };
    screenMatrix = drawLine(d1, d2, screenMatrix);
    // 显示屏幕
    displayMatrix(xSize, ySize, screenMatrix);

}

