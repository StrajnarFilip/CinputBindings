#pragma once
#include <windows.h>

void BasicMouseSetup(INPUT *input)
{
    input->type = INPUT_MOUSE;
    input->mi.dx = 0;
    input->mi.dy = 0;
    input->mi.mouseData = 0;
    input->mi.time = 0;
}

void SetupLeftDown(INPUT *input)
{
    BasicMouseSetup(input);
    input->mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
}

void SetupLeftUp(INPUT *input)
{
    BasicMouseSetup(input);
    input->mi.dwFlags = MOUSEEVENTF_LEFTUP;
}

void SetupRightDown(INPUT *input)
{
    BasicMouseSetup(input);
    input->mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
}

void SetupRightUp(INPUT *input)
{
    BasicMouseSetup(input);
    input->mi.dwFlags = MOUSEEVENTF_RIGHTUP;
}

void SetupMiddleDown(INPUT *input)
{
    BasicMouseSetup(input);
    input->mi.dwFlags = MOUSEEVENTF_MIDDLEDOWN;
}

void SetupMiddleUp(INPUT *input)
{
    BasicMouseSetup(input);
    input->mi.dwFlags = MOUSEEVENTF_MIDDLEUP;
}

void SetupMoveNormalized(INPUT *input, LONG XcoordinatesNormalized, LONG YcoordinatesNormalized)
{
    input->type = INPUT_MOUSE;
    input->mi.mouseData = 0;
    input->mi.time = 0;
    input->mi.dwFlags = (MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE);
    input->mi.dx = XcoordinatesNormalized;
    input->mi.dy = YcoordinatesNormalized;
}