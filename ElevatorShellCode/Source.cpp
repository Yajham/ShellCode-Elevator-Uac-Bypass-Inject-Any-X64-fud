#pragma comment(lib, "NoCRTtest1.lib")

extern "C" bool Elevate();
extern "C" bool isElevated();

#include <Windows.h>

int main()
{
    if (isElevated())
        WinExec("cmd.exe", SW_SHOW);
    Elevate();
    return 0;
}