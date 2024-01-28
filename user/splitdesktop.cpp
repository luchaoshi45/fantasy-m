#include "splitdesktop.h"

SplitDesktop::SplitDesktop() {}

HWND _workerw = nullptr;
HWND windowHandle = nullptr;
int m_result = 0;
inline BOOL CALLBACK EnumWindowsProc(_In_ HWND tophandle, _In_ LPARAM topparamhandle)
{
    HWND defview = FindWindowEx(tophandle, 0,  L"SHELLDLL_DefView", nullptr);
    if (defview != nullptr)
    {
        _workerw = FindWindowEx(0, tophandle,  L"WorkerW", 0);
    }
    return true;
}//遍历句柄的回调函数
HWND SplitDesktop::GetWorkerW() {
    windowHandle = FindWindow( L"Progman", nullptr);
    SendMessageTimeout(windowHandle, 0x052c, 0, 0, SMTO_NORMAL, 0x3e8, (PDWORD_PTR)&m_result);
    EnumWindows(EnumWindowsProc, (LPARAM)nullptr);
    ShowWindow(_workerw,SW_HIDE);
    return windowHandle;
}//获取桌面最底层的句柄
