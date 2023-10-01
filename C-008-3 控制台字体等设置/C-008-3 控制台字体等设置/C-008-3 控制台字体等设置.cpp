// C-008-3 控制台字体等设置.cpp 
// 改变字体，将控制台输出的精度提高

//#include <stdio.h>
//
//int main()
//{
//    printf("abcdef\n");
//}

#include <Windows.h>
#include <stdio.h>
struct CONSOLE_FONT
{
	DWORD index;
	COORD dim;
};
typedef BOOL(WINAPI* PROCSETCONSOLEFONT)(HANDLE, DWORD);
typedef BOOL(WINAPI* PROCGETCONSOLEFONTINFO)(HANDLE, BOOL, DWORD, CONSOLE_FONT*);
typedef COORD(WINAPI* PROCGETCONSOLEFONTSIZE)(HANDLE, DWORD);
typedef DWORD(WINAPI* PROCGETNUMBEROFCONSOLEFONTS)();
typedef BOOL(WINAPI* PROCGETCURRENTCONSOLEFONT)(HANDLE, BOOL, CONSOLE_FONT*);
PROCSETCONSOLEFONT SetConsoleFont;
PROCGETCONSOLEFONTINFO GetConsoleFontInfo;
PROCGETNUMBEROFCONSOLEFONTS GetNumberOfConsoleFonts;

typedef BOOL(WINAPI* PROCGETCONSOLEDISPLAYMODE)(LPDWORD);
typedef BOOL(WINAPI* PROCSETCONSOLEDISPLAYMODE)(HANDLE, DWORD, LPDWORD);

int main(int argc, char* argv[]) {
	printf("Hello world!\n");
	return 0;
}

