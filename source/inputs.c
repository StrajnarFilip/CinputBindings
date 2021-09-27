#include "inputCommon.h"
#include "mouse.h"
#include "keyboard.h"
#define ExportDll __declspec(dllexport)

ExportDll void MouseLeftButtonUp()
{
    INPUT input;
    SetupLeftUp(&input);
    SendSingleInput(&input);
}

ExportDll void MouseLeftButtonDown()
{
    INPUT input;
    SetupLeftDown(&input);
    SendSingleInput(&input);
}

ExportDll void LeftClick()
{
    MouseLeftButtonDown();
    MouseLeftButtonUp();
}

ExportDll void MouseRightButtonUp()
{
    INPUT input;
    SetupRightUp(&input);
    SendSingleInput(&input);
}

ExportDll void MouseRightButtonDown()
{
    INPUT input;
    SetupRightUp(&input);
    SendSingleInput(&input);
}

ExportDll void RightClick()
{
    MouseRightButtonDown();
    MouseRightButtonUp();
}

ExportDll void MouseMoveAbsoluteNormalized(long x_normalized, long y_normalized)
{
    INPUT input;
    SetupMoveNormalized(&input, x_normalized, y_normalized);
    SendSingleInput(&input);
}

ExportDll void KeyboardDown(unsigned short keyCode)
{
    INPUT input;
    SetupKeyDown(&input, keyCode);
    SendSingleInput(&input);
}

ExportDll void KeyboardUp(unsigned short keyCode)
{
    INPUT input;
    SetupKeyUp(&input, keyCode);
    SendSingleInput(&input);
}

ExportDll void KeyboardPress(unsigned short keyCode)
{
    KeyboardDown(keyCode);
    KeyboardUp(keyCode);
}

