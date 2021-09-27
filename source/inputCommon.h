#pragma once
#include <windows.h>
#include "mouse.h"
#include "keyboard.h"

void SendSingleInput(INPUT* input)
{
    SendInput(1, input, sizeof(INPUT));
}