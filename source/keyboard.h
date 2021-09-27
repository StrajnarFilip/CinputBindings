#pragma once
#include <windows.h>

void BasicKeyboardSetup(INPUT *input)
{
    input->type = INPUT_KEYBOARD;
    input->ki.wScan = 0;
    input->ki.time = 0;
    input->ki.dwExtraInfo = 0;
}

void SetupKeyDown(INPUT *input, WORD keyCode)
{
    BasicKeyboardSetup(input);
    input->ki.wVk = keyCode;
    input->ki.dwFlags = 0;
}

void SetupKeyUp(INPUT *input, WORD keyCode)
{
    BasicKeyboardSetup(input);
    input->ki.wVk = keyCode;
    input->ki.dwFlags = KEYEVENTF_KEYUP;
}