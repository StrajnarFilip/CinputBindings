#pragma once
#include "stdio.h"
#include "Windows.h"
#include <time.h>
#include <stdlib.h>

extern void MouseLeftButtonUp();

extern void MouseLeftButtonDown();

extern void LeftClick();

extern void MouseRightButtonUp();

extern void MouseRightButtonDown();

extern void RightClick();

extern void MouseMoveAbsoluteNormalized(long x_normalized, long y_normalized);

extern void KeyboardDown(unsigned short keyCode);

extern void KeyboardUp(unsigned short keyCode);

extern void KeyboardPress(unsigned short keyCode);

extern int ScreenWidthX();

extern int ScreenHeightY();

int CachedX;
int CachedY;

void MouseMoveToPixel(long x_pixel, long y_pixel)
{
    long calculatedNormalizedX = (x_pixel * 65535)/CachedX;
    long calculatedNormalizedY = (y_pixel * 65535)/CachedY;

    MouseMoveAbsoluteNormalized(calculatedNormalizedX, calculatedNormalizedY);
}

void Setup()
{
    srand(time(NULL));
    CachedX = ScreenWidthX() ;
    CachedY = ScreenHeightY() ;
}

int GetRandomNumber()
{
    return rand();
}